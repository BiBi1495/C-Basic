#include <iostream>
using namespace std;

int main() 
{
	int a = 3;
	int *b, **c;
	b = &a; // con trỏ b trỏ tới biến thường a
	c = &b; // con trỏ c trỏ tới biến con trỏ b
	cout<<"địa chỉ của a là "<<&a<<endl;
	cout<<"giá trị của b là "<<b<<endl;
	cout<<"địa chỉ của b là "<<&b<<endl;
	cout<<"giá trị của c là "<<c<<endl;
	cout<<"địa chỉ của c là "<<&c<<endl;
	return 0;
}
