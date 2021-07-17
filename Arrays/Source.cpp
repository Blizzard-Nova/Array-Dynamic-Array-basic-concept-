//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> A SIMPLE CODE FOR DYNAMIC ARRAYS  :) I will update this code if I feel the need to, updates might include deletion, search, length etc>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//**************************************************************************************************
//**************************************************************************************************
//**************************************************************************************************
/*#include <iostream>
using namespace std;
int main()
{
	int n=0;
	cout << "Enter number of items for your list \n";
	cin >> n;
	int* arr = new int(n);// To declare arrays dynamically we use new key word, new syntax= pointer variable=new data type
	cout << "Enter " << n << " items in your list \n";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	cout << endl;
	cout << "Dsiplaying your list \n";
	for (int j = 0; j < n; j++)
	{
		cout << arr[j];
		cout << " ";
	}
	cout << endl;
	cout << endl;
	//delete[] arr;// This is how you delete an array, to dclare an array again just type arr=new int(n), since arr is already declared dont declare it again

	return 0;
}*/
//**************************************************************************************************
//**************************************************************************************************
//**************************************************************************************************
//>>>>>>>>>>>>>>>>>>>>>>>>>>>C++ CODE THAT SHOWS ARRAYS USING POINTER VARIABLES<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//**************************************************************************************************
//**************************************************************************************************
//**************************************************************************************************
#include <iostream>
using namespace std;
int main()
{
	int size;
	cout << "Enter the number of elements inside the array \n";
	cin >> size;
	int* arr = new int(size);// I love giving my arrays user defined size if you want you can give predefined size like :
	//int arr[10]; in this case you are giving array the size of 10, follow the rest of the code as it is :)
	cout << "Enter elements inside the array \n";
	for (int i = 0; i < size; i++)
	{
		cin >> *(arr + i);
	}
	cout << "The elements you have entered are.......\n";
	for (int i = 0; i < size;++ i)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
	cout << endl;
	int* ptr = NULL;
	int x = 0;
	ptr = &x;
	cout << "Enter the number you want to search \n";
	cin >> *ptr;
	int y = 0;
	int f = 0;
	while (y < size)
	{
		if ((*arr + y) == *ptr)
		{
			break;
		}
		y++;
	}
	if (*(arr + y) == *ptr)
	{
		cout << "Element " << *ptr << " is present at index " << y << " in the array \n";
	}
	else
	{
		cout << "Element is not present inside the array \n";
	}
	return 0;
}