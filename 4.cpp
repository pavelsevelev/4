 // ссылка на библеатеку ввода вывода
#include <iostream> 

// ссылка на функции	
#include "4.h"	

// позволяет не использовать приписку std::
using namespace std; 

// выводит тольк не четные числа
void outputsOddNumbers()  
{
	int n = 20;

	
	for (int a = 0; a < n; a = a + 1 + (a % 2 != 0))
	{

		cout << a << endl;

	}

} 

void outputsEvenNumbers()
{
	int n = 20;
	for (int b = 0; b < n; b = b + 1 + (b % 2 == 0))
	{
		cout << b << endl;
	}

}




int main()
{
	const int n = 20; // чтоб избежать без конечности
	int a = 0;
	int b = 0;

	for (int b = 0; b < n; b = b + 1 + (+b % 2 == 0))
	{
		cout << b << endl;
	}
	cout << "enter an even or odd number: ";
	cin >> a;

	if (a % 2 == 0)
	{
		outputsEvenNumbers();
	}
	else
	{
		outputsOddNumbers();
	}
	
	return 0;

	

}
