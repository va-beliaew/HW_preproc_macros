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
#error Символьная константа не определена
#endif

#ifdef MODE
#if MODE == 1
	
	std::cout << "Работаю в боевом режиме\n";
	std::cout << "Введите число 1: ";
	std::cin >> a;
	std::cout << "Введите число 2: ";
	std::cin >> b;
	std::cout << "Результат сложения: " << add(a, b);

#elif MODE == 0
	std::cout << "Работаю в режиме тренировки";
#else
	std::cout << "Неизвестный режим. Завершение работы.";

#endif
#endif
	return 0;
}