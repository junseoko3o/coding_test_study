# 간단한 입출력 예제

## 헤더

헤더 파일을 include. 이는 보통의 C와 같다고 보면 될 듯

## 삽입 연산자, 추출 연산자

삽입 연산자 << 는 데이터를 순차적으로 집어넣는 INSERT,
추출 연산자 >> 는 데이터를 추출하는 EXTRACT 연산자.

데이터를 출력 스트림에 집어넣는 << 삽입 연산자
입력한 값을 추출하는 >> 추출 연산자

## 네임스페이스

std라는 네임스페이스를 사용한다고 명시적으로 선언
cin이나 cout을 사용할 때 원래는 std::cin 이런 식으로 하는데, std를 기본으로 설정하여 이를 생략

## 변수 선언

문자열 변수 a
string a

<타입> <변수명>

이는 타입을 가지는 다른 언어들과 같음

string a = "값"

이라고 했을 때, a 를 lvalue, "값"은 rvalue 라고 한다고 함.

오른쪽에 정의되고, 한 번 쓰고 다시 사용되지 않을 변수라고..

## 메인 함수

C언어와 마찬가지로 하나의 프로그램엔 적어도 하나의 main 함수를 필요로 함.

return 0 는 당연히 프로세스를 정상적으로 종료했다는 의미 (0이 아닌 값은 모두 비정상 종료료 간주.)
