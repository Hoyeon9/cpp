#include <iostream>
using namespace std;

void swap(int& rX, int& rY);
void print(const int& rX);

int main() {
	int a=5;
	int& rA = a; //���۷��� rA�� ������
	//���۷��� ������ int& rA; rA=a;ó�� �и��� �� ����
	//�� �ٸ� ������ ���۷����� �ٲ� ���� ����
	//a ��ü�� ���ο� �̸� rA�� �ִ� ��
	int c = 10;
	rA = c;//a�� c�� ���� �����϶�� �ǹ����� rA�� ����Ű�� ����� c�� �ٲٴ� ���� �ƴ�

	int b = 10;

	int& rC = rA;//a�� �Ǵٸ� �̸� rC�� ����. int&&�� �ƴ�. rC�� rA ��� a�� reference

	cout << "���� a��: " << a << "\n���� b��: " << b << '\n';
	swap(a, b);
	cout << "�ٲ� a��: " << a << "\n�ٲ� b��: " << b << '\n';
	print(b);

	return 0;
}

void swap(int& rX, int& rY) {
	int tmp = rX;

	rX = rY;
	rY = tmp;
}

void print(const int& rX) { //const�� ���� �ٲ� �� ���� ����
	cout << rX;
}