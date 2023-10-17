#include <iostream>
#include <limits.h>
#include <cmath>
#include <stdio.h>
using namespace std;

void input(double &num) {
    cout << "Введите число: ";
    while (!(cin >> num)) {
        cout << "Плохой ввод, попробуйте ещё раз: ";
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    }
}

void input(int& num) {
    cout << "Введите действие: ";
    while (!(cin >> num)) {
        cout << "Плохой ввод, попробуйте ещё раз: ";
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    }
}

void sum() {
    double num1;
    input(num1);
    double num2;
    input(num2);
    cout << "Ответ: " << num1 + num2 << "\n";
}


void sub() {
    double num1;
    input(num1);
    double num2;
    input(num2);
    cout << "Ответ: " << num1 - num2 << "\n";
}

void mul() {
    double num1;
    input(num1);
    double num2;
    input(num2);
    cout << "Ответ: " << num1 * num2 << "\n";
}
void div() {
    double num1;
    input(num1);
    double num2;
    input(num2);
    if (num2 != 0) {
        cout << "Ответ: " << num1 / num2 << "\n";
    }
    else {
        cout << "На ноль делить нельзя" << "\n";
    }
}

void fact() {
    double num1;
    input(num1);
    int fac = 1;
    for (int i = 1; i <= num1; i++) {
        fac = fac * i;
    }
    cout << "Ответ: " << fac << "\n";
}

void exp() {
    double num1;
    input(num1);
    double num2;
    input(num2);
    cout << "Ответ: " << pow(num1, num2)<<"\n";
}

void matrixSum() {

    int matrix1[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Введите число: ";
            cin >> matrix1[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix1[i][j] << " ";
            if (j == 3 - 1) {
                cout << endl;
            }
        }
    }

    int matrix2[3][3];
    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 3; b++) {
            cout << "Введите число: ";
            cin >> matrix2[a][b];
        }
    }

    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 3; b++) {
            cout << matrix2[a][b] << " ";
            if (b == 3 - 1) {
                cout << endl;
            }
        }
    }
    cout << "Ответ: " << "\n";
    for (int c = 0; c < 3; c++) {
        for (int d = 0; d < 3; d++) {
            cout << matrix1[c][d] + matrix2[c][d] << " ";
            if (d == 3 - 1) {
                cout << endl;
            }
        }
    }
}
void matrixSub() {

    int matrix1[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Введите число: ";
            cin >> matrix1[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix1[i][j] << " ";
            if (j == 3 - 1) {
                cout << endl;
            }
        }
    }

    int matrix2[3][3];
    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 3; b++) {
            cout << "Введите число: ";
            cin >> matrix2[a][b];
        }
    }

    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 3; b++) {
            cout << matrix2[a][b] << " ";
            if (b == 3 - 1) {
                cout << endl;
            }
        }
    }
    cout << "Ответ: " << "\n";
    for (int c = 0; c < 3; c++) {
        for (int d = 0; d < 3; d++) {
            cout <<  matrix1[c][d] - matrix2[c][d] << " ";
            if (d == 3 - 1) {
                cout << endl;
            }
        }
    }
}


int main() {

    while (true) {
        setlocale(LC_ALL, "Russian");
        cout << "Выберите действие: 1 - сумма, 2 - вычитание, 3 - умножение, 4 - деление, 5 - факториал, 6 - возведение в степень, 7 - сумма матриц, 8 - вычитание матриц, 9 - выход" << "\n";
        int action;
        input(action);
        switch (action) {
            case 1:
                sum();
                break;
            case 2:
                sub();
                break;
            case 3:
                mul();
                break;
            case 4:
                div();
                break;
            case 5:
                fact();
                break;
            case 6:
                exp();
                break;
            case 7:
                matrixSum();
                break;
            case 8:
                matrixSub();
                break;
            case 9:
                return 0;
                break;
        }
    }
}