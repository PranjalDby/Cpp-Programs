#include <iostream>

using namespace std;

int main()
{
    // for loops
    int n;
    // cout << "Enter n = " << endl;
    // cin >> n;
    int i = 1;
    // for(;;i++){
    //     cout << i << endl;
    // } this becomes an infinite loop
    //for(;;) // this dangerous it becomes a wild loop without initia,cond,updation
    // for (;;)
    // {
    //     if (i <= n)
    //     {
    //         cout << i << endl;
    //         i++;
    //     }
    //     else{
    //         break;
    //     }
    // }

    // for loop with multiple variables
    int sum = 0;
    // for(int a = 1,b =0;a<=n;a++){
    //     b += a;
    //     cout << b << endl;
    // }
    
    //fibonacci series -iter f(n) = f(n-1) + f(n-2)
    long long int a = 0;
    long long int b = 1;
    // for(int i = 0; i<=n;i++){

    //     long long int nextNumber = a+b;
    //     if(i == 0){
    //         cout << a <<" "<< b << " ";
    //     }
    //     cout << nextNumber << " ";
    //     a = b;
    //     b = nextNumber;
    //     nextNumber = 0;
    // }
    // for (int i = 0; i<=5;i++){
    //     cout << i << "";
    //     i++;
    // }

    // Variable scoping -----------------------------------------------------------------------
    int ff = 4;
    // cout << ff << endl;

    // for(int ff = 0; ff < 10;ff++){
    //     cout << ff << endl;
    // }

    // operator precedence : we can shift the precedence by using paranthesis()

    int op = (2 * 4) / (2 + 5);
    // cout << op << endl;

    // leetcode::subtract the product and sum of the operator
    int num  = 4421;
    int prod = 1;
    int t = num;
    int sumN = 0;
    while(t != 0){
        int quo = t / 10;
        int rem = t % 10;
        t = quo;
        prod *= rem;
        sumN += rem;
    }

    // cout << prod-sumN << endl;

    int setBits = 0;
    num = 128;
    while(num != 0){
        if(num & 1){
            setBits += 1;
        }
        num = num >> 1;
    }
    cout << setBits << endl;
}