/******************************************************************************
* AUTHOR          : Jesus Sanchez
* STUDENT ID      : 1024834
* EXTRA CREDIT #1 : Dynamic 9
* CLASS           : CS1C
* SECTION         : MW: 1:30pm
* DUE DATE        : 02/22/2017
* ****************************************************************************/

#include "Dynamic9.h"
#include <iostream>
using namespace std;

/******************************************************************************
 * DYNAMIC 9
 * ----------------------------------------------------------------------------
 * This program uses a DynArray class to great dynamic arrays with a predefined
 * size. Two objects of the class are instantiated and the dynamic array of the
 * first object is initialized using the Store function and the elements are
 * printed using the ValueAt function. Then, the array of the second object
 * is initialized using the CopyFrom function and the elements are printed.
 * Finally, to test the boundary check of the Store and ValueAt functions, an
 * invalid index is passed into both.
 * ----------------------------------------------------------------------------
 * INPUT:
 * 	  There is no input.
 *
 * OUTPUT:
 *    array1 - Object holding a pointer to a dynamic array and its size.
 *    array2 - Object holding a pointer to a dynamic array and its size - copied
 *    		   from array1 using deep copy function.
 *****************************************************************************/
int main()
{
	const int SIZE = 10;

	DynArray array1(SIZE); // Dynamic Array object.
	DynArray array2(SIZE); // Dynamic Array object.

	// Initializes the elements of the first dynamic array by passing in the
	// current index as the index and value to be stored.
	for(int i = 0; i < SIZE; i++)
	{
		array1.Store(i, i);
	}

	// Prints the contents of the dynamic array.
	for(int i = 0; i < SIZE; i++)
	{
		cout << array1.ValueAt(i) << " " << array1.ValueAt(i) * SIZE << endl;
	}

	cout << endl;

	// Calls the deep copy function to copy the elements and size of the first
	// dynamic array into the elements of the second dynamic array.
	array2.CopyFrom(array1);

	// Prints the contents of the second dynamic array.
	for(int i = 0; i < SIZE; i++)
	{
		cout << array2.ValueAt(i) << " " << array2.ValueAt(i) * 10 << endl;
	}

	cout << endl;

	// Passes an invalid index into the Store and ValueAt functions to test
	// the boundary checking statements.
	array2.Store(11, 11);
	array2.ValueAt(11);

	return 0;
}
