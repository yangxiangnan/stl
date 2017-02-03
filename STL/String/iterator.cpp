#include<iostream>
using namespace std;
int main(){
    string str("123456");
    string::iterator ite;//char *指针
    ite = str.begin();
    for(int a = 0 ; a< str.size() ; a++){
        // cout << *ite << " ";
        // ite++;
        cout << ite[a] << " ";
    }
    
    return 0;
}