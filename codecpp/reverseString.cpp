/*
Viết hàm void process(const char *str, char *outstr) đảo ngược các ký tự trong chuỗi. 

- Đầu vào:

Con trỏ char * đến ký tự đầu tiên của chuỗi

- Đầu ra:

Kết quả của bài toán được ghi vào chuỗi outstr

- Các thư viện có thể dùng: <iostream>, <cstring>

- Note: Sinh viên không được sử dụng các từ khoá sau trong đoạn code nộp bài, kể cả trong comment: "include", "string"

---------------------------------------

Implement void process(const char *str, char *outstr) function which reverses the string.

- Input:

Char * pointer to the first character of string

- Output:

The result is written to outstr

- Available library: <iostream>, <cstring>

- Note: Your code MUST NOT contain any of the words in the list {"include", "string"} even in the comment

*/

#include<iostream>
#include<cstring>
using namespace std;
void process(const char *str, char *outstr) {
    
            
    
}
int main(){
    char str[] = "this is my school" ;
    char *outstr = new char[strlen(str) + 1];
    process(str, outstr);
    cout << outstr;
}
//result belike: loohcs ym si siht