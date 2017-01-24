#include<iostream>
using namespace std;
int main(){
    string str("kdgfyads");
    // str并不能直接输出
    cout << str << endl;//重载输出运算符
    cout << str.c_str() << endl;//c_str返回str字符串的一个拷贝对象的首地址 char *类型
    cout << str[1] << endl;//不能越界 崩溃，能输出是重载了下标运算符
    cout << str.at(3) << endl;//越界不会崩溃，异常，可以trycatch


    try{
        cout << str.at(19) << endl;
    }catch(out_of_range& a){
        cout << "越界了" << endl;
    }
    return 0;
}