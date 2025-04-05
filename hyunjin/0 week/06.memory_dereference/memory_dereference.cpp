#include<bits/stdc++.h>
using namespace std;

int main() {
    // 변수 선언과 포인터
    int num = 10;
    int* ptr = &num;  // num의 주소를 ptr에 저장
    
    // 역참조로 값 접근
    cout << "num의 값: " << num << endl;
    cout << "ptr이 가리키는 값: " << *ptr << endl;
    
    // 역참조로 값 변경
    *ptr = 20;  // ptr이 가리키는 메모리(num)의 값을 20으로 변경
    cout << "변경 후 num의 값: " << num << endl;
    
    return 0;
}