#include <bits/stdc++.h>
using namespace std;
int factorial(int num){
    if(num==0){
        return 1;
    } else{
        return num*factorial(num-1);
    }
}
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"the factorial of the number "<<num<<" is:"<<factorial(num);
    return 0;
}