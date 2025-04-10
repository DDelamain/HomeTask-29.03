#include <iostream>
using namespace std;

int A;
int main(){
    setlocale(LC_ALL, "Rus");
    cout << "Введите ваше число: ";
    cin >> A;
    for (int i = 1; i <= A; i++) {
        if (A % (i * i) == 0 && A % (i * i * i) != 0) {
            cout << i << " ";
        }
    }
}
