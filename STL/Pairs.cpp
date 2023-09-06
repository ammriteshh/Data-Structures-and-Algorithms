#include<iostream>
using namespace std;

void explainPairs() {
    pair<int, int> p = {1, 3};

    cout << p.first <<" " << p.second; //1 and 3

    pair<int, pair<int, int>> p = {1, {3, 4}};

    cout<< p.first << " " << p.second.second << " " << p.second.first;  //1 << 4 << 3

    pair<int, int> arr[] = { {1, 2}, {2, 5}, {5, 1}};

    cout << arr[1].second;  //5
}