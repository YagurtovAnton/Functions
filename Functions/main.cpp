#include<iostream>
using namespace std;

//#define ClassWork
#ifdef ClassWork
int Sum(int a, int b);
int Diff(int a, int b);
int Prod(int a, int b);
double Quot(int a, int b);
#endif // ClassWork
double Factorial(int n);
double Power(int a, int b);
int number_of_shifts;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Functions" << endl;
#ifdef Factorial
	int n;
	cout << "¬ведите число"; cin >> n;
	cout << n << "!= " << Factorial(n) << endl;
#endif // Factorial
#ifdef ClassWork
	int a, b;
	cout << " ¬ведите 2 числа: "; cin >> a >> b;
	double c = Sum(a, b);
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Diff(a, b) << endl;
	cout << a << "*" << b << "=" << Prod(a, b) << endl;
	cout << a << "*" << b << "=" << Quot(a, b) << endl;
#endif // ClassWork
#ifdef ClassWork
	cout << "Vvedite chislo"; cin << a;
}
	cout << "Vvedite chislo"; cin << n;cout << "Vvedite chislo"; cin << n;
int Sum(int a, int b)
{
	int c = a + b;
	return c;
}
int Diff(int a, int b)
{
	return a - b;
}
int Prod(int a, int b)
{
	return a * b;
}
double Quot(int a, int b)
{
	return(double)a / b;
}
#endif // ClassWork
#ifdef Factorial
double Factorial(int n)
{
	double f = 1;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}
	return f;
}
#endif // Factorial


#ifdef 1
cout << "¬ведите количество сдвигов: "; cin >> number_of_shifts;
shiftLeft(arr, n, number_of_shifts);
Print(arr, n);
void shiftLeft(int arr[], const int n, int number_of_shifts;
#endif // 1
void shiftLeft(int arr[], const int n, int number_of_shifts;
{
	int arr[], const int n- int number_of_shifts
}

