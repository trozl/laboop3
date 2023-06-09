﻿#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int a, *matrix, n = 1;
    cout << "Введите размер грани матрицы\n";
    cin >> a;
    matrix = new int[a*a];
    for (int i = 0; i < a; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < a; j++) {
                matrix[i*a+j] = n;
                n++;
            }
        }
        else for (int j = a-1; j >= 0; j--) {
            matrix[i*a+j] = n;
            n++;
        }
    }
    printf("Матрица заполненная змейкой\n");
    for (int i = 0; i < a; i++) {
        cout << endl;
        for (int j = 0; j < a; j++) {
            printf("%d\t", matrix[i*a+j]);
        }
    }
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
