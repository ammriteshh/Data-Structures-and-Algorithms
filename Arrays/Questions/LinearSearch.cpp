//search if a given number is present in the array or not. If it is not present then return -1 else return the index

//we have to find a number is exist in this array or not

#include<iostream>
using namespace std;

int main() {

    int array[]={3,9,18,11,7};
    int key=11; //we are finding 11

    int ans=-1 //if we cant find the number then ans will be -1

    for (int i=0;i<5;i++){
        if(array[i]==key){
            ans=i;
        }
    }

    cout<<ans<<endl;

    return 0;
}


