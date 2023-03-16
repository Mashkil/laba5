#include <stdio.h>
 #include <cmath>

int main()
{
	float x1 = 5; // Задаем координаты точек
	float x2 = 7;
	float y1 = 2;
	float y2 = 9;
	float length;
	length = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)); // По теореме Пифагора вычисляем расстояние между точками
	printf_s("%f", length);// Выводим длину
	return 0;
}
