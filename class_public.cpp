#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// CLASS DEFINITION: THIS IS A BLUEPRINT FOR ALL OBJECTS
class BankAccount
{
    /************************************************************************
     * PRIVATE ACCESS SPECIFIER                                             *
     * VARIABLES BELOW CAN ONLY BE ACCESSED BY CLASS                        *
     ************************************************************************/
private:
    // VARIABLE DECLARATION
    double salary;

    /************************************************************************
     * PUBLIC ACCESS SPECIFIER                                              *
     * VARIABLES BELOW CAN BE ACCESS OUTSIDE OF THIS CLASS                  *
     ************************************************************************/
public:
    // VARIABLE DECLARATION
    string name;
    double balance;

    // FUNCTION WITHDRAW
    void withdraw(double amount)
    {                              // CALCULATE NEW BALANCE
        salary = balance - amount; // PRIVATE MEMBER(SALARY) IS USED
    }

    // FUNCTION PRINT
    void print() const
    { // COUT INFORMATION: PRIVATE MEMBER(SALARY) IS USED
        cout << name << " has " << salary << " dollars." << endl;
    }
};

int main()
{
    BankAccount account1;
    account1.name = "Diosa Sugar";
    account1.balance = 1000.00;
    account1.withdraw(0);
    account1.print();

    BankAccount account2;
    account2.name = "Mini Vann";
    account2.balance = 1500.00;
    account2.withdraw(1000);

    account2.print();

    return 0;
}