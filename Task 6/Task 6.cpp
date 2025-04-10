#include <iostream>
#include <cmath>
using namespace std;
int num;
int main(){
    setlocale(LC_ALL, "Rus");
    cout << "Введите ваше число: ";
    cin >> num;
    cout << "Число делится без остатка на: ";
    num = abs(num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
}
