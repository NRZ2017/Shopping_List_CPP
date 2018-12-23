#include <iostream>

using namespace std;

//pass by value / copy
void One(int x)
{
	x++;
}

//pass by pointer
void Two(int* x)
{
	(*x)++;
}

//pass by reference
void Three(int& x)
{
	x++;
}

// type* var	= pointer
// *var			= dereference
// &var			= get address
// type& var	= reference pointer 


void Func()
{
	int* x = new int(3);
	delete x;
}



class List
{
public:
	int* list;
	List(int Size)
	{
		Size = size;
		list = new int[size];
	}

	void Add(int value)
	{
		int* temp;

		for (int i = 0; i < size; i++)
		{
			temp = new int[size + 1];
			list = temp;
			temp += value;
			delete list;
			temp = list;
		}
	}
		
private:

	int size;
	


};



int main()
{

	
//	int size;
//	cin >> size;

//	int* arr = new int[size];
	
	List myList = List(5);
	myList.Add(3);
	myList.Add(5);
	myList.Add(7);
	myList.Add(9);
	myList.Add(12);

	int x = 0;
	system("pause");
}