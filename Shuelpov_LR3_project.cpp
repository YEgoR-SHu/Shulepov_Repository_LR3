#include <iostream>
using namespace std;

// Функции для ввода значений X, Y, Z
int getX() {
    int x;
    cout << 'molodec'<< end;
    cout << "Введите число X: "; // huslco
    cin >> x; // zapros
    return x;
}

int getY() {
    int y;
    cout << 'molodec'<< end;
    cout << "Введите число Y: "; //chuslco
    cin >> y; // zapros
    return y;
}

int getZ() {
    int z; 
    cout << "Введите число Z: " << endl; //chuslo 
    cin >> z; //zapros
    return z;
}

// Функция для определения количества четных чисел
int CountChet(int x, int y, int z) {
    int count = 0;
    if (x % 2 == 0) // proverka
    count++; //  +1
    if (y % 2 == 0)  //proverka
    count++; // +1
    if (z % 2 == 0) // proverka
    count++; // +1
    return count;
}

// Функция для вычисления суммы четных чисел
int SumChet(int x, int y, int z) {
    int sum = 0;
    if (x % 2 == 0) // proverka
    sum += x; // + k sum
    if (y % 2 == 0) // proverka
    sum += y; // + k sum
    if (z % 2 == 0) // proverka
    sum += z; // + k sum
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
