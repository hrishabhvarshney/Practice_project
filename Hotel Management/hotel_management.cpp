#include<iostream>
using namespace std;
int main()
{
    int quant;
    int choice;
    //Quantity
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken_roll=0;
    //food item sold
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken_roll=0;
    //Total proce of item
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken_roll=0;
    
    cout<<"\n\t Quantity of item we have";
    cout<<"\n Rooms available:";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta:";
    cin>>Qpasta;
    cout<<"\n Quantity of burger:";
    cin>>Qburger;
    cout<<"\n Quantity of noodles:";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake:";
    cin>>Qshake;
    cout<<"\n Quantity of chicken_roll:";
    cin>>Qchicken_roll;
    m:
    cout<<"\n\t\t\t Please select from the menu options\n ";
    cout<<"\n1 Rooms ";
    cout<<"\n2 Pasta";
    cout<<"\n3 Burger";
    cout<<"\n4 Noodles";
    cout<<"\n5 Shakes";
    cout<<"\n6 Chicken_roll";
    cout<<"\n7 Information regarding sales and collection";
    cout<<"\n8 Exit";

    cout<<"\n\n Please enter your choice: ";
    cin>>choice;

    switch (choice)
    {
        case 1:
            cout<<"\n\n Enter the rooms you want: ";
            cin>>quant;
            if(Qrooms-Srooms >=quant)
            {
                Srooms=Srooms+quant;
                Total_rooms= Total_rooms+quant*1200;
                cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you!";
            }
            else
                cout<<"\n\tOnly"<<Qrooms-Qrooms<<"Rooms remaining in hotel";
                break;
        case 2:
            cout<<"\n\n Enter Pasta Quantity: ";
            cin>>quant;
            if(Qpasta-Spasta >=quant)
            {
                Spasta=Spasta+quant;
                Total_pasta= Total_pasta+quant*250;
                cout<<"\n\n\t\t"<<quant<<"Pasta is the Order!";
            }
            else
                cout<<"\n\tOnly"<<Qpasta-Spasta<<"Pasta remaining in hotel";
                break;
        case 3:
            cout<<"\n\n Enter burger Quantity: ";
            cin>>quant;
            if(Qburger-Sburger >=quant)
            {
                Sburger=Sburger+quant;
                Total_burger= Total_burger+quant*150;
                cout<<"\n\n\t\t"<<quant<<"Burger is the Order!";
            }
            else
                cout<<"\n\tOnly"<<Qburger-Sburger<<"Burger remaining in hotel";
                break;
        case 4:
            cout<<"\n\n Enter Noodles Quantity: ";
            cin>>quant;
            if(Qnoodles-Snoodles >=quant)
            {
                Snoodles=Snoodles+quant;
                Total_noodles= Total_noodles+quant*150;
                cout<<"\n\n\t\t"<<quant<<"Noodles is the Order!";
            }
            else
                cout<<"\n\tOnly"<<Qnoodles-Snoodles<<"Noodles remaining in hotel";
                break;
        case 5:
            cout<<"\n\n Enter Shakes Quantity: ";
            cin>>quant;
            if (Qshake-Sshake >=quant)
            {
                Sshake=Sshake+quant;
                Total_shake= Total_shake+quant*100;
                cout<<"\n\n\t\t"<<quant<<"Shakes is the Order!";
            }
            else
                cout<<"\n\tOnly"<<Qshake-Sshake<<"Shakes remaining in hotel";
                break;
        case 6:
            cout<<"\n\n Enter Chicken_roll Quantity: ";
            cin>>quant;
            if(Qchicken_roll-Schicken_roll >=quant)
            {
                Schicken_roll=Schicken_roll+quant;
                Total_chicken_roll= Total_chicken_roll+quant*500;
                cout<<"\n\n\t\t"<<quant<<"Chicken_roll is the Order!";
            }
            else
                cout<<"\n\tOnly"<<Qchicken_roll-Schicken_roll<<"Chicken_roll remaining in hotel";
                break;
        case 7:

            cout<<"\n\t\tDetails sales and collection ";
            cout<<"\n\n Number of rooms we gave for rent: "<<Srooms;
            cout<<"\n\n Number of rooms we had: "<<Qrooms;
            cout<<"\n\n Reamining rooms: "<<Qrooms-Srooms;
            cout<<"\n\n Total rooms collection for the day: "<<Total_rooms;

            cout<<"\n\n Number of pasta we had: "<<Qpasta;
            cout<<"\n\n Number of pasta we gave for rent: "<<Spasta;
            cout<<"\n\n Reamining pasta: "<<Qpasta-Spasta;
            cout<<"\n\n Total pasta collection for the day: "<<Total_pasta;

            cout<<"\n\n Number of burger we had: "<<Qburger;
            cout<<"\n\n Number of burger we gave for rent: "<<Sburger;
            cout<<"\n\n Reamining burger: "<<Qburger-Sburger;
            cout<<"\n\n Total burger collection for the day: "<<Total_burger;

            cout<<"\n\n Number of noodles we had: "<<Qnoodles;
            cout<<"\n\n Number of noodles we gave for rent: "<<Snoodles;
            cout<<"\n\n Reamining noodles: "<<Qnoodles-Snoodles;
            cout<<"\n\n Total noodles collection for the day: "<<Total_noodles;

            cout<<"\n\n Number of shake we had: "<<Qshake;
            cout<<"\n\n Number of shake we gave for rent: "<<Sshake;
            cout<<"\n\n Reamining shake: "<<Qshake-Sshake;
            cout<<"\n\n Total shake collection for the day: "<<Total_shake;

            cout<<"\n\n Number of chicken_roll we had: "<<Qchicken_roll;
            cout<<"\n\n Number of chicken_roll we gave for rent: "<<Schicken_roll;
            cout<<"\n\n Reamining chicken_roll: "<<Qchicken_roll-Schicken_roll;
            cout<<"\n\n Total chicken_roll collection for the day: "<<Total_chicken_roll;
        case 8:
                exit(0);
        default:
            cout<<"\n Please select the numbers mentioned above!";
                break;
    }
    goto m;
}