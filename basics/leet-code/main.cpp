#include <iostream>
#include <math.h>
using namespace std;

int complement(int b)
{
    int ans = 0;
    while (b != 0)
    {
        ans = (ans << 1) | 1;
        b = b >> 1;
    }
    cout << ans << endl;
    return ans;
}

int main()
{
    // reverse-integer
    int n;
    cout << "enter the number = " << endl;
    cin >> n;

    // int ans = 0;
    // if (n < 0){
    //     n *= -1;
    //     while(n!=0){
    //         int digit = n % 10;
    //         ans = ans * 10 + digit;
    //         n /= 10;
    //     }
    //     ans *= -1;
    // }
    // else{
    //      while(n!=0){
    //         int digit = n % 10;
    //         ans = ans * 10 + digit;
    //         n /= 10;
    //     }
    // }

    // n = binary(n);
    // cout << "Dec rep of " << n << " is " << binaryToDec(n);

    // cout << (complement(n) & (~n));

    // Question 2 : power of 2

    int p = 0;
    bool flag = false;
    while(p < n){
        if(pow(2,p) == n){
            flag = true;
        }
        p++;
    }

    cout << "is Power of 2 " << "for n = " << n << " " << flag << endl;
}