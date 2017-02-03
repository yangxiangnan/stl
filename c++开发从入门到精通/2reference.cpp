/*
1、c语言的参数传递
    按值传递：如果传递很大的数据项，复制数据将导致较长的执行时间（可以传递指针解决这个问题）
2、c++是更好的c（其实就是使用引用解决值传递的问题）
    值传递
    引用传递。避免大量数据的开销，提高性能
3、引用
    引用识别名
    在声明时必须初始化，在实际代码中主要用作函数的形式参数
    对饮用的改动就是对目标的改动
4、引用和指针的区别
    指针是变量，可以再赋值指向别处
    建立引用时必须初始化，不能更改引用对象
    指针也是变量，所以可以有指针变量的引用
5、Void 引用是不合法的
6、没有引用的指针和引用的引用
7、传递引用比传递参数指针有更清晰的语法

*/

#include<iostream>
using namespace std;

int main(){
    int One;
    int &rInt = One;
    rInt = 7;
    cout << One << endl;
    cout << &(One) << endl;
    cout << &(rInt) << endl;

//指针变量的引用
    int *a = NULL;
    int *&rpa = a;//rpa是指针变量的引用
    int b = 8;
    rpa = &b;
    cout << rpa << endl;//输出地址，
    cout << *rpa << endl;//8

//void 引用不合法·
    //void &a = 3;  void只是语法上相当于一个类型，本质上并不是一个类型。没有任何变量或对象，其类型为void
//不能建立引用的数组
/*
    int alist[10] = {0};
   int & ralist[10] = a； 
  */
    return 0;
}


//7、传递引用比传递参数指针有更清晰的语法

void swap(int &x, int &y);

void swap(int &x, int &y){//代码实现上几乎和原来一样
    int temp;
    temp = x;
    x = y;
    y = temp;
}


