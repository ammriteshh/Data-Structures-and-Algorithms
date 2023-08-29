#include<iostream>
using namespace std;

bool CheckEligibility(int age, int limit) {
    if(age >= limit) {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int age;
    if(age >= 18){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}