#include<iostream>

using namespace std;
int main()
{
    int a,hh,mm,ss,ans;
    
    cout<<" enter the a:";
    cin>>a;
    
   mm=(a%3600)/60;
   hh=a/3600;
   a=mm*60;
   
   cout<<hh <<":" << mm  <<":" <<a;
    
 }

