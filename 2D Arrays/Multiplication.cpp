//Write a program to display multiplication of two matrices entered by the user.

#include<iostream>
using namespace std;

int main() {
    
    int r1,c2;
    cin>>r1>>c2;

    int A[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cin>>A[i][j];
        }
    }

    int r2,c1;
    cin>>r2>>c1;

    int B[r2][c1];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }

    if(c1!=r2){
        cout<<"Multiplcation Matrix is not Possible"<<endl;
    }

    //Answer Matrix
    int c[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int value=0;
            for(int k=0;k<r2;k++){  //traverse
                value+=A[i][k]*B[j][k];
            }
            c[i][j]=value;
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<c[i][j]<<" ";
        }
    }
    return 0;
}