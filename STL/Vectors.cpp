#include<iostream>
#include<vector>
using namespace std;

void explainVector() {

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>>vec;

    v.push_back({1, 2});  //insert
    v.emplace_back(1, 2);  

    vector<int> v(5, 100); //{100,100,100,100,100}

    vector<int> v(5);

    vector<int> v1(5, 20);  //{20,20,20,20,20}
    vector<int> v2(v1); //copy of upper line

    
    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << " ";
}