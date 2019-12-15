#include <iostream>
#include <cstring>
using namespace std;

struct books
	{
		char tensach[100];
		char ten_tac_gia[60];
		int book_id;
	}; // khai báo cấu trúc books với các thuộc tính của nó như tên sách, tên tác giả, mã sách. "books" là tên của cấu trúc

typedef struct
{
    char ten[60];
    int namsinh;
} sinhvien; // khai báo kiểu này thì lúc tạo biến mới có kiểu sinhvien thì sẽ ko cần từ khoá struct

void inthongtin(struct books *contro) // khai báo 1 hàm có tham số là con trỏ, trỏ tới biến kiểu struct bôk. Lưu ý ở đây phải là con trỏ chứ ko phải là kiểu truyền tham chiếu.
// Nếu sử dụng &contro thì ko đc
{
	cout<<contro->tensach<<endl; // lưu ý cách truy cập dữ liệu của con trỏ khác với biến thông thường
	cout<<contro->ten_tac_gia<<endl;
	cout<<contro->book_id<<endl;
}
int main() 
{
	// khai báo hai biến có kiểu là struct books
	struct books Quyen1;
	struct books Quyen2;
	
	// nhập dữ liệu cho các biến vừa khai báo
	strcpy(Quyen1.tensach, "tôi tài giỏi, bạn cũng thế");
	strcpy(Quyen1.ten_tac_gia, "AdamKhoo");
	Quyen1.book_id = 1236;
	strcpy(Quyen2.tensach, "Đắc nhân tâm");
	strcpy(Quyen2.ten_tac_gia, "Nguyen Hien Le");
	Quyen2.book_id = 1239;
	
	// truy cập dữ liệu của các biến
	cout<<Quyen1.tensach<<endl;
	cout<<Quyen1.book_id<<endl;
	cout<<Quyen2.ten_tac_gia<<endl;
	
	// sử dụng con trỏ để truy cập dữ liệu của các biến struct
	cout<<"sử dụng con trỏ"<<endl;
	inthongtin(&Quyen1);
	inthongtin(&Quyen2);
	
	// khai báo 1 biến có kiểu sinhvien mà ko cần từ khoá struct
	sinhvien Sv1;
	return 0;
}
