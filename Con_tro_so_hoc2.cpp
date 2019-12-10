#include <iostream>
using namespace std;

int main() 
{
	int max = 3;
	int mang[max] = {2, -4, 8};
	int *pointer;
	pointer = &mang[max-1];
	for (int i=max-1; i > -1; i--)
	{
	    cout<<"địa chỉ của phần tử thứ "<<i<<" là: "<<pointer<<endl;
	    cout<<"giá trị của phần tử thứ "<<i<<" là: "<<*pointer<<endl;
	    pointer--;
	}
	return 0;
}
