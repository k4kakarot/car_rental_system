#include<iostream>

#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>


#include<string>
using namespace std;

class location{
   public:
    int plocation;
    string address;
   void pickuplocation()
   {
        cout<<"enter pickup location:\nfor national institute of technology press 1\nfor airport press 2\nfor railway station press 3\n";
        cin>>plocation;
   }
};
class information{
          string name,licenceno,mobileno,email,address;
          int inp=0;
          public:
          void info(){
                cout<<"enter your personal information:\n";
                cout<<"full name:";
                getline(cin,name);
                getline(cin,name);
               while(inp==0){
                      cout<<"\nlicence number:";
                cin>>licenceno;
                      if(licenceno.size()==13)
                      {
                          licenceno=licenceno;
                          inp=1;
                      }
                      else{
                      cout<<"Entered licence number is not valid.Enter again."<<endl;
                }
                }
               
                 inp=0; 
                 while(inp==0){
                      cout<<"\nmobile number:";
                cin>>mobileno;
                      if(mobileno.size()==10)
                      {
                          mobileno=mobileno;
                          inp=1;
                      }
                
                else{
                      cout<<"Entered mobile number is not valid.Enter again."<<endl;
                }
                }
                 inp=0;
                 while(inp==0){
                       cout<<"\nemail id:";
                cin>>email;
                      if(email.find("@")!=string::npos)
                      {
                          email=email;
                          inp=1;
                      }
                
                else{
                      cout<<"Entered email is not valid.Enter again."<<endl;
                }
                }
                cout<<"\naddress:";
                getline(cin,address);
                getline(cin,address);
          }
          virtual void display()
          {
                  cout<<"\n              *personal detail*\n";
                  cout<<"full name:"<<name<<"\nlicence number:"<<licenceno<<"\nmobile number:"<<mobileno<<"\nemail id:"<<email<<"\naddress:"<<address<<"\n\n\n\n"<<endl;
          }
};

class airport{
    public:
     int c;
     void choice(){
         cout<<"enter car choice:"<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" [1]car=Swiftdesire                                                               "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=23.26kmplto24.12kmpl                      seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=5000(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [2]car=Verna                                                                     "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=21.33kmplto22.29kmpl                      seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=8000(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [3]car=Aura                                                                      "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=20.5kmpl                                  seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=5000(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [4]car=Santro                                                                    "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=20.3kmplto30.48kmpl                       seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=4500(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [5]car=Brezza                                                                    "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=17.03kmplto18.78kmpl                      seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=7000(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [6]car=Jimny                                                                     "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=14.37kmpl                                 seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=7800(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [7]car=Innova crysta                                                             "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=10.75kmplto15.23kmpl                      seating capacity=7to8seaters   "<<endl;
         cout<<" price for 150km=8000(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [8]car=Fortuner                                                                  "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=10.01kmplto14.75kmpl                      seating capacity=7 seaters     "<<endl;
         cout<<" price for 150km=9400(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [9]car=Triber                                                                    "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=20kmpl                                    seating capacity=7 seaters     "<<endl;
         cout<<" price for 150km=4700(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [10]car=Duster                                                                   "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=14.26kmpl                                 seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=6200(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [11]car=Tiguan                                                                   "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=16.65kmpl                                 seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=9000(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [12]car=Superb                                                                   "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=14.12kmplto18.19kmpl                      seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=9200(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [13]car=Nexon                                                                    "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=20.26kpl                                  seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=5500(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [14]car=Nano                                                                     "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=25.06kmpl                                 seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=2000(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cin>>c;
     }
};
class railwaystation{
        public:
     int c;
     void choice(){
        cout<<"enter car choice:"<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" [1]car=Swiftdesire                                                               "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=23.26kmplto24.12kmpl                      seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=5000(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [2]car=Verna                                                                     "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=21.33kmplto22.29kmpl                      seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=8000(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [3]car=Aura                                                                      "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=20.5kmpl                                  seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=5000(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [4]car=Santro                                                                    "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=20.3kmplto30.48kmpl                       seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=4500(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [5]car=Brezza                                                                    "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=17.03kmplto18.78kmpl                      seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=7000(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;    
         cout<<" [6]car=Innova crysta                                                             "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=10.75kmplto15.23kmpl                      seating capacity=7to8seaters   "<<endl;
         cout<<" price for 150km=8000(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [7]car=Fortuner                                                                  "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=10.01kmplto14.75kmpl                      seating capacity=7 seaters     "<<endl;
         cout<<" price for 150km=9400(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [8]car=Triber                                                                    "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=20kmpl                                    seating capacity=7 seaters     "<<endl;
         cout<<" price for 150km=4700(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [9]car=Duster                                                                    "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=14.26kmpl                                 seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=6200(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [10]car=Tiguan                                                                   "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=16.65kmpl                                 seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=9000(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [11]car=Superb                                                                   "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=14.12kmplto18.19kmpl                      seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=9200(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [12]car=Nexon                                                                    "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=20.26kpl                                  seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=5500(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [13]car=Nano                                                                     "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=25.06kmpl                                 seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=2000(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cin>>c;
     }
};
class nitt{
      public:
     int c;
     void choice(){
          cout<<"enter car choice:"<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" [1]car=Swiftdesire                                                               "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=23.26kmplto24.12kmpl                      seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=5000(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;    
         cout<<" [2]car=Aura                                                                      "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=20.5kmpl                                  seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=5000(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [3]car=Santro                                                                    "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=20.3kmplto30.48kmpl                       seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=4500(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;      
         cout<<" [4]car=Innova crysta                                                             "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=10.75kmplto15.23kmpl                      seating capacity=7to8seaters   "<<endl;
         cout<<" price for 150km=8000(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [5]car=Fortuner                                                                  "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=10.01kmplto14.75kmpl                      seating capacity=7 seaters     "<<endl;
         cout<<" price for 150km=9400(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [6]car=Triber                                                                    "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=20kmpl                                    seating capacity=7 seaters     "<<endl;
         cout<<" price for 150km=4700(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [7]car=Duster                                                                    "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=14.26kmpl                                 seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=6200(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;    
         cout<<" [8]car=Nexon                                                                     "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=20.26kpl                                  seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=5500(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;  
         cout<<" [9]car=Nano                                                                      "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cout<<" mileage=25.06kmpl                                 seating capacity=5 seaters     "<<endl;
         cout<<" price for 150km=2000(after 150km price/km=RS8/km)                                "<<endl;
         cout<<"__________________________________________________________________________________"<<endl;
         cin>>c;
     }
};
class swiftdesire:public location,public information
{
       long cost=0;
       int days;
       public:
       void calculatecost(int day){
            days=day;
            cost=5000*days;
       }
       void display(){
            cout<<"\n****************************************************************";
            cout<<"\n\n              *booked car*\n";
            cout<<"\ncar=swift desire"<<"\ndays="<<days<<"\ncost="<<cost<<endl;
       }
};
class verna:public location,public information
{
       long int cost;
       int days;
       public:
       void calculatecost(int day){
           days=day;
            cost=8000*days;
       }
       void display(){
             cout<<"\n****************************************************************";
             cout<<"\n\n              *booked car*\n";
            cout<<"\ncar=verna"<<"\ndays="<<days<<"\ncost="<<cost<<endl;
       }
};
class aura:public location,public information
{
       long int cost;
       int days;
       public:
       void calculatecost(int day){
            days=day;
            cost=5000*days;
       }
       void display(){
            cout<<"\n****************************************************************";
            cout<<"\n\n              *booked car*\n";
            cout<<"\ncar=aura"<<"\ndays="<<days<<"\ncost="<<cost<<endl;
       }
};
class santro:public location,public information
{
       long int cost;
       int days;
       public:
       void calculatecost(int day){
            days=day;
            cost=4500*days;
       }
       void display(){
            cout<<"\n****************************************************************";
            cout<<"\n\n              *booking information*\n";
            cout<<"\ncar=santro"<<"\ndays="<<days<<"\ncost="<<cost<<endl;
       }
};
class brezza:public location,public information
{
       long int cost;
       int days;
       public:
       void calculatecost(int day){
           days=day;
            cost=7000*days;
       }
       void display(){
            cout<<"\n****************************************************************";
            cout<<"\n\n              *booked car*\n";
            cout<<"\ncar=brezza"<<"\ndays="<<days<<"\ncost="<<cost<<endl;
       }
};
class jimny:public location,public information
{
       long int cost;
       int days;
       public:
       void calculatecost(int day){
            days=day;
            cost=7800*days;
       }
       void display(){
            cout<<"\n****************************************************************";
            cout<<"\n\n              *booked car*\n";
            cout<<"\ncar=jimny"<<"\ndays="<<days<<"\ncost="<<cost<<endl;
       }
};
class innovacrysta:public location,public information
{
       long int cost;
       int days;
       public:
       void calculatecost(int day){
            days=day;
            cost=8000*days;
       }
       void display(){
            cout<<"\n****************************************************************";
            cout<<"\n\n              *booked car*\n";
            cout<<"\ncar=innovacrysta"<<"\ndays="<<days<<"\ncost="<<cost<<endl;
       }
};
class fortuner:public location,public information
{
       long int cost;
       int days;
       public:
       void calculatecost(int day){
       	days=day;
            cost=9400*days;
       }
       void display(){
            cout<<"\n****************************************************************";
            cout<<"\n\n              *booked car*\n";
            cout<<"\ncar=fortuner"<<"\ndays="<<days<<"\ncost="<<cost<<endl;
       }
};
class triber:public location,public information
{
       long int cost;
       int days;
       public:
       void calculatecost(int day){
            days=day;
            cost=4700*days;
       }
       void display(){
            cout<<"\n****************************************************************";
            cout<<"\n\n              *booked car*\n";
            cout<<"\ncar=triber"<<"\ndays="<<days<<"\ncost="<<cost<<endl;
       }
};
class duster:public location,public information
{
       long int cost;
       int days;
       public:
       void calculatecost(int day){
            days=day;
            cost=6200*days;
       }
       void display(){
            cout<<"\n****************************************************************";
            cout<<"\n\n              *booked car*\n";
            cout<<"\ncar=duster"<<"\ndays="<<days<<"\ncost="<<cost<<endl;
       }
};
class tiguan:public location,public information
{
       long int cost;
       int days;
       public:
       void calculatecost(int day){
            days=day;
            cost=9000*days;
       }
       void display(){
            cout<<"\n****************************************************************";
            cout<<"\n\n              *booked car*\n";
            cout<<"\ncar=tiguan"<<"\ndays="<<days<<"\ncost="<<cost<<endl;
       }
};
class superb:public location,public information
{
       long int cost;
       int days;
       public:
       void calculatecost(int day){
           days=day;
            cost=9200*days;
       }
       void display(){
            cout<<"\n****************************************************************";
            cout<<"\n\n              *booked car*\n";
            cout<<"\ncar=superb"<<"\ndays="<<days<<"\ncost="<<cost<<endl;
       }
};
class nexon:public location,public information
{
       long int cost;
       int days;
       public:
       void calculatecost(int day){
            days=day;
            cost=5500*days;
       }
       void display(){
            cout<<"\n****************************************************************";
            cout<<"\n\n              *booked car*\n";
            cout<<"\ncar=nexon"<<"\ndays="<<days<<"\ncost="<<cost<<endl;
       }
};
class nano:public location,public information
{
       long int cost;
       int days;
       public:
       void calculatecost(int day){
            days=day;
            cost=2000*days;
       }
       void display(){
            cout<<"\n****************************************************************";
            cout<<"\n\n              *booked car*\n";
            cout<<"\ncar=nano"<<"\ndays="<<days<<"\ncost="<<cost<<endl;
       }
};
int main()
{
        location l;
        information a,*b;
        int ch;
        int days;
        l.pickuplocation();
        if(l.plocation==1||l.plocation==2||l.plocation==3)
        {
        cout<<"\nnumber of days:";
           cin>>days;
           }
        switch(l.plocation)
        {
              case 1:{nitt n;
                        n.choice();
                        ch=n.c;}
                        break;
              case 2:{airport a;
                           a.choice();
                           ch=a.c; }  
                           break;
              case 3:{railwaystation r;
                                  r.choice();
                                  ch=r.c;  }                          
                                  break;
              default:cout<<"\nsorry,we do not provide car from this pickup location.please try another pickup location near to you."<<endl;
                      return 0;
        }
            switch(ch)
            {
                   case 1:{swiftdesire v1;
                                   a.info();
                                   b=&v1;
                                    v1.calculatecost(days);
                                    b->display();
                                    b=&a;
                                    b->display();}
                                    break;
                   case 2:{verna v2;
                              a.info();
                              b=&v2;
                              v2.calculatecost(days);
                              b->display();
                              b=&a;
                              b->display();}
                              break;
                   case 3:{aura v3;
                             a.info();
                             b=&v3;
                             v3.calculatecost(days);
                             b->display();
                             b=&a;
                             b->display();}
                             break;
                   case 4:{santro v4;
                               a.info();
                               b=&v4;
                              v4.calculatecost(days);
                               b->display();
                               b=&a;
                               b->display();}
                               break;
                   case 5:{brezza v5;
                               a.info();
                               b=&v5;
                               v5.calculatecost(days);
                               b->display();
                               b=&a;
                               b->display();}
                               break;
                   case 6:{jimny v6;
                              a.info();
                              b=&v6;
                              v6.calculatecost(days);
                              b->display();
                              b=&a;
                              b->display();}
                              break;
                   case 7:{innovacrysta v7;
                                     a.info();
                                     b=&v7;
                                     v7.calculatecost(days);
                                     b->display();
                                     b=&a;
                                     b->display();}
                                     break;
                   case 8:{fortuner v8;
                                 a.info();
                                 b=&v8;
                                 v8.calculatecost(days);
                                 b->display();
                                 b=&a;
                                 b->display();}
                                 break;
                   case 9:{triber v9;
                               a.info();
                               b=&v9;
                               v9.calculatecost(days);
                               b->display();
                               b=&a;
                               b->display();}
                               break;
                   case 10:{duster v10;
                               a.info();
                               b=&v10;
                               v10.calculatecost(days);
                               b->display();
                               b=&a;
                               b->display();}
                                break;
                   case 11:{tiguan v11;
                               a.info();
                               b=&v11;
                               v11.calculatecost(days);
                               b->display();
                               b=&a;
                               b->display();}
                               break;
                   case 12:{superb v12;
                               a.info();
                               b=&v12;
                               v12.calculatecost(days);
                               b->display();
                               b=&a;
                               b->display();}
                               break;
                   case 13:{nexon v13;
                              a.info();
                              b=&v13;
                              v13.calculatecost(days);
                              b->display();
                              b=&a;
                              b->display();}
                              break;
                   case 14:{nano v14;
                             a.info();
                             b=&v14;
                             v14.calculatecost(days);
                             b->display();
                             b=&a;
                             b->display();}
                             break;
                   default:cout<<"\nthis car is not available.please try another choie";
            }
            
            		
        return 0;
}



