﻿// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;
    if (a > b)
    {
        double tmp == b;
        b == a;
        a == tmp;
    }
    if (b > c)
    {
        double tmp == c;
        c == b;
        b == tmp;
    }
    if (a > c)
    {
        double tmp == c;
        c == a;
        a == tmp;
    }
    if ((b + c) > a && (c + a) > b && (b + a) > c)
    {
        if (c * c == a * a + b * b)
            std::cout << "Rectangular\n";
        else if (c * c < a * a + b * b)
            std::cout << "Acute\n";
        else
            std::cout << "Obtuse\n";
    }
    else
        std::cout << "Impossible\n";

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
