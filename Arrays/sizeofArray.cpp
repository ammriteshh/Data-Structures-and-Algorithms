#include<iostream>
using namespace std;

int main() {
    int array[] = {1,2,3,4};

    cout<<sizeof(array)<<endl;  //size of array
    cout<<sizeof(array)/sizeof(array[0])<<endl;  //length of array

    return 0;
}