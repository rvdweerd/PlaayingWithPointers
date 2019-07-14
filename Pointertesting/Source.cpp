#include <iostream>

void Swap(int* pa, int* pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void Swap( int* const pArr, const int size)
{
	int  tempArr[5];
	for (int i = 0; i < size; i++)
	{
		tempArr[size-1-i] = *(pArr + i);
	}
	for (int i = 0; i < size; i++)
	{
		*(pArr + i) = tempArr[i];
	}

}

void Swap2( int* const pArr, int size)
{
	//int  tempArr[4];
	//for (int* i = pArr + size - 1; i >= pArr; i--)
	for (int i=0;i<size/2;i++)
	{
		Swap( pArr+i , pArr+size-1-i);
	}

}

void Swap3(int* pl, int size)
{
	/*
	int* pr = pl + size - 1;
	while (pl < pr)
	{
		int temp = *pl;
		*pl = *pr;
		*pr = temp;
		pl++;
		pr--;
	}
	*/

	for (int* pr = pl + size - 1; pl < pr; pl++ , pr--)
	{
		/*
		int temp = *pl;
		*pl = *pr;
		*pr = temp;
		*/
		std::swap(*pl, *pr);
	}
}

void PrintArray(int* pArr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << pArr[i] ;
	}
	std::cout << std::endl;
}

class Foo
{
public:
	int bar;
	int baz;
	char fizz;
};

int Sum( const int* const pArr , int sizeInBytes)
{
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

int Sum2( const int* p, int size)
{
	int s = 0;
	for (const int* const e = p + size; p < e; p++)
	{
		s += *p;
	}
	return s;
}

class Bullshit {
public:
	void Wowee() 
	{
		z = 42069;
	}
public:
	int x;
	char arr[23];
	int z;
};

void Funk(Bullshit* pb)
{
	// compile time indexing
	pb[3].arr[7] = 40;

	// runtime indexing
	int val, i, j;
	std::cin >> val >> i >> j;
	pb[i].arr[j] = val;

}

int main()
{
	// pointer targeting and indirection
	int n = 69;
	int* pn = &n;
	*pn += 420 - 69;

	// reference vs. pointer
	int& rn = n;
	rn += 69 - 420;

	// pointer arithmetic
	pn++;
	pn += 5;
	
	// array indexing
	int arr[] = { 1,2,3,4,5,6,7 };
	int* pa1 = arr;
	int* pa2 = &arr[4];
	*pa2 = 69;
	pa1[4] = 420;

	// pointer distance
	int dist = pa2 - pa1;

	// pointer to pointer
	int** pp = &pn;
	int*** ppp = &pp;
	**ppp = arr + 6;
	***ppp = 666;
	
	// complex indexing
	Bullshit bs[13];
	Funk(&bs[2]);



	/*
	float f = 1.5f;
	int k = int(f);
	static constexpr int arrSize = 5;
	int arr[arrSize] = { 1,2,3,4, 5 };
	PrintArray(arr,arrSize);
	Swap(&arr[0],arrSize);
	PrintArray(arr,arrSize);
	Swap2(&arr[0], arrSize);
	PrintArray(arr, arrSize);
	Swap3(&arr[0], arrSize);
	PrintArray(arr, arrSize);
	
	int* pArr0 = &arr[0];
	int* pArr1 = &arr[1];
	
	int* pInt = arr;
	pArr0[2] = 10;
	pInt[1] = 3;
	
	int* p = &arr[0];
	int* p2 = arr;
	*(p + 3) = 99;
	p[3] = 4;
	p2++;
	*p2 = 10;
*/

/*
	int t1 = Sum(&arr[0], sizeof(arr));
	std::cout << "Total1 = "<< t1<<std::endl;
	int t2 = Sum2(&arr[0], arrSize);
	std::cout << "Total2 = " << t2 << std::endl;
	//int t3 = Sum(arr, sizeof(arr));
	//Sum(&arr, sizeof(arr)); //NO GOOD
*/
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