#include <stdio.h>
#include <cmath>

int main()
{
	float x1 = 5; // Задаем координаты точек
	float x2 = 7;
	float x3 = 4;
	float y1 = 2;
	float y2 = 9;
	float y3 = 10;
	float a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)); // По теореме Пифагора вычисляем расстояние между точками
	float b = sqrt((x1 - x3) * (x1 - x3) + (y3 - y1) * (y3 - y1));
	float c = sqrt((x2 - x3) * (x2 - x3) + (y3 - y2) * (y3 - y2));
	float p = a + b + c; // Вычисляем периметр
	float p2 = (a + b + c) / 2; // Вычисляем полупериметр для нахождения площади
	float s = sqrt(p2 * (p2 - a) * (p2 - b) * (p2 - c)); // Вычисляем площадь
	printf_s("%f\n", p);// Выводим полученные данные
	printf_s("%f", s);
	return 0;
}
