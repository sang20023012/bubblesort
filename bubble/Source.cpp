#include <iostream>
using namespace std;
void biengan(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
void bubbletang(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				biengan(&arr[j], &arr[j + 1]);
			}
		}
	}
}
void bubblegiam(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				biengan(&arr[j], &arr[j + 1]);
			}
		}
	}
}
void xuat(int arr[], int kt)
{
	for (int i = 0; i < kt; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	int arr[] = { 3,5,4,7,9,8,6,0,1,2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbletang(arr, n);
	cout << "Mang sap xep tang dan: ";
	xuat(arr, n);
	cout << "mang sap xep giam dan: ";
	bubblegiam(arr, n);
	xuat(arr, n);

	return 0;
}

