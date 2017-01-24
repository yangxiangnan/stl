#include<iostream>
#include<string>//区别于string.h
using namespace std;

int main(){
//容量 capacity()、reserve()
/*
vs2005中至少申请15个容量，多余15个就每次增加16个容量
vc6.0 中至少申请31个空间，以后每次增加32个
不同编译器不同行为

22-31-47-63
*/
 
    string str; 
    cout << str.capacity() << endl;//22

    string str1(23,'a');
    cout << str1.capacity() << endl;//大于22为31
//reserve  使容量变大，不能使容量变小
    str1.reserve(32);//比31容量大
    cout << str1.capacity() << endl;//输出47

//length 字符串长度
    cout << str1.length() << endl;//23
//size();字符个数，同长度一样
    cout << str1.size() << endl;//23
//resize 重新设置字符个数 容量不变
    str1.resize(22);
    cout << "after resize " + str1 << endl;

    return 0;
}