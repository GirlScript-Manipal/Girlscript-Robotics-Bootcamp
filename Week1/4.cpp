#include <bits/stdc++.h>
using namespace std;
void octal(int num){
     int octalnum[100];
    int i = 0;
    while (num != 0) {
        octalnum[i] = num % 8;
        num = num / 8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << octalnum[j];
}
void hexadecimal(int num){
    char hexanum[100];
    int i=0;
    while (num != 0) {
        int temp = 0;
        temp = num % 16;
        if (temp < 10) {
            hexanum[i] = temp + 48;
            i++;
        }
        else {
            hexanum[i] = temp + 55;
            i++;
        }
 
        n = n / 16;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << hexanum[j];
}

void binary(int num){
    int binarynum[64];
    int i=0;
    while (num>0){
        binarynum[i]=num%2;
        num=num/2;
        i++;
    }
    cout<<"The binary form of this number is: ";
    for(int j=i-1;j>=0;j--){
        cout<<binarynum[j];
    }
}
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    binary(num);
    hexadecimal(num);
    octal(num);
}