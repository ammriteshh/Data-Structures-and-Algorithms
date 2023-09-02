#include<iostream>
using namespace std;

int main() {
    int a=2;
    int *ptr;

    ptr=&a;
    cout<<"The Value of *ptr is "<<*ptr<<endl;

    int records[] = {47, 58, 63, 65, 77};
    
    cout<<"The value of first element is "<<*records<<endl;
    cout<<"The value of second element is "<<*(records+1)<<endl;
    cout<<"The value of third element is "<<*(records+2)<<endl;
    cout<<"The value of fourth element is "<<*(records+3)<<endl;
    cout<<"The value of fifth element is "<<*(records+4)<<endl;

    return 0;
}

//TYPES OF POINTERS

//DANGLING POINTER - pointer pointing to a memory location that has been deleted
//VOID POINTER - pointer that points to some data location in storage, which doesnt have any specific type
//NULL POINTER - pointer which is pointing to nothing
//WILD POINTER - pointer which has not been initialized to anything 
