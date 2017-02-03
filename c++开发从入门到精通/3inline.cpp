/*
函数调用：
    建立栈内存环境
    参数传递
    程序执行转移
inline（类似于宏）
    有些函数频繁调用，但代码很短
    减少函数调用成本

    不能包含复杂的结构控制语句switch while for
    如包含则等同于函数调用
    递归函数不能用来做内联函数
*/

#include<iostream>
using namespace std;
inline bool isnumber(char c);

int main(){
    char c;
    while ((c= cin.get()) != 'q'){
        if (isnumber(c)){
            cout << "you enter a digit" << endl;
        }else{
            cout << "you enter a non-digit" << endl;
        }
    }
    return 0;
}

inline bool isnumber(char c){
    return ((c >='0') && (c <= '9'));
}