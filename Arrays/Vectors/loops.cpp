// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
    
//     vector<int> v;

//     //for loop
//     for(int i=0; i<5; i++);{
//     int element;
//     cin>>element;
//     v.push_back(element);
// }

// for(int i=0; i<v.size();  i++){
//     cout<<v[i]<<" ";
// }
// cout<<endl;


// //for each loop
// for(int ele:v){
//     cout<<ele<<" ";
// }
// cout<<endl;


// //while loop
// int idx=0;
// while(idx<v.size()){
//     cout<<v[idx++]<<" ";
// }

// return 0;
// }


#include<iostream>
using namespace std;

int main() {
    int i;
    int a[20];
    for(i=0;i<20;i++){
        cin>>a[i];
    }
    if(i%2==0){
        cout<<a[i]<<"\n"<<endl;
    }
    if(i%2!=0){
        cout<<a[i]<<"\n"<<endl;
    }
    for(i=0;i<20;i++){
        cout<<a[i]<<"\n"<<endl;
    }
    return 0;
}