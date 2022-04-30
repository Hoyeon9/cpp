# include<iostream>
using namespace std;
//std.cout을 cout으로 줄여서 입력 가능

int main() {
	cout << "Hello World! \n";
	cout << "Let's start C++!";

	//comment
	/*comment*/

	//리터럴-특정 문자나 숫자 표기. 고정된 값을 나타냄
	
	//문자 리터럴 - 문자 하나
	'H';
	cout << "8진수 문자 코드 101의 출력: " << '\101' << '\n';
	cout << "16진수 문자 코드 61의 출력: " << '\x61' << '\n';

	//문자열 리터럴
	// 

	//숫자 리터럴
	//0을 앞에 붙이면 8진수, 0x는 16진수를 나타냄

	//논리 리터럴
	
	//escape sequence
	/*
	\\
	\t
	\'
	\"
	등등
	*/


	//토큰-특정 의미를 가진 문자 또는 조합
	/*
	리터럴
	키워드
	식졀자
	연산자
	구분자
	*/



	//변수 선언 등은 c, java와 같음~


	cout << "입력 받기\n";
	int num;
	cin >> num;//초기화 하지 않고 입력 가능
	cout << "입력값은 " << num << "입니다\n";

	cout << "두 개 동시 입력. 문자, 실수\n";
	char ch;
	double dou;//소수점 아래가 없으면 정수부분만 출력
	cin >> ch >> dou;
	cout << "문자는 " << ch << " 실수값은 " << dou;


	//constant
	/*
	const를 data type 앞에 붙여서
	*/
	const double pi = 3.1415;


	//사칙 연산 증감 연산자 다 같음
	//:: 스코프 해결?
	//:: 전역 명칭 충돌 해결?

	//형변환은 같음

	//관계연산자 같음

	//boolean의 도입
	//true -> 1
	//false -> 0
	//변환 가능

	//조건문 사용 동일. 한 줄 실행 가능, 블록 실행 가능

	//비트 논리연산자는 1과 0으로 and or 등 연산하는 식으로 같음
	//조건 연산자 사용 동일

	//반복문 break continue 용법 동일



	//인라인 함수
	//inline을 함수 선언 앞에 붙여서 선언해두면 해당 함수가 호출될 때마다 코드 전체가 그 부분에 통째로 기록되는 식으로 실행됨
	//속도 향상에 기여
	return 0;
}

//프로토타입에서 기본인수의 사용
//parameter 자리에 'int value = 10'등으로 기본 값을 지정해 주는 것
//기본 인수로 입력된 것의 오른쪽부터는 모두 기본값이 지정돼야 함

//오버로딩-리턴값만 다르면 안됨. 인수 개수, 종류 등이 달라야 함

//함수 템플릿
template <class T>
T max(T x, T y) {
	if (x > y) {
		return x;
	}
	else { return y; }
}
//함수의 틀만 지정하고 나머지는 클래스에 맞춰져서 실행