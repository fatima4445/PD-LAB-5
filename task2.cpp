#include<iostream>
using namespace std;
void PyramidVolume(int lenght,int height,int width,string unit)
{
 float vol;
 vol = (lenght*height*width)/3;
 if(unit=="centimeters")
  {
   vol=vol*10000;
   cout<<" The volume of pyramid is:"<<vol <<" in cubic centimeters";
  }
 else if (unit == "meters")
  {
   cout<<" The volume of pyramid is:"<<vol <<"in cubic meters";
  }
  else if (unit == "millimeters")
  {
    vol =vol*1000000;
    cout<<" The volume of pyramid is:  "<<vol <<"in cubic";   
  }
  else if (unit == "kilometers")
  {
    vol=vol/1000000;
    cout<<" The volume of pyramid is:  " <<vol <<"in cubic kilometers"; 
  }  
}

main()
{
 int width,lenght,height;
 string unit;
 cout<<" Enter lenght of pyramid(in meters):";
 cin>> lenght;
 cout<<" Enter height of pyramid(in meters):";
 cin>> height;
 cout<<" Enter width of pyramid(in meters):";
 cin>> width;
 cout<<" Enter the desired output unit(millimeters,centimeters,meters,kilometers):";
 cin>> unit;
 PyramidVolume( lenght,height, width, unit);
 }
