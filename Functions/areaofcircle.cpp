#include<iostream>
using namespace std;

double area(int r) {
    return 3.14 * r * r;
    }
double circumference(int r) {
    return 2 * 3.14 *r;
}
int main() {
    double r=3;
    cout<<area(r)<<" "<<circumference(r)<<endl;
    return 0;
}  