#include <iostream>
#define MODE 1

#ifdef MODE
#if MODE == 1
int add(int a, int b) {
	return a + b;
}
#endif
#endif

int main() {
	setlocale(LC_ALL, "rus");
	int a;
	int b;
#ifndef MODE
#error ���������� ��������� �� ����������
#endif

#ifdef MODE
#if MODE == 1
	
	std::cout << "������� � ������ ������\n";
	std::cout << "������� ����� 1: ";
	std::cin >> a;
	std::cout << "������� ����� 2: ";
	std::cin >> b;
	std::cout << "��������� ��������: " << add(a, b);

#elif MODE == 0
	std::cout << "������� � ������ ����������";
#else
	std::cout << "����������� �����. ���������� ������.";

#endif
#endif
	return 0;
}