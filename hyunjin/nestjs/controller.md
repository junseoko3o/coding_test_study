# Nest.js의 컨트롤러 (Controllers)

컨트롤러는 Nest.js 애플리케이션의 핵심 구성 요소로, 클라이언트의 요청을 처리하고 응답을 반환하는 역할을 담당합니다. Express에서 라우터와 비슷한 역할을 하지만, 더 구조화되고 객체지향적인 방식으로 구현됩니다.

## 1. 컨트롤러의 기본 개념

컨트롤러는 특정 경로(route)에 대한 요청을 수신하고 적절한 응답을 반환하는 클래스입니다. `@Controller()` 데코레이터를 사용하여 정의됩니다.

```typescript
import { Controller, Get } from '@nestjs/common';

@Controller('cats')  // 'cats' 경로 접두사 설정
export class CatsController {
  @Get()  // GET /cats 요청 처리
  findAll(): string {
    return 'This action returns all cats';
  }
  
  @Get('profile')  // GET /cats/profile 요청 처리
  getProfile(): string {
    return 'This action returns cat profile';
  }
}
```

## 2. 라우트 매개변수

라우트 매개변수는 `@Param()` 데코레이터를 사용하여 접근할 수 있습니다.

```typescript
@Get(':id')  // GET /cats/123
findOne(@Param('id') id: string): string {
  return `This action returns a #${id} cat`;
}
```

## 3. 요청 본문 (Request Body)

POST 요청의 본문은 `@Body()` 데코레이터를 사용하여 접근합니다. DTO(Data Transfer Object)와 함께 사용하면 타입 안전성을 보장할 수 있습니다.

```typescript
// DTO 정의
export class CreateCatDto {
  readonly name: string;
  readonly age: number;
  readonly breed: string;
}

// 컨트롤러에서 사용
@Post()
create(@Body() createCatDto: CreateCatDto): string {
  return `This action adds a new cat named ${createCatDto.name}`;
}
```

## 4. 응답 상태 코드 및 헤더

`@HttpCode()` 및 `@Header()` 데코레이터를 사용하여 응답 상태 코드와 헤더를 설정할 수 있습니다.

```typescript
@Post()
@HttpCode(204)  // 204 No Content 상태 코드 설정
@Header('Cache-Control', 'none')  // 헤더 설정
create(@Body() createCatDto: CreateCatDto) {
  this.catsService.create(createCatDto);
}
```

## 5. 다양한 HTTP 메서드 데코레이터

Nest.js는 모든 표준 HTTP 메서드에 대한 데코레이터를 제공합니다:

- `@Get()`
- `@Post()`
- `@Put()`
- `@Delete()`
- `@Patch()`
- `@Options()`
- `@Head()`
- `@All()` (모든 HTTP 메서드 처리)

## 6. 비동기 컨트롤러 메서드

컨트롤러 메서드는 Promise나 Observable을 반환할 수 있어 비동기 작업을 쉽게 처리할 수 있습니다.

```typescript
@Get()
async findAll(): Promise<Cat[]> {
  return this.catsService.findAll();
}
```

## 7. 요청 객체에 접근하기

Express의 request 객체에 접근하려면 `@Req()` 데코레이터를 사용합니다.

```typescript
import { Request } from 'express';

@Get()
findAll(@Req() request: Request): string {
  console.log(request.ip);
  return 'This action returns all cats';
}
```

그 외에도 특정 요청 정보에 접근하기 위한 데코레이터가 있습니다:

- `@Res()` - 응답 객체
- `@Query()` - 쿼리 파라미터
- `@Headers()` - 헤더
- `@Session()` - 세션
- `@Ip()` - IP 주소

## 8. 컨트롤러 등록

컨트롤러는 모듈의 `controllers` 배열에 등록해야 사용할 수 있습니다.

```typescript
import { Module } from '@nestjs/common';
import { CatsController } from './cats.controller';

@Module({
  controllers: [CatsController],
})
export class CatsModule {}
```

## 9. 서비스와 의존성 주입

컨트롤러는 일반적으로 서비스 계층과 함께 작동하며, 생성자를 통해 의존성을 주입받습니다.

```typescript
@Controller('cats')
export class CatsController {
  constructor(private readonly catsService: CatsService) {}

  @Get()
  async findAll(): Promise<Cat[]> {
    return this.catsService.findAll();
  }
}
```

이렇게 구성된 컨트롤러는 비즈니스 로직을 서비스에 위임하고, HTTP 요청 처리와 응답 형식 지정에만 집중할 수 있어 관심사 분리(Separation of Concerns)를 실현합니다.