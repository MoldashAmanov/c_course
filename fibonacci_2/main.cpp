#include <iostream>
#include <locale.h>

using namespace std;
// Программа для генерации последовательности Фибоначчи с точностью до определенного числа
int main(){
    setlocale(0, "Russian");

    int t1 = 0, t2 = 1, nextTerm = 0, n;

    cout << "Введите положительное число: ";
    cin >> n;

    // Отображает первые два терма, которые всегда равны 0 и 1
    cout << "Ряд Фибоначчи: " << t1 << ", " << t2 << ", ";
    nextTerm = t1 + t2;
    while(nextTerm <= n){
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
}
