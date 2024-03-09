#include <iostream>
#include <locale.h>

using namespace std;

/*
НОК состоит из двух целых чисел a и b - это наименьшее положительное число,
которое делится на a и b
*/

int main()
{
    setlocale(0, "Russian");
    int n1, n2, max;
    cout << "2 числа: ";
    cin >> n1 >> n2;

    max = (n1 > n2) ? n1 : n2;

    do {
        if (max % n1 == 0 && max % n2 == 0){
            cout << "НОК = " << max;
            break;
        }
        else
            ++max;
    }
    while (true);
    return 0;
}
