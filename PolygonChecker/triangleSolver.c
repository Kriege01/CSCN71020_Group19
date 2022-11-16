#include <stdio.h>
#include <stdbool.h>
#include <math.h>


#include "triangleSolver.h"

char* analyzeTriangle(int side1, int side2, int side3) {
	char* result = "";
	if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
		result = "Not a triangle";
	}
	else if (side1 == side2 && side1 == side3) {
		result = "Equilateral triangle";
	}
	else if ((side1 == side2 && side1 != side3) || 
		(side1 == side3 && side1 != side2))
	{
		result = "Isosceles triangle";
	}
	else {
		result = "Scalene triangle";
	}

	return result;
}

int* anglefinder(int a, int b, int c)
{
	char* sides;
	float A, B, C, R, s, pi, area;
	pi = acos(-1);

	s = (a + b + c) / 2;

	area = sqrt(s * (s - a) * (s - b) * (s - c));

	R = (a * b * c) / (4 * area);

	A = (180 / pi) * asin(a / (2 * R));
	B = (180 / pi) * asin(b / (2 * R));
	C = (180 / pi) * asin(c / (2 * R));

	sides = printf("Angles: %6.2f %6.2f %6.2f\n", A, B, C);

	return sides; 

}
