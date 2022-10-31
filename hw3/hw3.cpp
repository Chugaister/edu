#include <iostream>
#include <cmath>

//TASK 2

int fibonachi(int n)
{
    if (n == 1 || n == 2) {
        return 1;
    }
    return fibonachi(n - 1) + fibonachi(n - 2);
}

int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    //TASK 1
    int n;
    double max, min, temp;
    std::cin >> n;
    std::cin >> min;
    max = min;
    for (int i = 0; i < n-1; ++i) {
        std::cin >> temp;
        if (temp > max) {
            max = temp;
        }
        if (temp < min) {
            min = temp;
        }
    }
    std::cout << max - min;
    
    //TASK 3
    int A, B, N, R;
    std::cout << "Input N: ";
    std::cin >> N;
    std::cout << "Input A: ";
    std::cin >> A;
    std::cout << "Input B: ";
    std::cin >> B;

    for (int k = 0; k <= N; ++k) {
        for (int m = 0; m <= N; ++m) {
            R = k * A + m * B;
            if (R <= N)
            {
                std::cout << "k = " << k << " m = " << m << " R = " << R << "\n";
            }
        }
    }

    //TASK 4
    //int N;
    std::cin >> N;

    for (int num = 1; num <= N; ++num) {            //цикл в якому проходимося по всіх числах < N
        nextNum:
        for (int i = 1; num / i != 0; i *= 10) {    //цикл в якому перевіряємо подільність числа на кожну його цифру
            int digit = num % (i * 10) / i;         //виділяємо цифру з числа
            if (digit == 0) {                       //ігноруємо цифру 0
                continue;                           //ігноруємо цифру 0
            }
            if (num % digit != 0) {                 //перевіряємо на неподільність на цифру
                ++num;                              //переходимо до наступного числа
                goto nextNum;                       //переходимо до наступного числа
            }
        }
        std::cout << num << "\n";                   //якшо дійшли до цього моменту, то всі умови виконані і виводимо число
    }

    //TASK 5
    double x, S = 0;
    int E;
    std::cin >> x;
    std::cin >> E;
    for (int k = 0; k <= E; ++k) {
        S += pow(-1, k + 1) * pow(x, 2 * k - 1) / (2 * k - 1) / factorial(2 * k + 1);
    }
    std::cout << S;


    //TASK 6
    double a, b, e;
    std::cin >> a;
    std::cin >> b;
    std::cin >> e;

    double xn = a, yn = b;                  //визначаємо x1 та y1
    for (int n = 1; true; ++n) {
        xn = 0.5 * (xn + yn);               //визначаємо X(n+1)
        yn = sqrt(xn * yn);                 //визначаємо Y(n+1)
        if (abs(xn + yn) < e) {             //умова виходу з циклу
            std::cout << xn << "\n" << yn;  
            break;
        }
    }

    //TASK 7
    int d = 2;
    std::cin >> N;
    std::cout << " N = 1";

    while (N > 1)
    {
        while (N % d == 0)
        {
            std::cout << " * " << d;
            N /= d;
        }
        d++;
    }
    std::cout << "\n";

    //TASK 8
    char symbol = '\n';
    int numb_of_n = 0;

    while (symbol != '.')
    {
        std::cin >> symbol;
        if ((int)symbol >= 48 && (int)symbol <= 57)
            numb_of_n++;
    }
    std::cout << "Number of digits is: " << numb_of_n << "\n";

    //TASK 9
    double a, b, h;
    std::cin >> a;
    std::cin >> b;
    std::cin >> h;

    for (double i = a; i <= b; i += h) {
        std::cout << "x = " << i << " y = " << 2 * sin(i) << "\n";
    }

    //TASK 10
    double a, b, h, S;
    int E;
    std::cin >> a;
    std::cin >> b;
    std::cin >> h;
    std::cin >> e;
    for (double x = a; x <= b; x += h) {
        S = 0;
        for (int k = e; k <= E; ++k) {
            S += pow(-1, k + 1) * pow(x / 3, 2 * k + 1) / factorial(2 * k + 1);
        }
        std::cout << S << "\n";
    }
}