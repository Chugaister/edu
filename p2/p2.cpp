#define _USE_MATH_DEFINES
#include <iostream>

int main()
{
	double a, b, z1, z2;
	std::cout << "Input alpha > ";s
	std::cin >> a;
	std::cout << "Input betha > ";
	std::cin >> b;
	a *= M_PI / 180;
	b *= M_PI / 180;
	z1 = pow(cos(a) - cos(b), 2) - pow(sin(a) - sin(b), 3);
	z2 = -4 * pow(sin((a - b) / 2), 2) * cos(a + b);
	std::cout << "z1 = " << z1 << "\n";
	std::cout << "z1 = " << z2 << "\n";

}
