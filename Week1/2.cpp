#include <bits/stdc++.h>
using namespace std;
int main(){
    int mat1[3][3]={
        {1,1,1},
        {1,1,1},
        {1,1,1}
    };

    int mat2[3][3]={
        {2,2,2},
        {2,2,2},
        {2,2,2}
    };
    int mat3[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            int sum=0;
            for(int k=0; k<3; k++)
                sum = sum + (mat1[i][k] * mat2[k][j]);
            mat3[i][j] = sum;
        }
    }
    cout<<"\nMultiplication Result:\n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            cout<<mat3[i][j]<<"\t";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}