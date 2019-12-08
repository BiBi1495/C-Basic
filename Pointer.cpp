#include <iostream>
using namespace std;

int main() 
{
	// có hai dạng biến là biến thông thường như ta vẫn dùng và biến con trỏ chứa địa chị của biến khác
	int n = 8;
	int *a = &n; // khai báo biến con trỏ a, biến này trỏ điến biến thông thường n. 
	//Giá trị của biến con trỏ a là địa chỉ của biến n.
	// dấu * ở đây ko phải là toán tử lấy giá trị như bên dưới, mà nó thông báo là a là biến con trỏ, trỏ đến biến n, và a = &n.
	// đoạn code sau sẽ rõ ràng hơn cho giải thích trên
	/*
	{
		int *a; // khai báo biến con trỏ a, trỏ đến một biến kiểu int nào đó
		a = &n; // gán địa chỉ của n cho a. khi đó giá trị của a là địa chỉ của n.
	}*/
	cout<<a<<endl; // a là biến con trỏ (chứ ko phải *a) trỏ tới biến n. Do đó giá trị của a là địa chỉ của biến n.
	cout<<*a<<endl; // toán tử * tác động đến chỉ biến chứa địa chỉ (bao gồm biến con trỏ và &n) (ko thể tác động đến biến thông thường) 
	// và cho ra giá trị của biến mà biến con trỏ đó trỏ đến
	// ở đây là chỉ ra giá trị của biến n mà con trỏ a trỏ đến
	// lưu ý là toán tử * chỉ tác động đến biến con trỏ, dòng code sau sẽ gây lỗi cout<<*n;
	cout<<&n<<endl; // toán tử & tác động đến một biến bất kì kể cả con trỏ và thông thường và cho ra địa chỉ của nó.
	// ở đây &n là địa chỉ của biến thông thường n.
	cout<<&(*a)<<endl; // *a là giá trị của biến mà con trỏ a trỏ đến, ở đây là giá trị của n.
	// Do đó biểu thức &(*a) sẽ cho ra địa chỉ của n.
	cout<<&a; // cho ra địa chỉ của biến con trỏ a.
	cout<<*(&n) // &n là địa chỉ của n, giống là một con trỏ trỏ tới biến n. Vì thế toán tử * tác động lên nó và cho ra giá trị của biến có địa chỉ đó.
	return 0;
}
// Toán tử trỏ (*) tương tự như toán tử nhân (*), tuy nhiên toán tử trỏ (*) là toán tử 1 ngôi, trong khi toán tử nhân (*) là 2 ngôi.
