#include <iostream>
using namespace std;
using std::cout;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void UniqueRand(int arr[], const int n);
void UniqueRand(double arr[], const int n);
void UniqueRand(char arr[], const int n);
void Print(const int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
int Sum(const int arr[], const int n);
double Sum(double arr[], const int n);
char Sum(char arr[], const int n);
double Avg(const int arr[], const int n);
int Avg(double arr[], const int n);
char Avg(char arr[], const int n);
int minValueIn(const int arr[], const int n);
double minValueIn(double arr[], const int n);
char minValueIn(char arr[], const int n);
int maxValueIn(const int arr[], const int n);
double maxValueIn(double arr[], const int n);
char maxValueIn(char arr[], const int n);
void Sort(int arr[], int const n);
void Sort(char arr[], int const n);
void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftLeft(double arr[], const int n, int number_of_shifts);
void shiftLeft(char arr[], const int n, int number_of_shifts);
void Search(int arr[], const int n);
void Search(double arr[], const int n);
void Search(char arr[], const int n);
//void shiftRight(int arr[], const int n, int number_of_shifts);
//void shiftRight(double arr[], const int n, int number_of_shifts);
//void shiftRight(char arr[], const int n, int number_of_shifts);

const int n = 10;
//int arr[] = { 0, 1, 2, 3, 4, 4, 6, 7, 10, 7 };
int arr[n];
int repeat_qty = 0;


void main()
{
	setlocale(LC_ALL, "");

	//arr[2] = 123; // обращение к эелементу массива на запись
	//cout << arr[2] << endl; //обращение к эелементу массива на чтение

	int Sum_arr = 0, Mid_arr = 0;
	//cout << "Введите элементы массива: ";
	//FillRand(arr, n);
	srand(time(NULL));
	UniqueRand(arr, n);
	cout << endl << "Вы ввелли следующие значения массива: ";
	Print(arr, n);
	cout << endl << endl;;
	Sum(arr, n);
	cout << "Сумма всех элементов массива равна:  " << Sum(arr, n) << endl << endl;
	cout << "Среднее арифмтическое значение элементов массива равно: " << Avg(arr, n) << endl << endl;

	cout << "Максимальное значение элемента массива равно: " << maxValueIn(arr, n) << endl << endl;
	cout << "Минималбное значение элемента массива равно: " << minValueIn(arr, n) << endl << endl;
	Sort(arr, n);
	Print(arr, n);
	int number_of_shifts;
	//cout << "Введите количество шагов, для сдвига элементов массива: "; cin >> number_of_shifts;
	//shiftLeft(arr, n, number_of_shifts);
	//Print(arr, n);
	//shiftLeft(arr, n, n - number_of_shifts);
	//Print(arr, n);
	Search(arr, n);
	//Print(arr, n);
	//shiftRight(arr, n, number_of_shifts);
	//Print(arr, n);
	const int SIZE = 8;
	double d_arr[SIZE];
	FillRand(d_arr, SIZE);
	Print(d_arr, SIZE);

}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}


void UniqueRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}
}
void UniqueRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}
}
void UniqueRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}
}

void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl << endl;
}

int Sum(const int arr[], const int n)
{
	int Sum_arr = 0;
	for (int i = 0; i < n; i++)
	{
		Sum_arr += arr[i];
	}
	return Sum_arr;
}
double Sum(double arr[], const int n)
{
	double Sum_arr = 0;
	for (int i = 0; i < n; i++)
	{
		Sum_arr += arr[i];
	}
	return Sum_arr;
}
char Sum(char arr[], const int n)
{
	char Sum_arr = 0;
	for (int i = 0; i < n; i++)
	{
		Sum_arr += arr[i];
	}
	return Sum_arr;
}

double Avg(const int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
int Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
char Avg(char arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

int minValueIn(const int arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min) { min = arr[i]; }
	}
	return min;
}
double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min) { min = arr[i]; }
	}
	return min;
}
char minValueIn(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min) { min = arr[i]; }
	}
	return min;
}
int maxValueIn(const int arr[], const int n)
{
	int max = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (max < arr[i]) { max = arr[i]; }
	}
	return max;
}
double maxValueIn(double arr[], const int n)
{
	double max = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (max < arr[i]) { max = arr[i]; }
	}
	return max;
}
char maxValueIn(char arr[], const int n)
{
	char max = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (max < arr[i]) { max = arr[i]; }
	}
	return max;
}
void Sort(int arr[], int const n)
{
	for (int i = 0; i < n; i++)
	{
		//Счетчик 'i' выбирает элемент, в который нужно поместить минимальное значение из перебираемых элементов

		for (int j = i + 1; j < n; j++)
		{
			//Счетчик 'j' перебирает элементы в поисках минимального
			// arr[i] - выбранный элемент
			// arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}
void Sort(char arr[], int const n)
{
	for (int i = 0; i < n; i++)
	{
		
		for (int j = i + 1; j < n; j++)
		{
			
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}


void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int temp = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = temp;
	}

}
void shiftLeft(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int temp = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = temp;
	}

}
void shiftLeft(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int temp = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = temp;
	}

}


/*void shiftRight(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int temp = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}

}
void shiftRight(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int temp = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}

}
void shiftRight(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int temp = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
	}

}*/

void Search(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[j] == arr[i]) { repeat_qty++ && cout << "Число " << arr[i] << " повторилось " << repeat_qty << " раз(а) " << endl; }


		}
		repeat_qty = 0;
		
	}
	cout << endl;
}
void Search(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] == arr[i]) { repeat_qty++&& cout << "Число " << arr[i] << " повторилось " << repeat_qty << " раз(а) " << endl; }


		}
		repeat_qty = 0;

	}
	cout << endl;
}
void Search(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] == arr[i]) { repeat_qty++&& cout << "Число " << arr[i] << " повторилось " << repeat_qty << " раз(а) " << endl; }


		}
		repeat_qty = 0;

	}
	cout << endl;
}



