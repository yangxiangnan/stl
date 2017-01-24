#include<iostream>
using namespace std;
int main(){
    string str("kdgfyads");
    str[0] = 'a';
    str.at(1) = 'b';
    str.insert(2,"123"); 
    cout << str << endl;
    return 0;
}