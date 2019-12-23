#include <iostream>
using namespace std;
/*
Thành viên public là có thể truy cập từ bất cứ đâu bên ngoài lớp nhưng là bên trong một chương trình. 
Bạn có thể thiết lập và lấy giá trị của các biến public mà không cần các hàm thành viên. Như trong ví dụ của hai file trước. 
*/
class hop
{
	public:
	double chieudai;
	double thetich(void);
	void laychieurong( double rong);
	void laychieucao( double cao);
	
	private:
	double chieurong;
	double chieucao;
	/*
	Một biến hoặc một hàm thành viên private trong C/C++ không thể được truy cập, hoặc được quan sát từ bên ngoài lớp. 
Chỉ có lớp và các hàm friend có thể truy cập các thành viên private trong C/C++.
	*/
};

double hop::thetich(void)
{
	return chieudai*chieurong*chieucao;
};

void hop::laychieurong(double rong) { chieurong = rong; };

void hop::laychieucao(double cao) { chieucao = cao; };

int main() 
{
	hop hop1;
	hop1.chieudai = 8.6; // chieudai là public nên nó có thể đc truy cập tử bên ngoài class
	hop1.laychieurong(6.7);// sẽ ko thể gọi hop1.chieurong = 6.7 vì chieurong là private. Do đó ta cần hàm laychieurong để có thể truy cập nó ở bên ngoài class
	hop1.laychieucao(3.6);
	cout<<"The tich cua hop la: "<<hop1.thetich();
	return 0;
}
