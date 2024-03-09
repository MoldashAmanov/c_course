#include <iostream>
#include <locale.h>

using namespace std;

/*
Наибольшее целое число, которое может идеально разделить два целых числа,
известно как GCD или HCF, на русском - НОД
*/

int main()
{
    setlocale(0, "Russian");
    int n1, n2, hcf;
    cout << "2 числа: ";
    cin >> n1 >> n2;

    // замена переменных n1 и n2, если n2 > n1
    if (n2>n1){
        int temp = n2;
        n2 = n1;
        n1 = temp;
    }

    for (int i = 1; i <= n2; ++i){
        if (n1 % i == 0 && n2 % i == 0){
            hcf = i;
        }
    }
    cout << "НОД = " << hcf;
    return 0;
}
