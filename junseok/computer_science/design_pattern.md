# 디자인 패턴
- 프로그램을 설계할 때 발생했던 문제점들을 객체 간의 상호 관계 등을 이용하여 해결할 수 있도록 하나의 규약 형태로 만들어 놓은 것.
  
## 싱글톤 패턴
- 하나의 클래스에 오직 하나의 인스턴스만 가지는 패턴
- 하나의 클래스를 기반으로 여러 개의 개별적인 인스턴스를 만들 수 있지만, 그렇게 하지 않고 하나의 클래스를 기반으로 단 하나의 인스턴스를 만들어 이를 기반으로 로직을 만드는데 쓰이며, 보통 데이터베이스 연결 모듈에 많이 사용.
- 하나의 인스턴스를 만들어 놓고 해당 인스턴스를 다른 모듈들이 공유하며 사용하기 때문에 인스턴스를 생성할 때 드는 비용이 줄어드는 장점. 하지만 의존성이 높어진다는 단점도 존재.

### 자바스크립트의 싱글톤 패턴
- 리터럴 {} 또는 new Object로 객체를 생성하게 되면 다른 어떤 객체와도 같지 않기 때문에 이 자체로 싱글톤 패턴 구현 가능.
```javascript
const obj = {
  a: 27
}

const obj2 = {
  a: 27
}
console.log(obj === obj2) // false
```
- obj와 obj2는 다른 인스턴스를 가진다.

```javascript
class Singleton {
  constructor() {
    if (!Singleton.instance) {
      Singletone.instance = this
    }
    return Singleton.instance
  }
  getInstance() {
    return this.instance
  }
}
const a = new Singleton()
const b = new Singleton()
console.log(a === b) // true 
// a와 b는 Singleton.instance라는 하나의 인스턴스를 가지는 Singleton클래스를 통해 하나의 인스턴스를 갖게된다.
```

### 데이터베이스 연결 모듈
```javascript
const URL = "mongodb://localhost:27017/kundolapp"
const createConnection = url => ({ "url" : url })
class DB {
  constructor(url) {
    if(!DB.instance) {
      DB.instance = createConnection(url)
    }
    return DB.instance
  }
  connect() {
    return this.instance
  }
}
const a = new DB(URL)
const b = new DB(URL)
console.log(a === b) // true
```

### 자바에서의 싱글톤 패턴
```java
class Singleton {
  private static class singleInstanceHolder {
    private static final Singleton INSTANCE = new Singleton();
  }
  public static Singleton getInstance() {
    return singleInstanceHolder.INSTANCE;
  }
}

public class HelloWorld {
  public static void main(String[] args) {
    Singleton a = Singleton.getInstance();
    Singleton b = Singleton.getInstance();
    System.out.println(a.hashCode());
    System.out.println(b.hashCode());
    if (a == b) {
      System.out.println(true);
    }
  }
}
// 705927765
// 705927765
// true
```

### mongoose의 싱글톤 패턴
- mongoose의 데이터베이스를 연결 할 때 쓰는 connect()라는 함수는 싱글톤 인스턴스를 반환한다.

### MySQL의 싱글톤 패턴
- 메인 모듈에서 데이터베이스 연결에 관한 인스턴스를 정의하고 다른 모듈인 A 또는 B에서 해당 인스턴스를 기반으로 쿼리를 보내는 형식으로 쓰인다.

### 싱글톤 패턴의 단점
- TDD(test Driven Development)를 할 때 걸림돌
- 단위테스트는 테스트가 서로 독립적이어야 하며 테스트를 어떤 순서로든 실행할 수 있어야 한다. 싱글톤 패턴은 미리 생성된 하나의 인스턴스를 기반으로 구현하는 패턴이라 각 테스트마다 독립적인 인스턴스를 만들기 어렵다.
- 의존성 주입
  - 모듈 간의 결합을 강하게 만들 수 있다는 단점이 있지만, 의존성 주입을 통해 모듈 간의 결합을 좀 더 느슨하게 만들 수 있다.
  - 장점
    - 모듈들을 쉽게 교체할 수 있는 구조가 되어 테스팅하기 쉽고 마이그레이션하기도 수월하다. 또한 구현할 때 추상화 레이어를 넣고 이를 기반으로 구현체를 넣어 주기 때문에 애플리케이션 의존성 방향이 일관되고, 애플리케이션을 쉽게 추론 가능하며, 모듈 간의 관계들이 좀 더 명확해진다.
  - 단점
    - 모듈들이 더더욱 분리되어 클래스 수가 늘어나 복잡성이 증가될 수 있으며 약간의 런타임 패널티가 생기기도 한다.
  - 의존성 주입 원칙
    - 상위 모듈은 하위 모듈에서 어떠한 것도 가져오지 않아야한다. 또한 둘 다 추상화에 의존해야하며, 이때 추상화는 세부 사항에 의존하지 말아야한다.

## 팩토리 패턴
- 객체를 사용하는 코드에서 객체 생성 부분을 떼어내 추상화한 패턴이자 상속 관계에 있는 두 클래스에서 상위 클래스가 중요한 뼈대를 결정하고, 하위 클래스에서 객체 생성에 관한 구체적인 내용을 결정
- 상위,하위 클래스가 분리되기 때문에 느슨한 결합을 가지며, 상위 클래스에서는 인스턴스 생성 방식에 대해 전혀 알 필요가 없어 유연성을 갖게 된다.
- 객체 생성 로직이 따로 떼어져 있어서 리팩토링에서도 한 곳만 고칠수 있어 유지보수에도 좋다.

## 전략 패턴
- 정책 패턴이라고도 하며, 객체의 행위를 바꾸고 싶은 경우 직접 수정하지 않고 전략이라 부르는 캡슐화한 알고리즘을 컨텍스트안에서 바꿔주면서 상호 교체가 가능하게 만든다.

## 옵저버 패턴
- 주체가 어떤 객체의 상태 변화를 관찰하다가 상태 변화가 있을 때마다 메서드 등을 통해 옵저버 목록에 있는 옵저버들에게 변화를 알려주는 패턴.
- 주로 이벤트 기반 시스템에 사용하며 MVC패턴에도 사용된다.

## 프록시 패턴
- 대상 객체에 접근하기 전 그 접근에 대한 흐름을 가로채 대상 객체 앞단의 인터페이스 역할을 하는 디자인 패턴.
- 이를 통해 객체의 속성,변환 등을 보완하며 보안,데이터 검증, 캐싱, 로깅에 사용  => 프록시 서버로도 사용

### 프록시 서버
- 서버와 클라이언트 사이에서 클라이언트가 자신을 통해 다른 네트워크 서비스에 간접적으로 접속할 수 있게 해주는 컴퓨터 시스템이나 응용 프로그램.
- ex) 비동기 이벤트 기반의 구조와 다수의 연결을 효과적으로 처리 가능한 nginx

## 이터레이터 패턴
- iterator를 사용하여 collection의 요소들에 접근하는 디자인 패턴.

## 노출 모듈 패턴
- 즉시 실행 함수를 통해 private, public같은 접근제어자를 만드는 패턴.

## MVC 패턴
- Model, View, Controller
- 재사용성과 확장성이 용이하고, 애플리케이션이 복잡해질 수록 모델과 뷰의 관계가 복잡해지는 단점.
- Spring

## MVP 패턴
- MVC 패턴에서 파생되었으며 Controller가 presenter로 교체된 패턴.
- View 와 presenter는 1:1 관계이기 때문에 MVC패턴 보다 더 강한 결합을 가졌다.

## MVVM 패턴
- MVC의 controller가 view model로 바뀐 패턴.
- view model은 뷰를 더 추상화한 계층이며, MVC 패턴과는 다르게 커맨드와 데이터 바인딩을 가지는것이 특징이다.
- 뷰와 뷰모델 사이의 양방향 데이터 바인딩을 지원하며 UI를 별도 코드 수정 없이 재사용이 가능하고 단위 테스팅이 쉽다.
- Vue.js
