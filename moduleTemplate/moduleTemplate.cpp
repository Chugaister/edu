#include <iostream>

int factorial(int x) {
    int result = 1;
    for (int i = 1; i <= x; ++i) {
        result *= i;
    }
    return result;
}

double f(double x) {
    double y;
    if (abs(x) >= 1) {
        y = (sin(2 * x) + 1) / (sin(x) + pow(cos(x), 2));
    }
    else {
        y = 0;
        for (int n = 0; n <= 7; ++n) {
            y += pow(x, 4 * n + 2) / factorial(2 * n + 1);
        }
    }
    return y;
}

double fReccurent(double x) {
    double y;
    if (abs(x) >= 1) {
        y = (sin(2 * x) + 1) / (sin(x) + pow(cos(x), 2));
    }
    else {
        double a = pow(x, 2);
        y = a;
        for (int n = 0; n <= 7; ++n) {
            a *= (pow(x, 4) / (2 * n + 2) / (2 * n + 3));
            y += a;
        }
    }
    return y;
}



using func = double(*)(double);

void tabulate(func f, double a, double b, double h) {
    std::cout << "\t x\t|\t f(x)\n";
    for (double x = a; x <= b; x += h) {
        (std::cout << "\t").precision(4);
        (std::cout << x << "\t|\t").precision(8);
        std::cout << f(x) << "\n";
    }
}

void task1() {
    double a, b, h;
    std::cout << "Input a: ";
    std::cin >> a;
    std::cout << "\nInput b: ";
    std::cin >> b;
    std::cout << "\nInput h: ";
    std::cin >> h;
    tabulate(f, a, b, h);
    std::cout << "\n";
    tabulate(fReccurent, a, b, h);
}



double* createArray(int size) {
    double* array = new double[size];
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }
    return array;
}

void printArray(double* array, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
}

double* scroll(double* array, int size, int shift) {
    double* scrolled = new double[size];
    for (int i = 0; i < size; ++i) {
        scrolled[i] = array[(size + i - shift) % size];
    }
    return scrolled;
}

void task2() {
    int size;
    std::cout << "Input length of array: ";
    std::cin >> size;
    double* array = createArray(size);
    double* scrolled = scroll(array, size, 1);
    printArray(scrolled, size);
    delete[] array;
    delete[] scrolled;
}

double max(double* array, int size) {
    double result = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] > result) {
            result = array[i];
        }
    }
    return result;
}

double min(double* array, int size) {
    double result = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < result) {
            result = array[i];
        }
    }
    return result;
}

bool in(double x, double* array, int size) {
    for (int i = 0; i < size; ++i) {
        if (array[i] == x) return true;
    }
}


double** createMatrix(int m, int n) {
    double** matrix = new double*[m];
    for (int i = 0; i < m; ++i) {
        matrix[i] = createArray(n);
    }
    return matrix;
}

void printMatrix(double** matrix, int m, int n) {
    for (int i = 0; i < m; ++i) {
        printArray(matrix[i], n);
        std::cout << "\n";
    }
}

void task3() {
    int m, n;
    std::cout << "Input m: ";
    std::cin >> m;
    std::cout << "Input n: ";
    std::cin >> n;
    double** matrix = createMatrix(m, n);
    double* maxs = new double[m];
    double* mins = new double[n];
    for (int i = 0; i < m; ++i) {
        maxs[i] = max(matrix[i], n);
    }
    for (int j = 0; j < n; ++j) {
        double* column = new double[m];
        for (int i = 0; i < m; ++i) {
            column[i] = matrix[i][j];
        }
        mins[j] = min(column, m);
        delete[] column;
    }
    bool uniquePresence = false;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (maxs[i] == mins[j]) { 
                std::cout << maxs[i] << " is unique\n";
                uniquePresence = true;
            }
        }
    }
    if (!uniquePresence) std::cout << "There is no unique elements in the matrix";
    delete[] matrix;
    delete[] maxs;
    delete[] mins;
    
}



int main()
{
    bool run = true;
    unsigned short int taskNumber;
    while (run) {
        std::cout << "\nInput task number (1, 2, 3, 0 - exit) > ";
        std::cin >> taskNumber;
        switch (taskNumber) {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 0:
            run = false;
            break;
        default:
            std::cout << "Wrong number\n";
        }
    }
}