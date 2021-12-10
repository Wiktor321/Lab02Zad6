#include <iostream>

#include <windows.h>

#include <time.h>
using namespace std;


int main()
{
	int liczba, n;

	srand(time(NULL));

	cout << "Podaj ilosc liczb do wylosowania: ", cin >> n;

	for (int i = 0; i <= n; i++)
	{
		liczba = rand() % 56 - 10;

		cout << liczba << " ";
	}
	cout << endl << endl;

	int suma = 0;

	for (int j = -10; j < 45; j += 2)

	{
		suma += j;
	}
	cout << "Suma parzystych elemntow tego ciagu jest rowna = " << suma;

	return 0;
}


