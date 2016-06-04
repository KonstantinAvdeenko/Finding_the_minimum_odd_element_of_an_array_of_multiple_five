#include <tchar.h>
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int _tmain(int argc, wchar_t argv[]) // функция для работы с символами юникода и нет
{
	srand(time(NULL)); // генератор псевдослучайных чисел основывающийся на временную дату
	setlocale(LC_ALL, "Russian"); // поддержка работы с русскими символами 
	int arr[20];
	for (int i = 0; i < 20; i++)
	{
		arr[i] = rand() % 2000 - 1000;
		cout << " " << arr[i]; // заполнение и вывод элементов массива с рандомными числами от -1000 до 1000 
	}
	int min = 2000;
	for (int j = 0; j<20; j++)
	{
		if (arr[j] % 2 != 0)
		{
			if (arr[j] % 5 == 0)
			{ 
				if (arr[j]<min)
				{ 
					min = arr[j]; 
				} 
			}
		}
	}
	if (min == 2000)
	{
		cout << endl;
		cout << "Нет элемента, удовлетворяющего условию";
	}
	else
	{
		cout << endl;
		cout << "Минимальный нечетный элемент массива кратный 5 равен " << min;
	}
	cin.get(); // окончание работы с потоками
	return 0;
}