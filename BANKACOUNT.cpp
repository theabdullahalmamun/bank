#include<iostream>
#include<string>
#include<math.h>
using namespace std;
class bank
{
  string name;
  double accno;
  public:
      void setname(string n)
      {
          name=n;
      }
      void setaccno(double a)
      {
          accno=a;
      }
      string getname()
      {
          return name;
      }
      double getaccno()
      {
          return accno;
      }
};
class savingacc:public bank
{

   double balance=1000;
   public:
 void setbalance(double b)
       {
           balance=b;
       }
    double getbalance()
    {
        return balance;
    }
    void interest(int money)
    {
        float sertax=2;
        balance=balance-sertax;

    }
    void withdraw()
    {
    int money;
    cout<<"PLEASE ENTER THE ANOUNT OF MONEY: ";
    cin>>money;
    if(balance-money>50){

        if(balance<1000)
        {
            cout<<"WE ARE IMPOSING PENALTY FOR LOW MINIMUM BALANCE"<<endl;
            int ply=50;
            balance=balance-(money+ply);
            interest(money);
            cout<<"CONGRATULATIONS SIR THE TRANSACTION IS SUCCESSFULLY DONE";}
        else{
            balance=balance-money;
            interest(money);
            cout<<"CONGRATULATIONS SIR THE TRANSACTION IS SUCCESSFULLY DONE";}

    }
    else
    {
        cout<<"WE ARE SORRY SIR THE TRANSACTION CAN NOT BE DONE"<<endl;
    }}

double deposit()
  {
    int taka;
cout<<"PLEASE ENTER THE ANOUNT OF MONEY: "<<endl;
cin>>taka;
balance=balance+taka;
}

void display()
{
    cout<<"\n\n YOUR BALANCE IS :"<<balance<<" "<<endl;
    cout<<"YOUR MINIMUM BALANCE IS : 1000\n\n"<<endl;
}


    };
    class corracc:public bank
    {
 protected:
    double deposit;
    double balance=2000;
 public:
    void setdeposit(double d)
    {
        deposit=d;
    }
    void setbalance(double b)
    {
        balance=b;
    }
    double getbalance()
    {
        return balance;
    }
    void cheque()
    {
        int money;
        string rname;
        cout<<"PLEASE ENTER THE NAME OF THE CHEQUE RECEIVER: "<<endl;
        cin>>rname;
        cout<<"PLEASE ENTER THE AMOUNT OF MONEY: "<<endl;
        cin>>money;
        if(balance-money>50)
        {
            if(balance==0)
        {
           cout<<"WE ARE SORRY SIR THE TRANSACTION CAN NOT BE DONE"<<endl;
        }
        else{
            balance=balance-money;
            cout<<"CONGRATULATIONS SIR THE TRANSACTION IS SUCCESSFULLY DONE"<<endl;
            cout<<endl;
        }
        }

        cout<<"CHEQUE RECEIVER NAME :"<<rname<<endl;
           cout<<"THE AMOUNT :"<<money<<endl;
           cout<<"YOUR BALANCE:"<<balance<<endl;
    }
        void deposit1()
        {
            int money ;
            cout<<"PLEASE ENTER THE AMOUNT OF MONEY: "<<endl;
            cin>>money;
            balance=balance+money;
        }
        void display2()
        {cout<<"\n\n YOUR CURRENT BALANCE IS:"<<balance<<endl;
        cout<<"YOUR BALANCE :2000\n\n"<<endl;
        }
        };
        class fixdeposit:public bank
        {
       protected:
        int money;
        int balance=5000;
        int MI;
       public:
           void set_balance(int b)
           {
               balance=b;
           }
           double get_balance()
           {
               return balance;
           }
        void fdeposit()
        {
            cout<<"PLEASE ENTER THE AMOUNT OF MONEY: "<<endl;
            cin>>money;
            balance=balance+money;
            cout<<"\n\n YOUR CURRENT BALANCE IS:"<<balance<<endl;
            cout<<"YOUR BALANCE :5000"<<endl;
        }
        void fix_interest()
        {double balance=1000;
          double interestrate=10,time;
          double MI;
          cout<<"PLASE ENTER THE REQUIRED TIME: "<<endl;
          cin>>time;
          MI=(balance*2*10);
          balance+=MI;
          cout<<"THE  MATURE INTEREST IS:"<<MI<<endl;
          cout<<"YOUR TOTAL BALANCE IS:"<<balance<<endl;
        }};
        class loan:public bank
        {
           protected:
                int wanted_money,time;
           public:
            void get_wanted_money()
            {
                cout<<"PLEASE ENTER THE MONEY FOR LOAN: "<<endl;
                cin>>wanted_money;
                cout<<"ENTER THE TIME: years"<<endl;
                cin>>time;
            }
            void per_month()
            {
                double m=12,k=0,amount=0;
                double pay;
                double i=10;
                k=time*i*m;
                pay=wanted_money+k;
                amount=pay/12;
                cout<<"YOUR TOTAL WILL BE = "<<pay<<endl;
                cout<<"YOU HAVE TO PAY THE AMOUNT  "<<amount<<" PER WITH 10% INTEREST ACCORDING THE RULES OF PER MONTHLY COMPOUNDING PROCESS"<<endl;
            }
            void two_month()
            {
                double m=12,i=10,k=0,pay,amount=0;
            k=time*m*i;
              pay=(wanted_money+k);
              amount=pay/6;
              cout<<"Your total will be = "<<pay<<endl;
                cout<<"YOU HAVE TO PAY THE AMOUNT  "<<amount<<" PER WITH 10% INTEREST ACCORDING THE RULES OF BI-MONTHLY COMPOUNDING PROCESS"<<endl;
            }
            void six_month()
            {
               double m=12;
                double pay,i=10,k=0,amount=0;
                k=time*m*i;
                pay=wanted_money+k;
                amount=pay/2;
                cout<<"Your total will be = "<<pay<<endl;

                cout<<"YOU HAVE TO PAY THE AMOUNT  "<<amount<<" PER WITH 10% INTEREST ACCORDING THE RULES OF SEMI-MONTHLY COMPOUNDING PROCESS"<<endl;
            }
        };


       int main()
{
     int choice;
     cout<<"                                                                                 *Welcome TO ONLINE BANKING  OF A.S.M BANK*                                         "<<endl;

     cout<<"                                                                                        *YOUR TRUST IS OUR PROFIT*                                                   "<<endl;
     cout<<"                                                        ---------------------------------------------------------------------------------------------------            "<<endl;
     cout<<"                                                           -------------------------------------------------------------------------------------------                 "<<endl;

     cout<<"TO RUN THE PROSSES YOU WILL HAVE TO FOLLOW SOME STEPS GIVEN BELLOW "<<endl;

     cout<<"ENTER YOUR CHOICE : "<<endl


       <<"1. FOR SAVINGS ACOUNT "<<endl
       <<"2. FOR CURRENT ACOUNT"<<endl
       <<"3. FOR FIXDEPOSIT"<<endl
       <<"4. FOR LOAN"<<endl
       <<"CHOICE:  ";
       cin>>choice;
       cout<<"\n\n\n";
       switch(choice)
       {
       case 1:
           {savingacc s1;
           string h;
           cout<<"PLEASE ENTER YOUR ACOUNT  NAME : ";
           cin>>h;
           s1.setname(h);
           double k;
           cout<<"PLEASE ENTER YOUR ACOUNT NUMBER: ";
           cin>>k;
           s1.setaccno(k);
           cout<<"\n\n THE ACOUNT HOLDER NAME IS :"<<s1.getname()<<endl;
           cout<<"THE ACOUNT NUMBER IS: "<<s1.getaccno()<<endl;
           cout<<"BALANCE:"<<s1.getbalance();
           do{

            cout<<"\n\n1.FOR DEPOSIT"<<endl
            <<"2.FOR WIDRAW MONEY"<<endl
            <<"3.EXIT"<<endl
            <<"ENTER YOU CHOICE HERE: ";
            cin>>choice;
            switch(choice)
            {
            case 1:
              s1.deposit();
               s1.display();
            break;

            case 2:
                s1.withdraw();
                s1.display();
                break;

           }}
           while(choice!=3);
           break;
           }

        case 2:{
            corracc c1;
            string h;
            cout<<"PLEASE ENTER YOUR ACOUNT  NAME : ";
            cin>>h;
            c1.setname(h);
            double k;
            cout<<"PLEASE ENTER YOUR ACOUNT NUMBER: ";
            cin>>k;
            c1.setaccno(k);
            cout<<"\n\n ACOUNT NAME IS :"<<c1.getname()<<endl;
            cout<<"ACOUNT NUMBER IS :"<<c1.getaccno()<<endl;
            cout<<"BALANCE IS :"<<c1.getbalance()<<endl;
            do{cout<<"\n\n1.DEPOSIT"<<endl
                <<"2.WITHDRW THROUGH CHEQUE"<<endl
                <<"3.EXIT"<<endl
                <<"PLEASE ENTER YOUR CHOICE : ";
            cin>>choice;
            switch(choice)
            {
            case 1:
                c1.deposit1();
                c1.display2();
                break;
            case 2:
                c1.cheque();
                break;

            }}
            while (choice!=3);
                break;
            }
            case 3:
                {
                   fixdeposit f1;
                   string h;
                   cout<<"PLEASE ENTER YOUR ACOUNT  NAME : ";
                   cin>>h;
                   f1.setname(h);
                   double k;
                   cout<<"PLEASE ENTER YOUR ACOUNT NUMBER: ";
                   cin>>k;
                   f1.setaccno(k);
                   cout<<"\n\n ACOUNT NAME IS:"<<f1.getname()<<endl;
                   cout<<"ACOUNT NUMBER IS:"<<f1.getaccno()<<endl;
                   cout<<"BALANCE:"<<f1.get_balance();
                   do{
                    cout<<"\n\n1.FOR DEPOSIT"<<endl
                    <<"2.GET BALANCE WITH THE MATURE INTEREST"<<endl
                    <<"3.EXIT"<<endl
                    <<"PLEASE ENTER YOUR CHOICE : ";
                    cin>>choice;
                    switch(choice)
                    {
                   case 1:
                    f1.fdeposit();
                    break;
                   case 2:
                    f1.fix_interest();
                    break;
                    }}
                    while(choice!=3);
                    }
                   case 4:
                    {
                        loan m1;
                        string h;
                        cout<<"PLEASE ENTER YOUR ACOUNT  NAME : ";
                        cin >>h;
                        m1.setname(h);
                        double k;
                        cout<<"PLEASE ENTER YOUR ACOUNT NUMBER: ";
                        cin>>k;
                        m1.setaccno(k);
                        cout<<"ACOUNT NAME IS:"<<m1.getname()<<endl;
                      cout<<"ACOUNT NUMBER IS:"<<m1.getaccno()<<endl;
                   do{
                    cout<<"\n\n1.FOR MONTHLY COMPOUNDING"<<endl
                    <<"2.FOR BI-MONTHLY COMPOUNDING "<<endl
                    <<"3.FOR  SEMI-MONTHLY COMPOUNDING"<<endl
                    <<"4.EXIT"<<endl
                    <<"PLEASE ENTER YOUR CHOICE : ";
                    cin>>choice;
                    switch(choice)
                    {
                   case 1:
                    m1.get_wanted_money();
                    m1.per_month();
                    break;
                   case 2:
                    m1.get_wanted_money();
                    m1.two_month();
                    break;
                   case 3:
                    m1.get_wanted_money();
                    m1.six_month();
                    break;
                    }}
                    while(choice!=3);
                    }}}

