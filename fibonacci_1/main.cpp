#include <iostream>
#include <locale.h>
using namespace std;
// Ряды Фибоначчи с числом членов до n
int main(){
    setlocale(0, "Russian");

    int n, t1 = 0, t2 = 1, nextTerm = 0;
    cout << "Введите количество термов: ";
    cin >> n;

    cout << "Ряд Фибоначчи: ";

    for (int i = 1; i <= n; ++i){
        // выводит первые два терма
        if (i == 1){
            cout << t2 << ", ";
            continue;
        }
        if (i == 2){
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << ", ";
    }
    return 0;
}
