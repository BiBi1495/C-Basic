#include <iostream>
using namespace std;
class hop
{
	public:
	double chieudai;
	double chieurong;
	double chieucao;
	double thetich(void) // khai báo và định nghĩa hàm tính thể tích ở bên trong định nghĩa class
	{
		return chieudai*chieurong*chieucao;
	};
	double dientich(void);// khai báo hàm tính diện tích ở bên trong class nhưng định nghĩa nó ở bên ngoài class
};
double hop::dientich(void)
{
	return chieudai*chieurong;
}
int main() // hàm main là hàm duy nhất ko truyền biến vào. Hàm thể tích ở tren mặc dù ko cần truyền biến nào nhưng vẫn phải ghi void
{
	hop hop1;
	hop1.chieudai = 4.2;
	hop1.chieurong = 2.1;
	hop1.chieucao = 1.8;
	double thetich;
	thetich = hop1.thetich();
	cout<<"The tich cua hop là: "<<thetich<<endl;
	cout<<"Dien tich day cua hop la: "<<hop1.dientich();
	return 0;
}

// Một hàm thành viên của một lớp là một hàm mà có định nghĩa hoặc prototype của nó bên trong định nghĩa lớp giống như bất kỳ biến nào khác. 
// Nó hoạt động trên bất kỳ đối tượng nào của lớp mà nó là một thành viên, và có sự truy cập tới tất cả thành viên của một lớp cho đối tượng đó.
