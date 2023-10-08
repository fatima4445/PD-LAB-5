#include<iostream>
using namespace std;
float time(float hrs,float days,float num)
{
 float final,training,overtime;
 training =days*0.1;
 days=days-training;
 overtime=training*10;
 final=hrs-overtime;
 return final;
}
main()
{
 float hrs,days,num,result;
 cout<<" Enter the needed hours:";
 cin>> hrs;
 cout<<" Enter the days that the firm has:";
 cin>> days;
 cout<<" Enter the number of all workers:";
 cin>> num;
 time(hrs,days,num);
 result = time(hrs,days,num);
 cout<<result;
}