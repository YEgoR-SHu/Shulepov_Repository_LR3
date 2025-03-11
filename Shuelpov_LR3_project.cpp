#include <iostream>
using namespace std;

// Функции для ввода значений X, Y, Z
int getX() {
    int x;
    cout << "Введите число X: ";
    cin >> x;
    return x;
}

int getY() {
    int y;
    cout << "Введите число Y: ";
    cin >> y;
    return y;
}

int getZ() {
    int z;
    cout << "Введите число Z: ";
    cin >> z;
    return z;
}

// Функция для определения количества четных чисел
int CountChet(int x, int y, int z) {
    int count = 0;
    if (x % 2 == 0) count++;
    if (y % 2 == 0) count++;
    if (z % 2 == 0) count++;
    return count;
}

// Функция для вычисления суммы четных чисел
int SumChet(int x, int y, int z) {
    int sum = 0;
    if (x % 2 == 0) sum += x;
    if (y % 2 == 0) sum += y;
    if (z % 2 == 0) sum += z;
    return sum;
}

int main() {
    int choice, x = 0, y = 0, z = 0;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Ввести число X\n";
        cout << "2. Ввести число Y\n";
        cout << "3. Ввести число Z\n";
        cout << "4. Определить количество четных чисел\n";
        cout << "5. Найти сумму четных чисел\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт меню: ";
        cin >> choice;

        switch (choice) {
            case 1:
                x = getX();
            break;
            case 2:
                y = getY();
            break;
            case 3:
                z = getZ();
            break;
            case 4:
                cout << "Количество четных чисел: " << CountChet(x, y, z) << endl;
            break;
            case 5:
                cout << "Сумма четных чисел: " << SumChet(x, y, z) << endl;
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
