#include"FillRand.h"
//#include"FillRand.cpp"	//���� ������� �� ���������, �� �� ���������� �� � ���� ������ �� ������������ �� ����� ������
#include"Print.h"
#include"Print.cpp"	
#include"Sort.cpp"
#include"Shift.h"
#include"Shift.cpp"
#include"Statistik.h"
#include"Statistik.cpp"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;	//Sum of array elements
	cout << "�������-�������������� ��������� �������: " << Avg(arr, n) << endl;//Avarage of array elemnts
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr, n) << endl;
	int number_of_shifts;
	//cout << "������� ���������� �������: "; cin >> number_of_shifts;	//Enter number of shifts
	//shiftLeft(arr, n, number_of_shifts);
	//Print(arr, n);
	//cout << "������� ���������� �������: "; cin >> number_of_shifts;	//Enter number of shifts
	//shiftRight(arr, n, number_of_shifts);
	//Print(arr, n);
	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "����� ��������� �������: " << Sum(d_arr, D_SIZE) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(d_arr, D_SIZE) << endl;
	cout << "����������� �������� � �������: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(d_arr, D_SIZE) << endl;
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	//cout << "������� ���������� �������: "; cin >> number_of_shifts;	//Enter number of shifts
	//shiftLeft(d_arr, D_SIZE, number_of_shifts);
	//Print(d_arr, D_SIZE);
	//cout << "������� ���������� �������: "; cin >> number_of_shifts;	//Enter number of shifts
	//shiftRight(d_arr, D_SIZE, number_of_shifts);
	//Print(d_arr, D_SIZE);

	const int C_SIZE = 11;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "����� ��������� �������: " << Sum(c_arr, C_SIZE) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(c_arr, C_SIZE) << endl;
	cout << "����������� �������� � �������: " << minValueIn(c_arr, C_SIZE) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(c_arr, C_SIZE) << endl;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Print(i_arr_2[0], ROWS * COLS);
	cout << "����� ��������� �������: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Print(i_arr_2[0], ROWS * COLS);
	//cout << "������� ���������� �������: "; cin >> number_of_shifts;	//Enter number of shifts
	//shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	//Print(i_arr_2, ROWS, COLS);
	//cout << "������� ���������� �������: "; cin >> number_of_shifts;	//Enter number of shifts
	//shiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	//Print(i_arr_2, ROWS, COLS);
}