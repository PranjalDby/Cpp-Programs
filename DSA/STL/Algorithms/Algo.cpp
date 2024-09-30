#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(6);
    v.push_back(12);
    v.push_back(20);

    cout << "finding element = "<< binary_search(v.begin(),v.end(),10) << endl;;
    cout << "Lower bound = " << lower_bound(v.begin(),v.end(),3) - v.begin() << endl;
    cout << "Upper bound = " << upper_bound(v.begin(),v.end(),6) - v.begin() << endl;;

    //rotate
    rotate(v.begin(),v.begin()+2,v.end());
    for(auto i : v) {
        cout << i << endl;
    }

}
