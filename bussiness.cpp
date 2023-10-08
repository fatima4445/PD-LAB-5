#include<iostream>
using namespace std;
string name1;
void information();
void header();
void menu();
main()
{
 
 header();
 menu();
 
 }
void header()
{
 cout<<"###########################################################################  "<<endl;
 cout<<"                       AIR PLANE MANAGEMENT SYSTEM                           "<<endl;   
 cout<<"###########################################################################  "<<endl;
}
 void information()
{
 string name,gender;
 int id;
 cout<<"\n enter your name:";
 cin>> name;
 cout<<"\n Enter your gender:";
 cin>> gender;
 cout<<"\n Enter your customer ID:";
 cin>>id;
 
}
 void menu()
{
 int choice,back;
 cout<<"  Press 1 to add the customre details:"<<endl;
 cout<<"  Press 2 for Flight registration:"<<endl;
 cout<<"  Press 3 for ticket and charges:"<<endl;
 cout<<"  Press 4 to exit :"<<endl;
 cin>> choice;
 switch(choice)
 {
  case 1:
   {
    cout<<" ______________Customers_______________  ";
    information();
    cout<<" Press any key to go back to main menu";
    cin>> back;
    if(back==0)
     main();
    else
     main();
    break;
   }
  case 2:
  {
   cout<<"_______Flight registration system________ "<<endl;

   cout<<" Press any key to go back to main menu";
   cin>> back;
    if(back==0)
     main();
    else
     main();
    break;
   }
  case 3:
  {
   cout<<"________Ticket and charges system_________ "<<endl;

   cout<<" Press any key to go back to main menu";
   cin>> back;
    if(back==0)
     main();
    else
     main();
    break;
   }
  case 4:
   {
    cout<<" ______________THANK YOU__________________"<<endl;
    break;
   }
  default:
  {
   cout<< "YOU HAVE ENTERED INVALID INPUT,PLEASE TRY AGAIN!";
  }

 }
}   
   
 
 
