#include <iostream>
#include <string>
using namespace std;
int num, i;
string sum;
bool negative = false;
int main(){
	setlocale(LC_ALL, "Rus");
	cout << "Введите целое число: ";
	cin >> num;
	if (num < 0) {
		negative = true;
		num *= -1;
	}
	if (num == 0) {
		cout << "Ваше число: " << num;
		return 0;
	}
	while (num>0) {
		if (num % 10 == 3 || num % 10 == 6) {
			num /= 10;
			continue;
		}
		sum = to_string(num % 10) + sum;
		num /= 10;
	}
	if (negative) {
		sum = "-" + sum;
	}
	cout << "Ваше новое число: " << sum;
}