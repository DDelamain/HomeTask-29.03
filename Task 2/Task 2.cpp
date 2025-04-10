#include <iostream>
using namespace std;
int counter;
int main() {
	setlocale(LC_ALL, "Rus");
	for (int i = 100; i < 1000; i++) {
		if ((i / 10) % 10 != i % 10 && i % 10 != (i / 100) % 10 && (i / 10) % 10 != (i / 100) % 10) {
			counter++;
		}
		//i%10 - 1 число
		//(i/10)%10 - 2 число
		//(i/100)%10 - 3 число
	}
	cout << "Kоличество целых чисел в диапазоне от 100 до 999, у которых все цифры разные: " << counter;
}