#include <iostream>
using namespace std;

void swap(int* pX, int* pY);

int main() {
	int a = 5;
	cout << "a값: " << a << "\n" << "a주소값: " << &a << '\n';
	//&: 주소 연산자 address operator


	//pointer: 주소를 저장하는 특수한 변수
	//type *pointer_name으로 선언함
	//type*은 해당 타입을 저장하는 포인터로서 생성하겠다는 의미. '해당 타입의 포인터'가 타입이 됨

	int* pA = &a;//pA가 변수 a를 가리킨다
	cout << "포인터 pA의 값은 " << pA << '\n';

	//*: 간접참조연산자(indirection operator)
	//포인터에 저장된 주소가 가리키는 변수값을 알아낼 수 있음
	cout << "*pA의 출력값: " << *pA << '\n';

	//포인터에는 다른 주소를 대입할 수도 있음

	//사용법 예시-함수로 포인터를 전달하기
	//일반적으로 값만 넘기는(함수에서는 복사본만 사용) 경우와 달리 포인터를 넘김으로 원래 변수에 영향을 줄 수가 있음
	int b = 10;

	cout << "원래 a값: " << a << "원래 b값: " << b<<'\n';
	swap(pA, &b);
	cout << "swap() 이후 a값: " << a << "\nswap() 이후 b값: " << b;

	return 0;
}

void swap(int* pX, int* pY) {
	int tmp = *pX;

	*pX = *pY;
	*pY = tmp;
}