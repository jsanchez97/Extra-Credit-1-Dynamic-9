#include "Dynamic9.h"
#include <iostream>
using namespace std;

int main()
{
	DynArray array1(10);
	DynArray array2(10);

	for(int i = 0; i < 10; i++)
	{
		array1.Store(i, i);
	}

	for(int i = 0; i < 10; i++)
	{
		cout << array1.ValueAt(i) << " " << array1.ValueAt(i) * 10 << endl;
	}

	cout << endl;

	array2.CopyFrom(array1);

	for(int i = 0; i < 10; i++)
	{
		cout << array2.ValueAt(i) << " " << array2.ValueAt(i) * 10 << endl;
	}

	cout << endl;

	array2.Store(11, 11);
	cout << array2.ValueAt(11);

	return 0;
}
