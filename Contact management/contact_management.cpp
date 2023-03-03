#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

class contact
{
    private:
       char fname[50], lname[50], address[50], email[50];
       long long phnum;
    public:
       void createContact() ; 
       void showContact() ;     
       void writeonFile() ;
       void readFromfile() ;
       void searchOnFile() ;
       void deleteFromfile() ;
       void editContact() ;
};
void contact :: createContact()
{
    cout<<"Enter your first name: ";
    cin>>fname;

    cout<<"Enter your last name: ";
    cin>>lname;

    cout<<"Enter your phone number: ";
    cin>>phnum;

    cout<<"Enter your address: ";
    cin>>address;

    cout<<"Enter your email: ";
    cin>>email;
}
void contact :: showContact()
{
    cout<<"Name: "<<fname<<" "<<lname<<endl;
    cout<<"Phone no.:"<<phnum<<endl;
    cout<<"Addresses: "<<address<<endl;
    cout<<"Email: "<<email<<endl;
}
void contact :: writeonFile()
{
   char ch;
   ofstream f1;
   f1.open("CMS.dat", ios::binary | ios::app);
   do
   {
      createContact();
      f1.write(reinterpret_cast<char*>(this), sizeof(*this));
      cout<<"Do you have next data?(y/n)";
      cin>>ch;
   }while (ch == 'y');
   cout<<"Contact has been sucessfully created...";
   f1.close();
}
void contact :: readFromfile()
{
    ifstream f2;
    f2.open("CMS.dat", ios::binary);
    cout<<"\n=========================================================\n";
    cout<<"LIST OF CONTACT";
    cout<<"\n=========================================================\n";
    while(!f2.eof())
    {
        if(f2.read(reinterpret_cast<char*>(this), sizeof(*this)))
        {
            showContact();
            cout<<"\n=========================================================\n";
        }
    }
    f2.close();
}
void contact :: searchOnFile()
{
    ifstream f3;
    long long phone;
    cout<<"Enter phone no.";
    cin>>phone;
    f3.open("CMS.dat", ios::binary);
    while (!f3.eof())
    {
        if(f3.read(reinterpret_cast<char*>(this), sizeof(*this)))
        {
            if (phone == phnum)
            {
                showContact();
                return;
            }
            
        }
        
    }
    cout<<"\n\nNo record found";
    f3.close();
}
void contact :: deleteFromfile()
{
    long long num;
    int flag = 0;
    ofstream f4;
    ifstream f5;
    f5.open("CMS.dat", ios::binary);
    f4.open("temp.dat", ios::binary);
    cout<<"Enter phone no. to delete: ";
    cin>>num;
    while(!f5.eof())
    {
        if(f5.read(reinterpret_cast<char*>(this),sizeof(*this)))
        {
            if(phnum != num)
            {
              f4.write(reinterpret_cast<char*>(this),sizeof(*this)); 
            }
            else
            {   
                flag = 1;
            }
        }
    }
    f5.close();
    f4.close();
    remove("CMSS.dat");
    rename("temp.dat","CMS.dat");
    flag ==1?
    cout<<endl<<endl<<"\tContact Deleted...":
    cout<<endl<<endl<<"\tContact Not Found...";
}
void contact :: editContact()
{
    long long phone;
    fstream f6;
    cout<<"Edit Contact";
    cout<<"\n=========================================================\n";
    cout<<"Enter the phone no. to be edit: ";
    cin>>phone;
    f6.open("CMS.dat", ios::binary|ios::out|ios::in);
    while(!f6.eof())
    {
        if(f6.read(reinterpret_cast<char*>(this), sizeof(*this)))
        {
            if(phone == phnum)
            {
                cout<<"Enter new record\n";
                createContact();
                int pos = -1*sizeof(*this);
                f6.seekp(pos, ios::cur);
                f6.write(reinterpret_cast<char*>(this), sizeof(*this));
                cout<<endl<<endl<<"\t contact successfully Updated...";
                return;
            }
            
        }
        
    }
    cout<<"\n\n No record found";
    f6.close();
}
int main()
{
    system("cls");
    system("Color 3F");// color XY x = backgroundcolor, y = text color
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t * WELCOME TO THE CONTACT MANAGEMENT SYSTEM *";
    getch();
    while (1)
    {
        contact c1;
        int choice;
        cout<<"\nCONTACT MANAGEMENT SYSTEM";
        cout<<"\n\nMAIN MENU";
        cout<<"\n=========================================================\n";
        cout<<"[1] Add a new Contact\n";
        cout<<"[2] List all Contact\n";
        cout<<"[3] Search for Contact\n";
        cout<<"[4] Delete a Contact\n";
        cout<<"[5] Edit a Contact\n";
        cout<<"[0] Exit";
        cout<<"\n=========================================================\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch (choice)
        {
            case 1:
                system("cls");
                c1.writeonFile();
                break;
        
            case 2:
                system("cls");
                c1.readFromfile();
                break;
        
            case 3:
                system("cls");
                c1.searchOnFile();
                break;
        
            case 4:
                system("cls");
                c1.deleteFromfile();
                break;
        
            case 5:
                system("cls");
                c1.editContact();
                break;
        
            case 0:
                system("cls");
                cout<<"\n\n\n\t\t\tThank you for using CMS."<<endl<<endl;
                exit(0);
                break;
        
            default:
                continue;
        }
        int opt;
        cout<<"\n\n..::Enter the choice:\n[1] Main Menu\t\t[0]Exit\n";
        cin>>opt;
        switch (opt)
        {
          case 0:
            system("cls");
            cout<<"\n\n\n\t\t\tThank you for using CMS."<<endl<<endl;
            exit(0);
            break;
          default:
            continue;
        }
    }
}
