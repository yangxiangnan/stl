#include<iostream>
using namespace std;
//g++ -o test helloworld.cpp  重命名
//命名空间

namespace ONE{
    int M = 200;
    int inf = 10;
}

namespace TWO{
    int x;
    int inf = 100;
}



int main(){
    cout << "hello world" << endl;

    using TWO::x;
    cout << x << endl;
    x = 100;

    ONE::inf *= 1;
    cout << ONE::inf<< endl;
    cout << ONE::M<< endl;

    TWO::inf *= 2;
    cout << TWO::inf<< endl;
    cout << x << endl;





    return 0;
}


