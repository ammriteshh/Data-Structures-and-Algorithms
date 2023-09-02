#include<iostream>
using namespace std;

int main() {
   int arr[] = {10, 20, 30, 40, 50};
   int *ptr = arr;
    int **pptr = &ptr;
    int result = *(*pptr + 2);
    cout<<result;
return 0;
}