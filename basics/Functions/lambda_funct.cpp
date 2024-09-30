#include <iostream>
using namespace std;

int main()
{
    int x;
    /// here it takes reference of x and modifies its values.
    auto lamb = [&x](int p1) -> int
    {
        x = p1 * p1;
        return x;
    };
    cout << "square of no 4 = " << lamb(4) << endl;
    ;
    cout << "after modification = " << x;
    return 0;
}