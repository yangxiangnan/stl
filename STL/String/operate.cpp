#include<iostream>
#include<string>
using namespace std;
int main(){

//比较
    //重载运算符
    string str("12123");
    string str1("122");
    cout << (str > str1) << endl;
    cout << (str < str1) << endl;
    cout << (str == str1) << endl;
    cout << (str <= str1) << endl;
    //compare 函数相等返回0 不等返回-1 
    cout << (str.compare(str1)) << endl;
    cout << (str.compare("234")) << endl;
    cout << (str.compare(2,2,str1)) << endl;

//复制：将string中某一段复制到一个字符数组中
    char strArr[6] = {0};
    str.copy(strArr,2,5);
    cout << strArr <<endl;

//查找字串,返回str中str1的位置，找不到返回-1
    cout << (int)str.find(str1,1) << endl;
    cout << str.substr(2,2) << endl;
//交换
    str.swap(str1);
    cout <<  str + " " + str1<< endl;







    return 0;
}