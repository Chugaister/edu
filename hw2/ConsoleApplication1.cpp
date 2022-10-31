#include <iostream>
#include <cmath>


//TASK 8
double max(double a, double c) {
    return (a > c) ? a : c;
}

double min(double a, double c) {
    return (a < c) ? a : c;
}

//TASK 10
double plot1(double x) {
    if (x <= -1) {
        return -x - 1;
    }
    else if (x <= 1) {
        return 0;
    }
    else if (x <= 5) {
        return sqrt(4 - pow(x - 3, 2));
    }
    else {
        return -(1.0 / 2.0) * x + 5;
    }
}

double plot2(double x) {
    if (x <= 0) {
        return -(1.0 / 2.0) * x;
    }
    else if (x <= 2) {
        return -sqrt(4 - pow(x, 2)) + 2;
    }
    else if (x <= 4) {
        return sqrt(4 - pow(x - 3, 2));
    }
    else {
        return -x + 4;
    }
}


int main()
{
    //TASK 1
    double x, y, z, r;
    int k;
    std::cin >> x;
    std::cin >> y;
    std::cin >> z;
    std::cin >> r;
    std::cin >> k;

    std::cout << (k % 7 == 0) << "\n";
    std::cout << (0 < x && x < 1) << "\n";
    std::cout << (0 <= x && x <= 1) << "\n";
    std::cout << !(0 <= x && x <= 1) << "\n";
    std::cout << ((2 <= x && x <= 5) || (-1 <= x && x <= 1)) << "\n";
    std::cout << !((2 <= x && x <= 5) && (-1 <= x && x <= 1)) << "\n";
    std::cout << (x > 0 && y > 0 && z > 0) << "\n";
    std::cout << (x > 0 || y > 0 || z > 0) << "\n";
    std::cout << (x < 0 && y < 0 && z < 0) << "\n";
    std::cout << ((pow(x - 1, 2) + pow(y - 0, 2)) > pow(r, 2)) << "\n";

    //TASK 2
    bool B;
    //double x, y;
    std::cin >> x;
    std::cin >> y;
    B = abs(y) + abs(x) < 1;
    std::cout << B;

    //TASK 3
    //double x, y;
    std::cin >> x, y;
    std::cout << (0 <= y && y <= 1 && 0 <= x && x <= 2);
    std::cout << (pow(x, 2) + pow(y, 2) <= 4) && (abs(x) + abs(y) >= 1);
    std::cout <<
        !(0 <= x && 0 <= y) &&
        (-2 <= x && x <= 2 && -2 <= y && y <= 2) &&
        (pow(x, 2) + pow(y, 2) >= 4);
    std::cout <<
        (y >= 0 && abs(x) + abs(y) <= 2) ||
        (y < 0 && pow(x, 2) + pow(y, 2) <= 4);


    //TASK 4
    int num;
    std::cin >> num;
    std::cout << (num % 10 == 5 || num % 100 / 10 == 5 || num / 100 == 5);

    //TASK 5
    std::cout << ((num % 10 + num % 100 / 10 + num / 100) % 2 == 0);

    //TASK 6
    int year;
    std::cin >> year;
    std::cout << year << " is " << (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? "intercalary" : "not intercalary";

    //TASK 7
    double a, b, c, D, x1, x2;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    D = pow(b, 2) - 4 * a * c;
    x1 = (-b + sqrt(D)) / (2 * a);
    x2 = (-b - sqrt(D)) / (2 * a);

    //TASK 8
    //double x, y, z;
    double u;
    std::cin >> x, y, z;
    u = max(x + y + z, x * y * z);
    std::cout << u;
    u = min(x, max(y, z));
    std::cout << u;

    //TASK 9
    //double x, y
    if (x <= 1) {
        y = pow(x, 1.0 / 3.0);
    }
    else if (x <= 2) {
        y = 2 - x;
    }
    else {
        y = sin(x - 2);
    }
}