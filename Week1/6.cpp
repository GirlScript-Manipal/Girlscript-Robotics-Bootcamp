#include <bits/stdc++.h>
using namespace std;
void copy(string str){
    string *p=&str;
    string copied=*p;
    cout<<"The string was successfully copied";
}
int main() {
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    copy(str);
    return 0;
}