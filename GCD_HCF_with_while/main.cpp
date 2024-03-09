#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(0, "Russian");
    int n1, n2;
    cout << "2 числа: ";
    cin >> n1 >> n2;

    while (n1 != n2){
        if (n1 > n2){
            n1 -= n2;
        }
        else {
            n2 -= n1;
        }
    }
    cout << "НОД = " << n1;
    return 0;
}
