#include <iostream>
#include <cstring>
#include <ctime>
#include <Windows.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	int b = 0;

	srand(time(NULL));
	int a = rand();
	a = rand() % 100;
	/*cout << a << endl;*/
	do {

		cout << "Угадайте число от 1 до 100" << endl;

		cin >> b;


		if ((b < a) && (a <= 50))
		{
			cout << "Ваше число меньше загаданного и загаданное число меньше либо равно 50" << endl;

		}
		else if ((b < a) && (a > 50))
		{
			cout << "Ваше число меньше загаданного и загаданное число больше 50 " << endl;
		}
		else if ((b > a) && (a <= 50))
		{
			cout << "Ваше число больше загаданного и загаданное число меньше либо равно 50" << endl;
		}
		else if ((b > a) && (a > 50))
		{
			cout << "Ваше число больше загаданного и загаданное число больше 50" << endl;
		}
		else
			cout << "Вы угадали!" << endl;


	} while (b != a);
	return 0;
}