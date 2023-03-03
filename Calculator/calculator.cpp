#include<iostream>
using namespace std;

int main()
{
    float a, b;
    char operation;
    cout<<" Enter first number: ";
    cin>>a;
    cout<<"Enter Operation (+, -, *, /): ";
    cin>>operation;
    cout<<" Enter second number: ";
    cin>>b;
    switch(operation)
    {
        case '+':
        cout<<"Result = "<<a+b;
        break;
        case '-':
        cout<<"Result = "<<a-b;
        break;
        case '*':
        cout<<"Result = "<<a*b;
        break;
        case '/':
        cout<<"Result = "<<a/b;
        break;
        default:
        cout<<"Invalid operatiion "<<endl;
    }
    return 0;
}