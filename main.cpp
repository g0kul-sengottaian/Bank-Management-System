#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class bank
{
    char name[100],add[100],y;
    int balance ;
    public:
        void open_account();
        void deposite_money();
        void withdraw_money();
        void Display_account();

};
// scope resolution operator :: is
// used to define a function outside a class
void bank :: open_account()
{
    cout<<"Enter your full name :: " ;
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter your address :: " ;
    cin.ignore();
    cin.getline(add,100);
    cout<<"What type of account you need to open saving (s) or current (c) ";\
    cin>>y;
    cout<<"Enter amount for deposit :: ";
    cin>>balance ;
    cout<<"your account is created :"<<endl;
}

void bank :: deposite_money()
{
    int a ;
    cout<<"Enter how much you deposite ::";
    cin>>a;
    balance += a ;
    cout<<"total amount you deposite :: "<<balance ;
}
void bank :: Display_account()
{
    cout<<"your full name :: "<<name ;
    cout<<"your address"<<add;
    cout<<"type of account ::"<< y <<endl;
    cout<<"Amount you deposite ::"<<balance<<endl;

}
void bank :: withdraw_money()
{
    float amount ;
    cout<<"withdraw ::"<<endl;
    cout<<"enter the amount to withdraw ::";
    cin>>amount ;
    balance -= amount ;
    cout<<"Now the balance is ::"<< balance <<endl;
}



int main()
{
    int ch , x ;
    bank obj;
    do
    {
        cout<<"1) Open account"<<endl;
        cout<<"2) Deposite money"<<endl;
        cout<<"3) Withdraw money"<<endl;
        cout<<"4) Display account"<<endl;
        cout<<"5) Exit"<<endl;
        cout<<"Select the any option :: ";
        cin>>ch;
        switch(ch)
        {
            case 1 :
            cout<<"1) open account \n";
            obj.open_account();
            break ;

            case 2 : cout<<"2) Deposite money \n" ;
            obj.deposite_money();
            break ;

            case 3 : cout<<"3) withdraw_money \n" ;
            obj.withdraw_money();
            break ;

            case 4 : cout<<"4) Display account \n" ;
            obj.Display_account();
            break ;

            case 5 :
                if(ch == 5)
                {
                    exit(1);
                }
            default :
                cout<<"This is not exist try again \n" ;
        }
        cout<<"\n do you want to select next option then press :: y " <<endl;
        cout<<"if you want to exit then press  :: n "<<endl;
        x = getch();
        if(x == 'n' || x == 'N')
            exit(0);
    }
    while(x=='Y' || x == 'y');



    return 0;


}
