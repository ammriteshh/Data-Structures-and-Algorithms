//sum of digits in given num
//we use modulo operator

#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int sum=0;
    while(n>0) {
        int LastDigit = n%10; 
        sum += LastDigit; //to add last digit together 
        n/=10; //to cut 1 digit
        sum++;
    }
    cout<<sum<<endl;
}