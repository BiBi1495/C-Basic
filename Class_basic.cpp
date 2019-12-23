#include <iostream>
using namespace std;

class hop
{
	public:
	double chieudai;
	double chieurong;
	double chieucao;
};
int main() 
{
	hop hop1;
	hop1.chieudai = 4.9;
	hop1.chieurong = 3.5;
	hop1.chieucao = 2.7;
	double thetich;
	thetich = hop1.chieudai*hop1.chieurong*hop1.chieucao;
	cout<<"The tich cua hop 1 la: "<<thetich;
	return 0;
}
