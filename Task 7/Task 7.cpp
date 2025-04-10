#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int first, second;
int main(){
	setlocale(LC_ALL, "Rus");
	cout << "Введите первое число: ";
   cin >> first;
   cout << "Введите второе число: ";
   cin >> second;
   if (first < 0) {
	   first = abs(first);
   }
   if (second < 0) {
	   second = abs(second);
   }
   cout << "Ваши числа делятся без остатка на: ";
   for (int i = 1; i <= min(first, second); i++) {//Я решил попробовать max и min
	   if (first % i == 0 && second % i == 0) {
		   cout << i << " ";
	   }
   }
}
