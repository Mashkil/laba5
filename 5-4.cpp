#include <stdio.h>

int main()
{
	int x1 = 8; // Задаем координаты точек
	int x2 = 12;
	int y1 = 10;
	int y2 = 25;
	int a = x2 - x1; // Вычисляем длины сторон
	int b = y2 - y1;
	int p = 2 * a + 2 * b; // Вычисляем периметр
	int s = a * b; // Вычисляем площадь
	printf_s("%i\n", p); // Выводим полученные данные
	printf_s("%i", s);
	return 0;
}
