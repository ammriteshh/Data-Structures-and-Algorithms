//sum of following series

#include<iostream>
using namespace std;

int main() {
    int result=0;
    int n, i;
    for(i=1;i<=n;i++) {
        if(i%2==0) {
            result-=i;
        }
        else{
            result+=i;  
        }
    }    
    cout<<result<<endl;
    return 0;
}
