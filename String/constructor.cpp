#include<iostream>
#include<string>//区别于string.h
using namespace std;

int main(){
//无参数构造函数
    string str;
    cout << str << str.empty() << endl;//string 这类一定是重载了cout（输出运算符）、不然不能输出类
//带参数 
    string str1(5,'a');
    cout << str1 << endl;
    
    string str2("123456");
    cout << str2 << str2.empty() << endl;

    //使用指定字符串指定长度初始化
    string str3("123456789",10);
    cout << str3 << endl;

    string str4("123456789",2,5);
    cout << str4 << endl;
    
    //拷贝构造
    string str5(str2);
    cout << "str5 " +  str5 << endl;

    
    
    
    return 0;
}