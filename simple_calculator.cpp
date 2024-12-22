#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ld long double
#define during while
#define IncorrectOperator (Operator > "16") || (Operator < "1")

// Hàm chính
#define calculator_main int main()

// Nhập, xuất, giới hạn lần sử dụng
#define in cin >>
#define out cout <<

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
	// Yêu cầu nhập số
	out  "Text a number: "; 
	in  input;         

	during(true) {
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
		in  Operator;
		if(IncorrectOperator) 
			cout << "Try again!\n";
		else break;
	}
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
void exitCatalog()
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
	// CHẠY CHƯƠNG TRÌNH ĐẾN KHI NÀO YÊU CẦU DỪNG
	during(true) {          
	    
		// Màn hình tương tác
		Interact();

			// Tác vụ tính toán
			Plus_task           /* Tính pt cộng */                PowerOfN_task      // Tính input mũ n
			Substract_task      /* Tính pt trừ */                 Factorial_task     // Tính giai thừa input
			Multiply_task       /* Tính pt nhân */                Abs_task           // Tính giá trị lớn nhất của input
			Divide_task         /* Tính pt chia */                PrimeCheck_task    // Check xem input có phải là số nguyên tố không
			Modulo_task         /* Tính dư phép chia */           SmallerCheck_task  // Check xem input có bé hơn input2 không
			SecondaryRoot_task  /* Tính căn bậc 2 của input */    GreaterCheck_task  // Check xem input có lớn hơn input2 không
			PowerOfTwo_task     /* Tính input mũ 2 */             EqualCheck_task    // Check xem input có bằng input2 không
			PowerOfThree_task   /* Tính input mũ 3 */             ReturnValue_task   // Xuất ra dữ liệu của output
		
		during(true) {
			// Hỏi có xóa dữ liệu không
			out  "Clear Memory? [y/N] "; 
			in  answer;         
		
			// Điều kiện để giữ lại, xóa dữ liệu hoặc kết thúc chương trình 
			if(YesDetected) {
				Clear;
				break;
			}
			else if(NoDetected) {
				notClear;
				break;
			}
			else if(ExitDetected) {
				exitCatalog(); 
				return;
			}
			else	
				cout << "Try again!\n";
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
