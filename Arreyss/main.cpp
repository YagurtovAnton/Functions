#include"stdafx.h"
#include"constant.h"
#include"fillrand.h"
#include"print.h"
#include"sort.h"
#include"statistik.h"



int  Sum(int arr[], const int n);
double Sum(double arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);

int  minValueIn(int arr[], const int n);
double  minValueIn(double arr[], const int n);

int  maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);



void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Суььф элементов массива: " << Sum(arr, n) << endl;	//Sum of array elements
	cout << "Средне арифметическое элементов массива: " << Avg(arr, n) << endl;//Avarage of array elemnts
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	int number_of_shifts;
	const int I_SIZE = 5;
	int i_arr[I_SIZE];
	FillRand(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	Sort(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	cout << "Суььф элементов массива: " << Sum(i_arr, I_SIZE) << endl;	//Sum of array elements
	cout << "Средне арифметическое элементов массива: " << Avg(i_arr, I_SIZE) << endl;//Avarage of array elemnts
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr, I_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr, I_SIZE) << endl;
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


void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)


{
	for (int i = 0; i< ROWS;i++)
	{ 
		for (int j =0;j< COLS;j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k==i?j+1:0; l < COLS; l++)
				{
				
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
						
					}
				}
			}
		}
	}
}

