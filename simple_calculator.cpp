﻿/*
   **HƯỚNG DẪN SỬ DỤNG!!!**
   " + ": Phép cộng;  " - ": Phép trừ;   " * ": Phép nhân;   " / ": Phép chia;   " % ": Phép chia (Lấy phần dư);
   " ^n ": Lũy thừa bậc n;   " > ": Check xem a > b là True hay False;   " < ": Check xem a < b là True hay False;
   " == ": Check xem a có bằng b hay không (a == b là True hay False);
   **LƯU Ý: Những lệnh trên sau khi nhập input rồi toán tử vào thì nhập thêm input2 để thực hiện phép tính giữa
   input và input2**
    --- Còn những lệnh dưới đây chỉ cần nhập input thôi là đã có kết quả:
   " sqrt() ": Tính căn bậc 2 số học;   " ^2 ": Lũy thừa bậc 2;   " ^3 ": Lũy thừa bậc 3;
   " abs() ": Tìm giá trị lớn nhất của a;  " prime() ": Check xem a có phải là số nguyên tố hay không (ra kết quả True or False);   " = ": xóa bộ nhớ và in ra số đã nhập;
   **Code này chỉ có thể chạy được trên console của IDE nào đó hoặc trên console của
    Windows chứ không phải là application nên chỉ có thể thao tác nhập - xuất và không có GUI (giao diện người dùng)
    nên mong các bạn thông cảm :))**
    **LƯU Ý NHỎ: Nhập đúng những gì cần nhập; nhập số tương ứng theo từng phép tính như
    trên màn hình**
    VD: muốn tính giai thừa thì nhập fact() như trên màn hình
    Chúc các bạn sử dụng ứng dụng dui dẻ *\( ￣︶￣*\))
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define ld long double

// Hàm chính
#define calculator_main int main()

// Nhập, xuất, giới hạn lần sử dụng
#define in cin >>
#define out cout <<
#define USELIMIT for(int i = 1 ;i <= 100; i++)

// Tác vụ tính toán
#define Plus_task if(Operator == "1") {out  "Text second number: "; in  input2; output += (input + input2); out  "= " << output << '\n';}
#define Substract_task if(Operator == "2") {out  "Text second number: "; in  input2; output += (input - input2); out  "= " << output << '\n';}
#define Multiply_task if(Operator == "3") {out  "Text second number: "; in  input2; output += (input * input2); out  "= " << output << '\n';}
#define Divide_task if(Operator == "4") {out  "Text second number: "; in  input2; output += (input / input2); out  "= " << output << '\n';}
#define Modulo_task if(Operator == "5") {out  "Text second number: "; in  input2; output += ((lli)input % (lli)input2); out  "= " << output << '\n';}
#define SecondaryRoot_task if(Operator == "6") {output += sqrt(input); out  "= " << output << '\n';}
#define PowerOfTwo_task if(Operator == "7") {output += (input * input); out  "= " << output << '\n';}
#define PowerOfThree_task if(Operator == "8") {output += (pow(input, 3)); out  "= " << output << '\n';}
#define PowerOfN_task if(Operator == "9") {out  "Text second number: "; in  input2; output += pow(input, input2); out  "= " << output << '\n';}
#define Factorial_task if(Operator == "10") {output += factorial(input);out  "= " << output << '\n';}
#define Abs_task if(Operator == "11") {output += abs(input);out  "= " << output << '\n';}
#define PrimeCheck_task if(Operator == "12") {if(checkIsprime(input)) out  "True\n"; else out  "False\n";}
#define SmallerCheck_task if(Operator == "13") {out  "Text second number: "; in  input2; if(input < input2) out  "True\n"; else out  "False\n";}
#define GreaterCheck_task if(Operator == "14") {out  "Text second number: "; in  input2; if(input > input2) out  "True\n"; else out  "False\n";}
#define EqualCheck_task if(Operator == "15") {out  "Text second number: "; in  input2; if(input == input2) out  "True\n"; else out  "False\n";}
#define ReturnValue_task if(Operator == "16") {output = 0; output += input; out  "= " << output << '\n';}

// Điều kiện để giữ lại, xóa dữ liệu hoặc kết thúc chương trình
#define YesDetected (answer == "Yes") || (answer == "YES") || (answer == "yes") || (answer == "y") || (answer == "Y")
#define NoDetected (answer == "No") || (answer == "NO") || (answer == "no") || (answer == "n") || (answer == "N")
#define ExitDetected (answer == "exit") || (answer == "Exit") || (answer == "EXIT")
#define Clear {output = 0; out  "Memory sucessfully cleared!\n";}
#define notClear {output = output; out  "Memory hasn't cleared!\n";}

/*
    **CHÚ THÍCH: Tạo biến input là số thực 64-bit để nhập; input2 trong một
    số phép tính; output = 0 là kết quả đồng thời là bộ nhớ
    **Tạo xâu answer để nhập nếu hỏi có xóa dữ liệu hay không
    **Tạo xâu Operator để nhập toán tử (hoặc phép tính)
*/
ld input, input2, output = 0; 
string answer, Operator;

// Màn hình khởi động
void beginningScreen()
{
	out  "________________________________\n";
	out  "|       SIMPLE CALCULATOR      |\n";
	out  "________________________________\n\n";
}

// Màn hình tương tác
void Interact()
{
	// Yêu cầu nhập số, nhập số
	out  "Text a number: "; 
	in  input;         

		// Chọn toán tử hoặc phép tính bằng cách nhập số tương ứng
		out  "                   Choose an operator      \n";
		out  "|          1.  +                    9.  ^n             |\n";
		out  "|          2.  -                    10.  x!            |\n";
		out  "|          3.  *                    11.  abs()         |\n";
		out  "|          4.  /                    12.  prime()       |\n";           
		out  "|          5.  %                    13.  <             |\n";
		out  "|          6.  sqrt()               14.  >             |\n";
		out  "|          7.  ^2                   15.  ==            |\n";
		out  "|          8.  ^3                   16.  =             |\n";
}

// Hàm tính giai thừa input
ld factorial(ld n)                    
{
	ld t = 1;                         // Tạo biến t;
	for(int i = 1; i <= n; i++)       // Vòng lặp từ 1 tới n
	t *= i;                           // Nhân t với i
	return t;                         // Trả về kết quả t
}

// Hàm check số nguyên tố
bool checkIsprime(lli n) 
{
	if(n < 2) return false;             // Nếu n bé hơn 2 thì cút :)))   (đùa chứ trả về false hoặc 0)
	for(int i = 2; i <= sqrt(n) ; i++)  // Vòng lặp từ 2 tới căn bậc 2 của n
	if(n % i == 0) return false;        // Nếu n chia hết cho i thì trả về kq false (hoặc 0)
	return true;                        // Trả về true (hoặc 1)
}

// Màn hình kết thúc
void exit()
{
	// Nếu nhập exit thì in ra màn hình kết thúc
	out  "------------------------------------\n";
	out  "             END                  \n";      
	out  "     Thanks for supporting me  =D\n";
	out  "------------------------------------\n";
}

// Hàm chạy và kết thúc chương trình 
void RunAndEnd()
{
	// CHẠY CHƯƠNG TRÌNH 100 LẦN TỐI ĐA
	USELIMIT {          
	    
		// Màn hình tương tác
		Interact();

            // Nhập toán tử
            in  Operator;

				// Tác vụ tính toán
                Plus_task           /* Tính pt cộng */                PowerOfN_task      // Tính input mũ n
                Substract_task      /* Tính pt trừ */                 Factorial_task     // Tính giai thừa input
				Multiply_task       /* Tính pt nhân */                Abs_task           // Tính giá trị lớn nhất của input
                Divide_task         /* Tính pt chia */                PrimeCheck_task    // Check xem input có phải là số nguyên tố không
				Modulo_task         /* Tính dư phép chia */           SmallerCheck_task  // Check xem input có bé hơn input2 không
                SecondaryRoot_task  /* Tính căn bậc 2 của input */    GreaterCheck_task  // Check xem input có lớn hơn input2 không
				PowerOfTwo_task     /* Tính input mũ 2 */             EqualCheck_task    // Check xem input có bằng input2 không
                PowerOfThree_task   /* Tính input mũ 3 */             ReturnValue_task   // Xuất ra dữ liệu của output
			
			// Hỏi có xóa dữ liệu không
			out  "Clear Memory? [y/N] "; 
			
			in  answer;         
		
		// Điều kiện để giữ lại, xóa dữ liệu hoặc kết thúc chương trình 
		if(YesDetected) {
			Clear;
		}
		else if(NoDetected) {
			notClear;
		}
	    else if(ExitDetected) {
			exit(); 
			return;
		} 
	}	
}

// Cấu trúc chính
calculator_main     
{
	// Màn hình khởi động
	beginningScreen(); 

	// Chạy và kết thúc chương trình
    RunAndEnd();
	
    return 0;
}

/*
	CẢM ƠN VÌ ĐÃ ĐỌC HẾT CÁI ĐỐNG DÀI LOẰNG NGOẰNG NÀY (CÒN HIỂU HAY KHÔNG TÙY BẠN :]]]]]]]}
*/