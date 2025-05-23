## Pointer
- 메모리 관리는 언어마다 조금씩 다르게 관리된다.
  - 자바, 파이썬, 자바스크립트는 개발자가 직접 변수에 메모리를 할당하거나 해제할 수 없고 가비지 컬렉터를 통해 수행.
  - C, C++ 는 가비지 컬렉터가 없고, 개발자가 직접 필요한 메모리를 예약하고 해제할 수 있고 포인터를 지원한다.
- 메모리의 주소를 담는 타입이 포인터다.
  - 메모리 동적할당, 데이터를 복사하지 않고 함수 매개변수로 사용, 클래스 및 구조체를 연결할 때 사용.

- 연결리스트
```c++
class Node {
  public:
    int data;
    Node* next;
};
```
- 데이터가 있다. 이 데이터를 감싸는 노드라는 클래스가 있는데, 이 노드라는 클래스는 Next라는 포인터를 가리킨다.
- Next라는 포인터는 그 다음 노드의 주소값을 가리킨다.
- 전체 데이터가아닌 주소값만 가지고있다.
- 싱글 연결리스트 => Next라는 포인터만 있으니까, 만약 prev라는 포인터가 있으면 더블 연결리스트.

=> 다음 노드에 전체적인 데이터를 가지고 있지 않아도 주소값만 가지고 해당 노드에 대한 값을 참조할 수 있다. -> 데이터가 많으면 효율적



## 역참조 연산자 (dereference)
- 변수를 메모리 공간에 담았는데, 여기엔 고유 주소가 존재한다. 이 주소를 가리키는 포인터가 존재하게 되는데, 이 포인터를 기반으로 * 역참조 연산자를 통해 변수를 그대로 끄집어낸다.


## Array to Pointer decay
- 배열의 이름 = 주소값
- 배열의 이름을 할당할 수 있다.
- T[N]이라는 배열의 이름을 *T에 할당하면서 해당 배열의 크기 정보가 날아가게된다.(dk)
- 배열의 첫 번째 주소가 이름에 바인딩된다. 크기정보는 날아가고.