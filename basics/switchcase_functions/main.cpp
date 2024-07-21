#include <iostream>
#include <math.h>
using namespace std;

//----------------------------------------- funtions ---------------------------------------------------------------------------------------------------------------------------

int power(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    return x * power(x, y - 1);
}
string evenOrOdd(int num)
{
    return (num & 1) ? "odd" : "Even";
}

int facts(int num)
{
    if (num == 1)
    {
        return 1;
    }
    if (num == 0)
    {
        return 0;
    }

    return num * facts(num - 1);
}

int ncr(int n, int r)
{

    if (n != 0 && r == 0)
    {
        return 1;
    }
    int n_fact = facts(n);
    int r_fact = facts(r);
    int n_r_fact = facts(n - r);

    return n_fact / (r_fact * n_r_fact);
};

void counting(int n)
{
    if (n == 0)
    {
        return;
    }
    counting(n - 1);
    cout << n << " ";
}

bool isPrime(int n, int r = 2)
{
    if (n == 0 || n == 1)
    {
        return false;
    }
    if (r == n)
    {
        return true;
    }
    if (n % r != 0)
    {
        return isPrime(n, r + 1);
    }
    return false;
}

// hw-file

int nThTerm(int n)
{
    int ap = (3 * n) + 7;
    return ap;
}

int nSetBit(int a, int b)
{
    if (a == 0 && b == 0)
    {
        return 0;
    }
    int result = ((a & 1) ? 1 : 0) + ((b & 1) ? 1 : 0) + nSetBit(a >> 1, b >> 1);

    return result;
}

int fibonacci(int n)
{   
    if (n == 0)
    {
        return 0;
    }
    if (n == 1){
        return 1;
    }
    int ans = fibonacci(n - 1) + fibonacci(n - 2);
    return ans;
}

int main()
{
    int num = 4;
    switch (num)
    {
    case 1:
        cout << "First";
        break;

    case 2:
        cout << "Second";
        break;

    default:
        cout << "It is default case" << endl;
    }

    // hw question complete
    while (true)
    {
        cout << "Infinite Loop ♾️" << endl;
        switch (true)
        {
        // case true: exit(0);// here we are terminating the current process and exits the program
        // or
        case true:
            goto a; // or use goto statement to jump out of the current block or execution loop
        }
    }
a:
    cout << "outside of Loop At a " << endl;

    /// calcclll

    int n[] = {0, 0};
    // cout << "Enter Numbers: " << endl;
    // cin >> n[0] >> n[1];

    cout << "first number = " << n[0] << " Second Number = " << n[1] << endl;

    // logic
    //  cout << "Operation: +,-,/,%,*: " << endl;
    //  char op;
    //  cin >> op;

    auto res = 0;
    // switch (op)
    // {
    //     case '+':
    //         res = n[0] + n[1];
    //         break;

    //     case '-':
    //         res = n[0] - n[1];
    //         break;

    //     case '/':
    //         res = n[0] / n[1];
    //         break;

    //     case '%':
    //         res = n[0] % n[1];
    //         break;
    //     case '*':
    //         res = n[0] * n[1];
    //         break;

    //     default:
    //         throw std::runtime_error("Operator Error");
    //         break;
    // }

    // cout << res << endl;

    // hw -no of notes
    int notes[] = {100, 50, 20, 1};
    int amount = 25569;
    res = 0;
    int result[] = {0, 0, 0, 0};
    // while(amount > 0){
    //     if(amount / notes[0] != 0){
    //         result[0] += amount / notes[0];
    //         res = amount - (result[0] * notes[0]);
    //     }
    //     else if(amount / notes[1] != 0){
    //         result[1] += amount / notes[1];
    //           cout << result[1] << endl;
    //         res = amount - (result[1] * notes[1]);
    //     }
    //     else if(amount / notes[2] != 0){
    //         result[2] += amount / notes[2];
    //         res = amount - (result[2] * notes[2]);
    //     }
    //     else if(amount / notes[3] != 0){
    //         result[3] += amount / notes[3];
    //         res = amount - (result[3] * notes[3]);
    //     }

    //     amount = res;
    // }

    // with switch
    int i = 0;
    res = 0;
    // while (i < sizeof(notes) / sizeof(notes[0]))
    // {
    //     switch (notes[i])
    //     {
    //     case 100:
    //         // for 100rs note
    //         result[0] += amount / notes[0];
    //         res = amount - (result[0] * notes[0]);
    //         break;

    //     case 50:
    //         // for 50 rs note
    //         result[1] += amount / notes[1];
    //         res = amount - (result[1] * notes[1]);
    //         break;

    //     case 20:
    //         // for 20 rs note
    //         result[2] += amount / notes[2];
    //         res = amount - (result[2] * notes[2]);
    //         break;

    //     case 1:
    //         // for 1 rs note
    //         result[3] += amount / notes[3];
    //         res = amount - (result[3] * notes[3]);
    //     }
    //     amount = res;
    //     i++;
    // }
    // for (int i = 0; i < sizeof(result) / sizeof(result[0]); i++)
    // {
    //     cout << result[i] << endl;
    // }

    // cout << "power of 6 ^ 4 = " << power(6, 4) << endl;

    // int l;
    // cin >> l;
    // cout << "isEvenorOdd = " << evenOrOdd(l) << endl;

    // cout << "ncr of 8c2 = " << ncr(8,2) << endl;

    // cout << "Counting" << endl;

    // counting(10);

    // cout << "isPrime" << endl;
    // int p;
    // cin >>p;
    // if(isPrime(p)){
    //     cout << "Prime No" << endl;
    // }
    // else{
    //     cout << "Not a prime No." <<endl;
    // }

    //---------------------------------------------------------------------
    cout << "COunt set Bit" << endl;
    cout << nSetBit(7, 5) << endl;

    // Fibonacci series
    cout << "Fibonacci Series" << endl;
    int rs = fibonacci(9);
    cout << rs << endl;

    int a = 0,b = 1;
    int t = 0;
    cin >> t;
    for(int i = 2; i<=t;i++){
        int res = a+b;
        a = b;
        b = res;
        cout << a << " ";
    }
    cout << "fibonnaci series = " << a << endl;
}