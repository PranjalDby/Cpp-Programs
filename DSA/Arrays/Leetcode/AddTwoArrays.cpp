#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main() {
    cout << "Add two arrays" << endl;
    vector<int>a = {4,5,1};vector<int>b = {3,4,5};

    // traversing in a and get the digit
    int a1 = 0;
    int p = a.size()-1;
    for(int i =0;i<a.size();i++) {
        a1 = a1 + a[i] * pow(10,p);
        p--;
    }
    cout << "digit a is = " << a1 <<endl;
    // traversing in a and get the digit
    int b1 = 0;
    int p2 = b.size()-1;
    for(int i =0;i<b.size();i++) {
        b1 = b1 + b[i] * pow(10,p2);
        p2--;
    }
    cout << "digit b = "<<b1 << endl;

    long long int s = 0;
    int add = a1+ b1;
    int t = add;
    while(t!=0) {
        s++;
        t/=10;
    }
    cout << "Size = " << s << endl;
    vector<int>res(s);
    while(add >= 0 and s>=0) {
        int re = add % 10;
        s--;
        res[s] = re;
        add /= 10;
    }
    for(auto i : res) {
        cout << i << endl;
    }

    for(int i = 0;i<1;i++) {
        for(int j = 1;j<10;j*=2) {
            cout << j << endl;;
        }
    }
}
