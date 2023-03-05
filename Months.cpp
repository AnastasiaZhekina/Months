
#include <iostream>
using namespace std;

enum months {
    error = 0,
    January = 1,
    February,
    March,
        April,
        May,
            June,
            July,
            August,
            September,
                October,
                November,
                December,
};

int main()
{
    setlocale(LC_ALL, "Russian");
    int months;
    do {
        cout << "Введите номер месяца: ";
        cin >> months;

        switch (months) {
        case error:
            cout << "До свидания\n";
            break;
        case January:
            cout << "Январь\n";
            break;
        case February:
            cout << "Февраль\n";
            break;
        case March:
            cout << "Март\n";
            break;
        case April:
            cout << "Апрель\n";
            break;
        case May:
            cout << "Май\n";
            break;
        case June:
            cout << "Июнь\n";
            break;
        case July:
            cout << "Июль\n";
            break;
        case August:
            cout << "Август\n";
            break;
        case September:
            cout << "Сентябрь\n";
            break;
        case October:
            cout << "Октябрь\n";
            break;
        case November:
            cout << "Ноябрь\n";
            break;
        case December:
            cout << "Декабрь\n";
            break;
        default:
            cout << "Неправильный номер!\n";
            break;
        }
    } while (months != 0);
}

