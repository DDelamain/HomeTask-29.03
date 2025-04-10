#include <iostream>
#include <cmath>
using namespace std;
int A, sum;
bool negative = false;
int main(){
    setlocale(LC_ALL, "Rus");
    cout << "Введите число А: ";
    cin >> A;
    int state = A;
    if (A < 0) {
        A *= -1;
    }
    while (A>0){
        sum += A % 10;
        A /= 10;
    }
    if (state * state == pow(sum, 3)) {
        cout << "Куб суммы цифр этого числа равен А*А";
    }
    else {
        cout << "Куб суммы цифр этого числа HE равен А*А";
    }
}
