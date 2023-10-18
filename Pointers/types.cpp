// 1. NULL POINTER= a pointer that is pointing to nothing
int *p; //garbage value
int *p = NULL; //NULL is constant with value zero
int *q = 0; //same as above


//2. DOUBLE POINTER = 1st pointer is used to store the address of the var. and the 2nd pointer is used to store the addresss of 1st pointer.

int a = 10;
int *p = &a;
int **q = &p;

//3. VOID POINTER = can hold an address of any type and can be typecasted to any type.

void ptr;
int i =10;
ptr=&i;
cout<<"Address of variable i "<<&i<<endl;
cout<<"Address where the void pointer is pointing "<<ptr<<endl;

//4. WILD POINTER = they point to any random memory location

int *ptr; //wild pointer

//5. DANGLING POINTER = pointer pointing to a memory that has been freed/deleted.
//a) FUNCTION CALL(when local variable is not static)
//B) DEALLOCATION OF MEMORY(deallocating a memory pointed by a pointer)
//C) VARIABLE GOES OUT OF SCOPE(when a pointer goes to out of scope where it is valid)