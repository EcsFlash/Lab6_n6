﻿// Lab6_n6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<stdio.h>   
#include <stdlib.h>

using namespace std;


int main() {
    int wordCount = 0;
    char str[100] = " fg ";
    char sr[10000];
    cout << "Enter string:";
    fgets(sr, 1000, stdin);
    int k = 0;
  
    for (int i = 0; sr[i] != '\n'; i++) {
        
        if ((sr[i] != ' ') and ((sr[i + 1] == ' ') or (sr[i + 1] == '\n'))) {
            
            
            wordCount++;
        }
    }
    cout << wordCount << endl;
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
