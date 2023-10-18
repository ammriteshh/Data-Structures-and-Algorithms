#include<iostream>
using namespace std;

int main(){
    int num = 5;

    cout<<num<<endl;

    //address of operator = &

    cout<<"address of num is: "<<&num<<endl;

    int *ptr = &num;
    cout<<"Value is: "<<*ptr<<endl; //address of ptr
    cout<<"Value is: "<<ptr<<endl;  //value of ptr


    double d = 4.3;
    double *p2 = &d;

    cout<<"Value is: "<<p2<<endl; //address of ptr
    cout<<"Value is: "<<*p2<<endl;  //value of ptr

    cout<<"size of integer is: "<<sizeof(num)<<endl;
    cout<<"size of pointer is: "<<sizeof(ptr)<<endl;


    return 0;
}

// what is the need of POINTER? to store address
//int *ptr = &i;
//char *ptr = ptr is a pointer to char
//*ptr =4.2 