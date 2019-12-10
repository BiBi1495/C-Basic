#include <iostream>
using namespace std;
int ham1(int a)
{
	a = a + 5;
	return a;
}
int ham2(int &b)
{
	b = b * 2;
	return b;
}
int main() 
{
	int c = 10, d = 20;
	ham1(c);
	cout<<"giá trị của c trong hàm 1 là: "<<c<<endl;
	
	ham2(d);
	cout<<"giá trị của d trong hàm 2 là: "<<d<<endl;
	return 0;
}
/*
kết quả giá trị của c trong hàm 1 là: 10; giá trị của d trong hàm 2 là: 40.
Ta thấy giá trị của c ko đổi sau khi thực hiện hàm 1. Đó là vì hàm 1 là kiểu truyền tham trị. Giá trị 10 được gán vào tham số a trong hàm 1, còn biến c ko hề thay đổi, nó vần giữ giá trị là 10.
Còn trong hàm 2 thì giá trị của d đã đc nhân 2 lần, hàm 2 là kiểu truyền tham chiếu. Cả giá trị và địa chỉ của biến d được gán cho tham số b trong hàm 2. Do đó sau khi thực hiện hàm 2 thì nó đã thay đổi. 
*/
