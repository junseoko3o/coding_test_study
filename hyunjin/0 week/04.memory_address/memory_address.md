# 메모리와 포인터: 메모리와 주소

컴퓨터의 메모리는 메모리 셀의 연속임. 각 셀의 크기는 1바이트이며, 고유한 주소가 있음.

메모리의 주소는 16진수. (0x0000, 0x0001 ...)

C++에서는 &연산자를 사용하여 주소를 얻을 수 있음.

그럼 내가 만든 프로그램을 실행할 때 마다 메모리 주소가 0x0000으로 나오냐? 하면 아님. 이는 운영체제가 메모리 주소를 할당 해 줄 것.

현대 운영체제에선 각 프로그램마다 독립적인 주소 공간을 제공하고, 보안상의 이유로 실행할 때 마다 다른 메모리 영역을 할당하기도 함.

변수가 변한다고 하더라도 메모리의 주소가 변하는 것은 아님.
(이는 이미 변수를 최초 선언할 때 메모리의 주소가 결정 됨.)

메모리 주소의 크기는 32비트 시스템에선 4바이트, 64비트 시스템에선 8바이트를 사용. (4바이트=32비트, 64비트=8바이트.)
