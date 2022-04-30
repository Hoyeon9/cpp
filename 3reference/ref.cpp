#include <iostream>
using namespace std;

void swap(int& rX, int& rY);
void print(const int& rX);

int main() {
	int a=5;
	int& rA = a; //레퍼런스 rA가 생섬됨
	//레퍼런스 선언은 int& rA; rA=a;처럼 분리될 수 없음
	//또 다른 변수의 레퍼런스로 바뀔 수도 없음
	//a 자체에 새로운 이름 rA를 주는 것
	int c = 10;
	rA = c;//a에 c의 값을 대입하라는 의미이지 rA가 가리키는 대상을 c로 바꾸는 것이 아님

	int b = 10;

	int& rC = rA;//a의 또다른 이름 rC가 생김. int&&가 아님. rC와 rA 모두 a의 reference

	cout << "원래 a값: " << a << "\n원래 b값: " << b << '\n';
	swap(a, b);
	cout << "바뀐 a값: " << a << "\n바뀐 b값: " << b << '\n';
	print(b);

	return 0;
}

void swap(int& rX, int& rY) {
	int tmp = rX;

	rX = rY;
	rY = tmp;
}

void print(const int& rX) { //const를 통해 바꿀 수 없게 만듦
	cout << rX;
}