#include"statistik.h"
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