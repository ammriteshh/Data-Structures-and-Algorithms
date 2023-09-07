//Set = everything is in sorted order and unique

#include<iostream>
#include<vector>
#include<set>
using namespace std;

void explainSet() {
    set<int>st;
    st.insert(1); //{1}
    st.emplace(2); //{1,2}
    st.insert(2); //{1,2}, unique so again 2 will not stored
    st.insert(4); //{1,2,4}
    st.insert(5); //{1,2,3,4}

    //{1,2,3,4,5}
    auto it = st.find(3); //iterator

    // {1,2,3,4,5}
    auto it = st.find(6); //returns "st.end()" because 6 is not in the List

    //{1,4,5}
    st.erase(5); //deletes 5

    int cnt = st.count(1); //if 1 is exist it gives '1' otherwise '0'

     //{1,2,3,4,5}
     auto it1 = st.find(2);
     auto it2 = st.find(4);
     st.erase(it1, it2); //deletes 2,3

}