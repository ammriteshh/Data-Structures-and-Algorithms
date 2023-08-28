//first n  factorial 

#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int factorial=1;
    for(int i=1;i<=n;i++) {
        factorial*=1;
        cout<<factorial<<endl;
    }
    return 0;
}