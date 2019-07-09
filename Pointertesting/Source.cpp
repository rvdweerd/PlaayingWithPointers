#include <iostream>
void swap(int* pa, int* pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

class Foo
{
public:
	int bar;
	int baz;
	char fizz;
};

int Sum( int* pArr , int sizeInBytes)
{
	int size = sizeof(pArr);
	int nElements = sizeInBytes / 4;

	int sum = 0;
	for (int i = 0; i < nElements; i++)
	{
		sum += pArr[i];
		//sum += *(pArr);
		//pArr++;
	}
	return sum;
}

int main()
{
	int arr[4] = { 1,2,3,4 };
	/*
	int* pArr0 = &arr[0];
	int* pArr1 = &arr[1];
	
	int* pInt = arr;
	pArr0[2] = 10;
	pInt[1] = 3;
	*/

	int t1 = Sum(&arr[0], sizeof(arr));
	int t2 = Sum(&arr[1], 3*4);
	int t3 = Sum(arr, sizeof(arr));
	//Sum(&arr, sizeof(arr)); //NO GOOD
/*
	int m = 7;
	int n = 5;
	std::cout << m << "," << n << std::endl;
	swap(&m, &n);
	std::cout << m << "," << n << std::endl;
	int& ref = n;
	ref = 3;
	n = ref + n;
	Foo myFoo;
	Foo* pFoo = &myFoo;
	int* pInt = &myFoo.baz;
	char* pChar = &(*pFoo).fizz;
	char* pChar2 = &pFoo->fizz;
*/
	return 0;
}