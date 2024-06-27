#include <iostream>

using namespace std;

void hiddingNamesEx()
{
    // printing Hidding Names
    int i = 0;
    cout << "i = " << i << "\n";
    {
        // enclosed scope
        int i = 7, j = 9;
        cout << "i = " << i << "\n"
             << "j = " << j << "\n";
    };
    cout << "i = " << i << "\n";
    return;
}
// hidding class names

class Accounts
{
public:
    Accounts(double initialBalance)
    {
        balance = initialBalance;
    }
    double GetBalance()
    {
        return balance;
    }

private:
    double balance;
};
double Accounts = 15.36; //Hides the class name Account

// Hidding names with global scope

int i = 7; // i has global scope, outside all blocks

// Declare and define int variable i and j.

int k;
int j = 10;

// Declare enumeration suits.
enum suits {spades = 1,clubs,hearts,diamonds};
typedef std::basic_string<char> sstring;
int main()
{
    // hiddingNamesEx();
    class Accounts Checking(Accounts); // Qualifies Account as class  name
    
    cout << "Opening account with a balance of: "
        << Checking.GetBalance() << "\n";

    int i = 5; // i has block-scoped, hides i at global scope

    cout << "Block-scoped i has the value: " << i << "\n"; // access the local scope i
    cout << "Global-scoped i has the value: " << ::i << "\n"; // access the global i


}