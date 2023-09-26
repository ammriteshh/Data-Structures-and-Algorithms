#include<iostream>
using namespace std;

class Rectangle{
public:
    int l;
    int b;

    Rectangle(){ //default - no arrguments passed
        l=0;
        b=0;
    }

    Rectangle(int x, int y){  //parameterised - arguments passed
        l=x;
        b=y;
    }

    Rectangle(Rectangle& r){  //copy - initialize an obj by existing object
        l = r.l;
        b = r.b;
    }

     ~Rectangle() {  //destructor
        cout<<"Destructor is called"<<endl;;
     }
};

int main() {

    Rectangle* r1 = new Rectangle();
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1; 

    Rectangle r2(3, 4);
    cout<<r2.l<<" "<<r2.b<<endl;

    Rectangle r3 = r2;
    cout<<r3.l<<" "<<r3.b<<endl;

    return 0;
}

//here r1 first deleted, so after 1st one destructor is called and then other 2 destructor will called