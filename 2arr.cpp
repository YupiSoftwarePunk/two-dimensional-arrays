// двумерные списки
#include <iostream>
#include <cstdlib>

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	// создание одномерногог и двумерногог массива
	//const int size = 4;
	//int arr[size];
	//for (int i = 0; i < size; i++)
	//{
	//	arr[i] = rand() % 10 + 1;
	//	cout << arr[i];
	//}
	//cout << "\n\n\n\n\n";

	//const int row = 5;
	//const int col = 9;
	//int arr2[row][col];
	//for (int i = 0; i < row; i++)
	//{
	//	for (int j = 0; j < col; j++)
	//	{
	//		arr2[i][j] = rand() % 10 + 1;
	//		cout << arr2[i][j] << " ";
	//	}
	//	cout << endl;
	//}


	const int row = 10;
	const int col = 15;
	int arr[row][col];
	float sum{};
	float arithmetic_mean{};
	int min_val{}, max_val{}; //MAXINT, MININT
	int sumLine{};
	int key{};
	int sumColumns[col]{};
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 21;
			std::cout << arr[i][j] << " ";
			sum += arr[i][j];
			arithmetic_mean = sum / 150;

			sumLine += arr[i][j];
			sumColumns[j] += arr[i][j];

			if (arr[i][j] > max_val)
			{
				max_val = arr[i][j];
			}
			else if (arr[i][j] < min_val)
			{
				min_val = arr[i][j];
			}
		}
		std::cout << " |" << sumLine << endl;
		sumLine = 0;

	}
	std::cout << "-------------------------------------------" << endl;

	for (int j = 0; j < col; j++)
	{
		std::cout << sumColumns[j] << " ";
	}

	std::cout<< " |" << sum << endl;
	std::cout << endl;
	std::cout << "Сумма всех элементов = " << sum << endl;
	std::cout << "Среднее арифметическое = " << arithmetic_mean << endl;
	std::cout << "Максимальное значение = " << max_val << endl;
	std::cout << "Минимальное значение = " << min_val << endl;
}