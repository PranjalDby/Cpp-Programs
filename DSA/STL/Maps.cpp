#include<iostream>
#include<map>
using namespace std;

int main() {
    cout << "Maps" << endl;
    // Maps are associative containers that store elements in a mapped fashion.
    // Each element has a key value and a mapped value.
    // No two mapped values can have the same key values.
    // time complexity of map is O(logn) because it is implemented using a balanced binary search tree.
    // unordered_map is implemented using a hash table so the time complexity is O(1).

    map<int,string> m;
    m[1] = "Pranjal";
    m[2] = "Dubey";
    m[3] = "Arun";
    m[4] = "Love";
    m[5] = "babbar";
    m.insert({6,"BHima"});
    cout << "Size of map: " << m.size() << endl;
    cout << "Element inside the map = " << endl;
    cout << "Before erase" << endl;
    for(auto &i:m) {
        cout << "Key = " << i.first << " Value = " << i.second << endl;
    }
    cout << "Finding key in map" << endl;
    cout << m.count(5) << endl;

    cout << "after erase" << endl;
    m.erase(4);
    for(auto &i:m) {
        cout << "Key = " << i.first << " Value = " << i.second << endl;
    }

    auto it = m.find(2);
    for(auto i = it;i!=m.end();++i) {
        cout << (*i).second << endl;
    }
}
