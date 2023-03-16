#include <stdio.h>

int main()
{
	int A = 3;// Задаем точки
	int B = 7;
	int C = 9;
	int AC = C - A; // Вычисляем длину отрезков
	int BC = C - B;
	int sum = AC + BC; // Складываем длины отрезков
	printf_s("%i\n", AC); // Выводим полученные данные
	printf_s("%i\n", BC);
	printf_s("%i", sum);
}
