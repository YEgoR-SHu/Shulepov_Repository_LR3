#include <iostream>
#include <string>
using namespace std;

// Функция количества четных чисел
int Countch(int x, int y, int z) {
    int count = 0;
    if (x % 2 == 0) 
    count++;
    if (y % 2 == 0) 
    count++;
    if (z % 2 == 0) 
    count++;
    return count;
}

// Функция суммы четных чисел
int Sumch(int x, int y, int z) {
    int sum = 0;
    if (x % 2 == 0) 
    sum += x;
    if (y % 2 == 0) 
    sum += y;
    if (z % 2 == 0) 
    sum += z;
    return sum;
}

int main() {
    int choice, x, y, z;

    while (true) {
        cout << "Menu:\n";
        cout << "1. Ввести целые числа X, Y, Z\n";
        cout << "2. Определить количество четных чисел\n";
        cout << "3. Найти сумму четных чисел\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт меню: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Введите число X: ";
                cin >> x;
                cout << "Введите число Y: ";
                cin >> y;
                cout << "Введите число Z: ";
                cin >> z;
                break;
            case 2:
                cout << "Количество четных чисел: " << Countch(x, y, z) << endl;
                break;
            case 3:
                cout << "Сумма четных чисел: " << Sumch(x, y, z) << endl;
                break;
            case 0:
                cout << "Выход из программы." << endl;
                return 0;
            default:
                cout << "Неверный выбор. Попробуйте снова.\n";
        }
    }

    return 0;
}