#include <stdio.h>

int main()
{
	int A = 3;// Задаем точки
	int B = 9;
	int C = 7;
	int AC = C - A; // Вычисляем длину отрезков
	int BC = B - C;
	int sum = AC * BC; // Умножаем длины отрезков
	printf_s("%i", sum); // Выводим полученные данные
}
