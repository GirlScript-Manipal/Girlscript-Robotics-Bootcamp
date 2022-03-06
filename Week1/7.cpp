#include <bits/stdc++.h>
using namespace std;

int fibonacci(int num)
{
    if (num<=1){
        return num;
    }
    return fibonacci(num-1)+fibonacci(num-2);  
}

int main(){
    cout<<"The 40th term is:";
    int num=40;
    cout<<fibonacci(num);
    return 0;
}