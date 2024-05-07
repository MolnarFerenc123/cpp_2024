#include <iostream>

#define LENGTH 10

int g = 10;

int main()
{
    std::cout << "Hello World\n";
    std::cout << "Hello World" << std::endl;
    std::cout << "a"
              << "b" << std::endl;

    char c = 'a';
    int i = 0;
    short int si = 1;
    long int li = 2;
    float f = 10.2;
    double d = 10.2;
    bool b = false;

    int i1 = 1, i2 = 2;
    char x, y;
    int z;

    std::cout << "char: " << sizeof(char) << std::endl;
    std::cout << "int: " << sizeof(int) << std::endl;
    std::cout << "short int: " << sizeof(short int) << std::endl;
    std::cout << "long int: " << sizeof(long long) << std::endl;
    std::cout << "float: " << sizeof(float) << std::endl;
    std::cout << "double: " << sizeof(double) << std::endl;
    std::cout << "bool: " << sizeof(bool) << std::endl;

    std::cout << z << std::endl;

    typedef int egesz;
    egesz e = 3;

    std::cout << LENGTH << std::endl;

    const int WIDTH = 11;

    std::cout << g << std::endl;

    {
        std::cout << g << std::endl;
        int g = 5;
        std::cout << g << std::endl;
    }
    std::cout << "\"" << std::endl;

    int num1 = 5;
    int num2 = 3;
    int num3 = 2;

    num1 = num2++;
    num2 = --num3;
    std::cout << num1 << num2 << num3 << std::endl;
}