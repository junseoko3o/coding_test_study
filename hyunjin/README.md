# 자바스크립트 이론

## 개요

자바스크립트는 인터프리터 (혹은 JIT 컴파일) 언어이며, 웹 페이지에서의 스크립트 언어나 Node.js 같은 브라우저가 아닌 환경의 스크립트 언어.

### 프로토타입

프로토타입 기반 언어로, 객체를 생성하고 상속하는데 프로토타입을 사용.

```javascript
// 기본 객체 생성
let person = {
  firstName: "Jane",
  lastName: "Doe",
  getFullName: function() {
    return this.firstName + " " + this.lastName;
  }
};

// 새로운 객체 생성 및 프로토타입 설정
let employee = Object.create(person);
employee.jobTitle = "Developer";

console.log(employee.getFullName()); // 출력: Jane Doe
console.log(employee.jobTitle); // 출력: Developer
```

해당 코드에서 person 객체를 기본으로 하여 employee 객체를 프로토타입으로 사용하여 생성.

### 단일 스레드

자바스크립트는 단일스레드 언어로 한 번에 하나의 작업만을 처리할 수 있음.

이는 코드가 순차적으로 작동한다는 것을 의미하지만, 비동기 프로그래밍을 통해 여러 작업을 동시에 처리하는 것 처럼 보이게 할 수 있음.

아래에 기재하는 장단점은 단일 스레드 자체의 장단점이라고 이해하면 됨.

#### 장점

- 다중 스레드 환경에서 발생할 수 있는 복잡한 동기화 문제를 피할 수 있음 (예: 데드락, 경쟁 상태 등)
- 비교적 단순하고 코드가 예측 가능함

#### 단점

- CPU 집약적인 작업에 비효율적
- 멀티코어 활용 제한

### 동적 언어

자바스크립트는 동적 언어로, 코드가 실행되는 동안 변수의 타입이 변경 될 수 있음.

```javascript
let x = 10; // x는 숫자
console.log(x); // 출력: 10
x = "Hello, World!"; // 문자열로 변경
console.log(x); // 출력: Hello, World!
```

### 객체

### ES6+

### 비동기 처리

### 오류 처리, 디버깅

### DOM 조작과 이벤트

### 모듈과 번들링

### 기타

- 함수형 프로그래밍 기초
- 프로토타입 기반 상속과 클래스 기반 상속
- 옵저버 패턴과 EventEmitter, RxJS
- 자바스크립트 런타임과 Node.js

## 참고자료

- MDN (<https://developer.mozilla.org/ko/docs/Web/JavaScript>)
