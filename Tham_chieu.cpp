#include <iostream>
using namespace std;

int main() 
{
	int a = 3;
	double b = 10.62;
	int &x = a;
	double &y = b;
	cout<<"giá trị của tham chiếu x là: "<<x<<endl;
	cout<<"giá trị của tham chiếu y là: "<<y<<endl;
	cout<<"địa chỉ của biến tham chiếu x là: "<<&x<<endl;
	cout<<"địa chỉ của biến a là: "<<&a<<endl;
	// ta thấy x và a có chung địa chỉ
	
	int c = a;
	cout<<"địa chỉ của biến c là: "<<&c<<endl;
	// ta thấy mặc dù c được gán bằng a nhưng địa chỉ của chúng khác nhau, vì chúng là hai biến khác nhau.
   // trong khi đó biến tham chiếu x có cùng địa chỉ với biến a. 
   // Thực chất x và a là cùng một biến, chúng chỉ khác nhau tên gọi.
	return 0;
}
// sự khác nhau giữa tham chiếu và con trỏ
/*
  Sử dụng tham chiếu có thể thường gây bối rối cho bạn như với con trỏ, tuy nhiên, có 3 điểm khác nhau giữa tham chiếu và con trỏ trong C++:

Bạn không thể có tham chiếu NULL. Bạn luôn luôn phải giả sử rằng một tham chiếu được kết nối với một phần của kho lưu trữ.

Khi một tham chiếu được khởi tạo cho một đối tượng, nó không thể bị thay đổi để tham chiếu tới đối tượng khác. Các con trỏ có thể được trỏ tới đối tượng khác tại bất kỳ thời điểm nào.

Một tham chiếu phải được khởi tạo khi nó được tạo. Các con trỏ có thể được tạo tại bất kỳ thời điểm nào.
*/
/*
Một lưu ý nhỏ giữa phép lấy giá trị với toán tử * và phép khai báo con trỏ. Ví dụ:
cout<<*p; // in giá trị của biến mà con trỏ p trỏ đến.
int *p = a; khai báo biến con trỏ p trỏ đến biến a. Dấu * ở đây chỉ mang ý nghĩa khai báo biến con trỏ, chứ ko phải toán tử *. Sự khác nhau là do tử int mà ra

tương tự cũng có sự khác nhau giữa toán tử lấy địa chỉ & và phép khai báo biến tham trị. Ví dụ:
cout<<&p; // in ra địa chỉ của biến p.
int &p = a; // khai báo biến tham chiếu p tham chiếu đến biến a. Kí hiệu & ở đây chỉ mang ý nghĩa khai báo biến chứ ko phải toán tử &. Sự khác nhau là do từ int mà ra 

*/
