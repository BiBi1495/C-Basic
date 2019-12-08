#include <iostream>
using namespace std;

// Truyền tham trị
void Ham1(int a)
{
	a = a + 1;
}
void Ham2(int b)
{
	b = b + 1;
	cout<<"b trong hàm 2 là: "<<b<<endl;
}
void Ham3(int *c);
int main() 
{
	int a = 10;
	Ham1(a);
	cout<<"a trong hàm 1 là: "<<a<<endl;
	
	int b = 10;
	Ham2(b);
	cout<<"b bên ngoài hàm 2 là: "<<b<<endl;
	
	Ham3(&b);
	cout<<"b của hàm 3 là: "<<b<<endl; // &b là địa chỉ của biến thông thường b, và &b đc truyền vào *c trong hàm 3 đc định nghĩa bên dưới.
	// ở đây ta phải in ra b (là giá trị của biến b), chứ ko phải &b (là địa chỉ của b)
	return 0;
}
/* Trong ví dụ trên thì cả hai hàm 1 và 2 đều là truyền tham trị. Tức là giá trị của a và b đc truyền vào trong hàm và tính toán. 
Và chúng chỉ cộng thêm 1 ở bên trong hàm. Ra ngoài hàm thì a và b vẫn ko đổi.
Truyền tham trị là truyền giá trị của biến (không phải là địa chỉ ô nhớ), 
khi đó phương thức sẽ tự động tạo ra một địa chỉ ô nhớ mới để lưu trữ giá trị này, 
do đó nó chỉ được thay đổi trong phương thức hiện hành và giá trị của biến không bị thay đổi bên ngoài phương thức hiện hành.
*/

// Truyền tham chiếu là truyền địa chỉ ô nhớ của biến, do đó khi thay đổi giá trị của biến bên trong phương thức thì giá trị của biến cũng bị thay đổi bên ngoài phương thức.
void Ham3(int *c)
{
	*c = *c * 2; // *c là giá trị của biến mà con trỏ c truyền vào
}
