#include <iostream>
using namespace std;

void swap(int* pX, int* pY);

int main() {
	int a = 5;
	cout << "a��: " << a << "\n" << "a�ּҰ�: " << &a << '\n';
	//&: �ּ� ������ address operator


	//pointer: �ּҸ� �����ϴ� Ư���� ����
	//type *pointer_name���� ������
	//type*�� �ش� Ÿ���� �����ϴ� �����ͷμ� �����ϰڴٴ� �ǹ�. '�ش� Ÿ���� ������'�� Ÿ���� ��

	int* pA = &a;//pA�� ���� a�� ����Ų��
	cout << "������ pA�� ���� " << pA << '\n';

	//*: ��������������(indirection operator)
	//�����Ϳ� ����� �ּҰ� ����Ű�� �������� �˾Ƴ� �� ����
	cout << "*pA�� ��°�: " << *pA << '\n';

	//�����Ϳ��� �ٸ� �ּҸ� ������ ���� ����

	//���� ����-�Լ��� �����͸� �����ϱ�
	//�Ϲ������� ���� �ѱ��(�Լ������� ���纻�� ���) ���� �޸� �����͸� �ѱ����� ���� ������ ������ �� ���� ����
	int b = 10;

	cout << "���� a��: " << a << "���� b��: " << b<<'\n';
	swap(pA, &b);
	cout << "swap() ���� a��: " << a << "\nswap() ���� b��: " << b;

	return 0;
}

void swap(int* pX, int* pY) {
	int tmp = *pX;

	*pX = *pY;
	*pY = tmp;
}