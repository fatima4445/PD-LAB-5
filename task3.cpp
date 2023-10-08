#include<iostream>
using namespace std;
float tax(char code,float price)
{
 float final,tax;
 if(code=='M')
 {
  tax=(price*6)/100;
  final=price+tax;
 }
 else if (code=='E')
 {
   tax=(price*8)/100;
  final=price+tax;
 }
  else if (code=='S')
  {
  tax=(price*10)/100;
  final=price+tax;
 }
  else if (code=='V')
 {
   tax=(price*12)/100;
  final=price+tax;
 }
  else if (code=='T')
 {
   tax=(price*15)/100;
  final=price+tax;
 }
 return final;
}
main()
{
 char code;
 float price,result;
 cout<<" Enter vehical  type code(M,E,S,T,V):";
 cin>> code;
 cout<<" Enter the price of vehical:$";
 cin>> price;
 tax(code, price);
 result = tax(code, price);
 cout<<" Te final price of the vehical after adding tax is: "<< result;
}
  
 