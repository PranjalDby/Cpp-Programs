#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    cout <<
            "...............................Lambda Expressions..........................................................................................."
            << endl;

    /*
     * -------------------------------- Syntax -----------------------------------------------------
     * capture (parameters)->(optional)return_type{
     * // function-body
     * }
     * capture = [] empty-capture:doesn't capture any variable from its enclosing scope.
     * capture = [&] reference capture:capture the variable by its reference.
     * capture = [=] capture by value
     */
    //Capture the variables using different ways
    vector<int> v1 = {10, 21, 20, 32};
    vector<int> v2 = {-1, 3, 11, 7};

    //access v1 and v2 using reference
    auto lambda = [&v1,&v2]()-> void {
        cout << "Elements of vector v1 = " << endl;
        for (auto i: v1) {
            cout << i << endl;
        }
        cout << "Elements of vector v2 = " << endl;
        for (auto j: v2) {
            cout << j << endl;
        }
    };
    lambda();

    // is changing the value of vector inside the lambda expression change the value of actual vector?.
    // yes it update the vector
    auto update_vect = [&v1](int size, int element) {
        cout << "Updating Vector" << endl;
        v1.push_back(element);
    };
    update_vect(v1.size(), 255);
    lambda();

    // --------------------------------------- Accessing vector v1 by copy -------------------------------------
    auto copyV1 = [v1]() {
        cout << "Accessing vector by copy = " << endl;
        for (auto i: v1) {
            cout << i << endl;
        }
    };
    copyV1();

    //find first number greater than n in v2
    int n = 5;
    auto firstN = find_if(v2.begin(), v2.end(), [n](int i)-> bool {
        return i > n;
    });
    cout <<"First element in vector v2 greater than N = "<< *firstN << endl;

    //function to count the numbers in v2 greater than or equal to n
    int count = count_if(v2.begin(),v2.end(),[n](int i)->bool {
        return  i>=n;
    });
    cout << "No of elements greater than n in vector v2 = " << count << endl;

}
