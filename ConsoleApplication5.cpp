#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n = 0;

	cout << "введите размер одномерного массива" << endl;
	cin >> n;
	int* mas1 = new int[n];
	for (int i = 0; i < n; ++i)
	{
		mas1[i] = rand() % 201 - 100;
	}

	for (int i = 0; i < n; ++i)
	{
		mas1[i] = rand() % 201 - 100;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << mas1[i] << " ";
	}
	cout << endl;

	int sum(0);
	for (int i = 0; i < n; ++i)
	{
		if (mas1[i] < 0)
		{
			sum += mas1[i];
		}
	}

	cout << sum << endl;

	n = 0;
	cout << "введите размер двумерного массива" << endl;
	cin >> n;

	int** mas = new int* [n];

	for (int i = 0; i < n; ++i)
	{
		mas[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			mas[i][j] = rand() % 201 - 100;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}

	int S(0);
	for (int i = 0; i < n; i++)
		S += mas[i][i];
	cout << S << endl;

	system("pause");
	return 0;
}