//sum of the first natural numbers where n is the input

#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int sum=0;
    int i=1; //loop varuable
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}