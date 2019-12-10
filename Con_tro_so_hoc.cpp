#include <iostream>
using namespace std;

int main() 
{
	int max = 3;
	int mang[max]={10, 20, 100}; // khai báo mảng có 3 phần tử
	int *contro; // khai báo con trỏ trỏ đến biến kiểu int
	contro = mang; // con trỏ trỏ đến mảng đã khai báo. Và con trỏ này cũng trỏ đến phần tử đầu tiên của mảng. 
	for(int i=0; i<max; i++)
	{
		cout<<"địa chỉ của phần tử ["<<i<<"] là:"<<contro<<endl; // in ra địa chỉ mà con trỏ đang trỏ đến. 
		// Sau mỗi lần dịch sang phải một phần tử (nhờ vào lệnh contro++) thì biến con trỏ sẽ trỏ đến phần tử kế tiếp của mảng.
		cout<<"giá trị của phần tử ["<<i<<"] là:"<<*contro<<endl; // in ra giá trị của phần tử mà con trỏ đang trỏ đến
		contro++; // lênh này làm dịch chuyển con trỏ sang ô nhớ kế tiếp
		// ta thấy địa chỉ tăng 4 đơn vị vì kiểu int chiếm 4 bytes trong bộ nhớ 
	}
	return 0;
}
// ngoai ra ta con co the so sanh cac con tro voi nhau nhu so sanh hai so
