#include <iostream>
using namespace std;

class Bank
{
    // This is the private memebers of the Bank class
    string AccountHolderName; //size of the string is taking is 24 bytes
    string Branch; 
    float balance;  //4 byte

     public:
    // getters for AccountHolderName
    string getAccountHolderName()
    {
        return AccountHolderName;
    };

    string getBranch()
    {
        return Branch;
    }

    float getbalance()
    {
        return balance;
    }

   
    // setters for branch
    void setBranch(string name, string b, float b1)
    {
        AccountHolderName = name;
        Branch = b;
        balance = b1;
    };

    // methods
    void deposit_money(float amount)
    {
        balance += amount;
        cout << "DepositedAmount : " << "$" << amount << endl;
        cout << "CurrentAmount : " << "$" << balance << endl;
    }

    // methods
    void withdraw_balance(float amount)
    {
        balance -= amount;
        cout << "TotalWithdrawnAmount : " << "$" << amount << endl;
        cout << "TotalBalance : " << "$" << balance << endl;
    }
};
int main()
{
    // creating the object of the Bank classes
    Bank p1;
    p1.setBranch("Mukund jha", "SBI", 19000.78);
    cout << "AccountHolderName : " << p1.getAccountHolderName() << endl;
    cout << "BranchName : " << p1.getBranch() << endl;
    cout << "Balance : " << p1.getbalance() << endl;
    cout<<"size of the objects will be : "<<sizeof(p1)<<endl;

    // methods
    p1.deposit_money(100.89);
    p1.withdraw_balance(10.90);

    return 0;
}