#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>

int main()
{
	//TASK 1
	double x1, x2;
	std::cout << "Input x1: ";
	std::cin >> x1;
	std::cout << "Input x2: ";
	std::cin >> x2;

	double a = 1.0, b = -x1 - x2, c = x1 * x2;

	std::cout <<
		"a = " << a <<
		"\nb = " << b <<
		"\nc = " << c <<
		"\n";

	//TASK 2
	//double a, b, c;
	std::cout << "Input a: ";
	std::cin >> a;
	std::cout << "Input b: ";
	std::cin >> b;
	std::cout << "Input c: ";
	std::cin >> c;

	double avg = (a + b + c) / 3;
	double fract = avg - (int)avg;

	std::cout << "Fractional part = " << fract << "\n";

	//TASK 3
	double a1, b1, c1;
	double a2, b2, c2;
	std::cout << "Input a1: ";
	std::cin >> a1;
	std::cout << "Input b1: ";
	std::cin >> b1;
	std::cout << "Input c1: ";
	std::cin >> c1;
	std::cout << "Input a2: ";
	std::cin >> a2;
	std::cout << "Input b2: ";
	std::cin >> b2;
	std::cout << "Input c2: ";
	std::cin >> c2;

	double x = (c1 * b2) / (a1 * b2 - a2 * b1);
	double y = (c2 - a * x) / b2;
	std::cout <<
		"\nx = " << x <<
		"\ny = " << y <<
		"\n";

	//TASK 4
	double radius;
	std::cout << "Input radius: ";
	std::cin >> radius;
	std::cout <<
		"\nCircle length = " << 2 * M_PI * radius <<
		"\nCircle area = " << M_PI * pow(radius, 2) <<
		"\nSphere volume = " << 4 * M_PI * pow(radius, 3) <<
		"\n";
	
	//TASK 5
	//double a, b
	std::cout << "Input a: ";
	std::cin >> a;
	std::cout << "Input b: ";
	std::cin >> b;

	std::cout <<
		"\nPerimeter = " << a + b + sqrt(a * a + b * b) <<
		"\nArea = " << (a + b) / 2 <<
		"\n";
	
	//TASK 6
	//double a1, a2;
	double d;
	int n;
	std::cout << "Input a1: ";
	std::cin >> a1;
	std::cout << "Input a2: ";
	std::cin >> a2;
	std::cout << "Input n: ";
	std::cin >> n;
	d = a2 - a1;
	std::cout <<
		"\nAn = " << a1 + d * (n - 1) <<
		"\nSn = " << (2 * a1 + d * (n - 1)) / 2 * n;

}
