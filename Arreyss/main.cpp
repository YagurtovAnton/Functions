#pragma warning(disable:4326)
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"
#define delimiter "\n-----------------------------------------\n"

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

int  Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(char arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(char arr[], const int n);

int  minValueIn(int arr[], const int n);
double  minValueIn(double arr[], const int n);

int  maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);

void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftRight(int arr[], const int n, int number_of_shifts);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Noiia yeaiaioia ianneaa: " << Sum(arr, n) << endl;	//Sum of array elements
	cout << "N?aaiaa-a?eoiaoe?aneia yeaiaioia ianneaa: " << Avg(arr, n) << endl;//Avarage of array elemnts
	cout << "Ieieiaeuiia cia?aiea a ianneaa: " << minValueIn(arr, n) << endl;
	cout << "Iaeneiaeuiia cia?aiea a ianneaa: " << maxValueIn(arr, n) << endl;
	int number_of_shifts;
	const int I_SIZE = 5;
	int i_arr[I_SIZE];
	FillRand(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	Sort(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	cout << "Noiia yeaiaioia ianneaa: " << Sum(i_arr, I_SIZE) << endl;	//Sum of array elements
	cout << "N?aaiaa-a?eoiaoe?aneia yeaiaioia ianneaa: " << Avg(i_arr, I_SIZE) << endl;//Avarage of array elemnts
	cout << "Ieieiaeuiia cia?aiea a ianneaa: " << minValueIn(i_arr, I_SIZE) << endl;
	cout << "Iaeneiaeuiia cia?aiea a ianneaa: " << maxValueIn(i_arr, I_SIZE) << endl;
	//int number_of_shifts;
	//cout << "Aaaaeoa eiee?anoai naaeaia: "; cin >> number_of_shifts;	//Enter number of shifts
	//shiftLeft(arr, n, number_of_shifts);
	//Print(arr, n);
	//cout << "Aaaaeoa eiee?anoai naaeaia: "; cin >> number_of_shifts;	//Enter number of shifts
	//shiftRight(arr, n, number_of_shifts);
	//Print(arr, n);
	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "Noiia yeaiaioia ianneaa: " << Sum(brr, SIZE) << endl;
	//cout << "N?aaiaa-a?eoiaoe?aneia yeaiaioia ianneaa: " << Avg(brr, SIZE) << endl;
	//cout << "Ieieiaeuiia cia?aiea a ianneaa: " << minValueIn(brr, SIZE) << endl;
	//cout << "Iaeneiaeuiia cia?aiea a ianneaa: " << maxValueIn(brr, SIZE) << endl;

	cout << delimiter << endl;

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Noiia yeaiaioia ianneaa: " << Sum(d_arr, D_SIZE) << endl;
	cout << "N?aaiaa-a?eoiaoe?aneia yeaiaioia ianneaa: " << Avg(d_arr, D_SIZE) << endl;
	cout << "Ieieiaeuiia cia?aiea a ianneaa: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "Iaeneiaeuiia cia?aiea a ianneaa: " << maxValueIn(d_arr, D_SIZE) << endl;
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	cout << delimiter << endl;

	const int C_SIZE = 11;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Noiia yeaiaioia ianneaa: " << Sum(c_arr, C_SIZE) << endl;
	cout << "N?aaiaa-a?eoiaoe?aneia yeaiaioia ianneaa: " << Avg(c_arr, C_SIZE) << endl;

	cout << delimiter << endl;


	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	//	Print(i_arr_2, ROWS, COLS);
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)

int iterations++;
int exeanges++;

{
	for (int i = 0; i< ROWS;i++)
	{ 
		for (int j =0;j< COLS;j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k==i?j+1:0; l < COLS; l++)
				{
					iterations++;
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
						exeanges++;
					}
				}
			}
		}
	}
}

#ifdef DEBUG


int  Sum(int arr[], const int n)
{
	int sum = 0;
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
}
double Avg(double arr[], const int n)
{
	return Sum(arr, n) / n;
}
double Avg(char arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}


int  minValueIn(int arr[], const int n)
{
	int min = arr[0];
}
return min;

double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

int  maxValueIn(int arr[], const int n)
{
	int max = arr[0];
}
return max;

double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
#endif // DEBUG