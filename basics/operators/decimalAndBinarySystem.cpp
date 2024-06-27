#include <iostream>
#include <math.h>
using namespace std;

int DtoB(int target)
{
    int i = 0;
    int ans = 0;
    while (target != 0)
    {
        int bit = target & 1;
        ans = (bit * pow(10, i)) + ans;
        target = target >> 1;
        i++;
    }
    return ans;
}

int btoD(int binary)
{

    int ans = 0;
    int i = 0;
    if (binary < 0)
    {
        binary *= -1;
        while (binary != 0)
        {
            int digit = binary % 10;
            if (digit != 0)
            {
                ans = pow(2, i) + ans;
            }
            binary = binary / 10; // dividing by ten because we don't need the next bit, we need the next digit
            i++;
        }
        return ans * -1;
    }
    else
    {
        i = 0;
        while (binary != 0)
        {
            int bit = binary & 1;
            if (bit != 0)
            {
                ans = (bit * pow(2, i)) + ans;
            }
            binary = binary / 10;
            i++;
        }
    }
    return ans;
}
int main()
{
    int n = 10000;
    // while (n != 0)
    // {
    //     int bit = n & 1;
    //     cout << bit << " ";

    //     n = n >> 1;
    // }

    // Using second approach or place-value approach

    // int p = 0;
    // long long int ans = 0;

    // while(n!=0){
    //     long int bit = n & 1;
    //     ans = pow(10,p) * bit + ans;
    //     p++;
    //     n = n >> 1;
    // }

    // cout << ans << endl;

    // digit-reversal
    n = 677;
    ans = 0;
    p = 0;
    while(n!=0){
        int digit = n % 10;
        ans = ans * 10 + digit
        n /= 10;
    }
    cout << (ans);

    // Converting a -ve no to its binary form

    cin >> n;
    int ans = 0;
    if (n < 0)
    {
        n = n * (-1);
        ans = DtoB(n);
        // 1's complement
        cout << ans << endl;
        ans = (~ans);
        // 2's complement
        ans = ans + 1;
        cout << "ans after 2's complement = " << ans << endl;
        int binaryToDec = btoD(ans);
        cout << "binary to dec " << binaryToDec << endl;
    }
    else
    {
        ans = DtoB(n);
        ans = (~ans); // 1's
        ans += 1;     // 2's
        cout << "Decimal to B" << ans << endl;
        cout << "+ve btoD " << btoD(n);
    }
}