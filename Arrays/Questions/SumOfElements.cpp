//calculate the sum of all elements in the given array

#include<iostream>
using namespace std;

int main() {
    int array[]={1,4,10,11};
    int size=sizeof(array)/sizeof(array[0]);

    int sum=0;
    for(int i=0; i<size;i++){
    sum+=array[i];
    }

    cout<<sum<<endl;

    return 0;
}