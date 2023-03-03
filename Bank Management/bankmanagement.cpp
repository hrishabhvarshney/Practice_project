#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class bank
{
    private:
        char name[100];
        char add[200];
        char y;
        int balance = 0;
    public:
        void open_account() ;
        void deposite_money() ;
        void Withdraw_money() ;
        void Display_account() ;
};
void bank::open_account()
{
    cout<<"Enter your full name: ";
    cin.ignore();
    cin.getline(name, 100);
    cout<<"Enter your Address: ";
    cin.ignore();
    cin.getline(add, 100);
    cout<<"What type of account you want to open saving (s) or current (c) ";
    cin>> y;
    cout<<"Enter amount for deposite: ";
    cin>> balance;
    cout<<"\n Your Account is created \n"<<endl;
}
void bank::deposite_money()
{
    int a;
    cout<<"Enter how much you deposite: ";
    cin>>a;
    balance = balance + a;
    cout<<"Total amount you deposite: \t"<< balance<<endl;

}
void bank :: Withdraw_money()
{
    float amount;
    cout<<"\n withdraw: \n";
    cout<<"Enter amount to withdraw: ";
    cin>>amount;
    balance -= amount;
    cout<<"Updated amount is equal to: "<< balance<<endl;
}
void bank :: Display_account()
{
    cout<<"\n Your full name: \t"<< name;
    cout<<"\n your address: \t"<< add;
    cout<<"\n Type of account you open: \t"<< y;
    cout<<"\n Initial amount you deposite: \t"<< balance<<endl;
}
int main()
{
    int ch;
    bank obj;
    char x;
    do
    {
        cout<<"1) open account: \n";
        cout<<"2) deposite money: \n";
        cout<<"3) Withdraw money: \n";
        cout<<"4) Display account: \n";
        cout<<"5) Exit: \n";
        cout<<"Select the option from above: \n";
        cin>> ch;
        switch(ch)
        {
            case 1:
            cout<< "1) open account \n";
            obj.open_account();
            break;
            case 2:
            cout<< "2) deposite money \n";
            obj.deposite_money();
            break;
            case 3:
            cout<< "3) withdraw money \n";
            obj.Withdraw_money();
            break;
            case 4:
            cout<< "4) Display account \n";
            obj.Display_account();
            break;
            case 5:
            if (ch ==5)
            {
                exit(1);
            }
            default:
            cout<<"\n This is not exist try again \n";
        }
        cout<<"\n do you want to select next option then press : y \n";
        cout<<"If you want to exit then press: N"<<endl;
        x = getch();
        if (x=='n' || x=='N')
        exit(0);
    }
    while (x == 'y' || x=='Y');
    getch();
    return 0;
}
