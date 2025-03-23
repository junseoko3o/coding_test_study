import { Controller, Get, Post } from '@nestjs/common';

@Controller('getpost')
export class GetPostController {
  @Get()
  getHello(): string {
    return 'GET Hello!';
  }

  @Get('/depth')
  getDepth(): string {
    return 'Depth Hello!';
  }

  @Get('/depth/one')
  getDepthOne(): string {
    return 'Depth ONE Hello!';
  }

  @Get('/depth/*one')
  getDepthAsterisk(): string {
    return 'Depth * Hello!';
  }

  @Post()
  postHello(): string {
    return 'POST Hello!';
  }
}
