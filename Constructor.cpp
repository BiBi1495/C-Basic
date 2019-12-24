#include <iostream>
using namespace std;
class hop
{
	public:
	double chieudai;
	double chieurong;
	hop(double rong) { chieurong = rong; }; // đây là một constructor, nó là hàm thành viên mà sẽ chạy ngay khi một đối tượng đc tạo ra. Ở đây ngay khi đối tượng đc tạo ra thì constructor này sẽ gán giá trị khởi tạo cho chiều rộng của hộp mà ko cần hàm laychieurong.
	void laychieucao(double cao) { chieucao = cao; };
	double thetich(void) {return chieudai*chieurong*chieucao; };
	
	private:
	double chieucao;
};

int main() 
{
	hop hop1(5.3); // khởi tạo chiều rộng bằng 5.3
	hop1.chieudai = 7.6;
	hop1.laychieucao(3.4);
	cout<<"The tich cua hop là: "<<hop1.thetich();
	return 0;
}
// Một class contructor là một hàm thành viên đặc biệt của một lớp mà được thực thi bất cứ khi nào chúng ta tạo các đối tượng mới của lớp đó.
// Một constructor sẽ có tên giống như lớp và nó không có bất kỳ kiểu trả về, kể cả kiểu void.
/*
Trong trường hợp muốn gán nhiều giá trị khởi tạo thì ta có thể dùng cú pháp sau:
hop(double dai, double rong, double cao) chieudai(dai) chieurong(rong) chieucao(cao);
hop hop1(7.6, 5.3, 3.4) cú pháp này sẽ khởi tạo cả 3 giá trị cho chiều dài, chiều rộng và chiều cao. 

hai câu lệnh sau tương đương nhau:
hop(double dai) chieudai(dai); // câu lênh này có thể khởi tạo nhiều giá trị
hop(double dai) { chieudai = dai; };
*/
