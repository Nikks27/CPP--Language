#include<iostream>
using namespace std;
class Feet
{
   	int feet,inch;
	ibnt i;
   	void input()
   	{
     		cout << "enter the feet";
   	    	cin >> feet;
     		cout << "enter the inch";
   	  	cin >> inch;
   	
	   	for(i=0; i<=inch; i++)
		{
			if(i>=inch)
			{
				feet++;
				inch-=12;
			}
		}
   	}
	void out()
	{
		cout << "Feet : " << feet;
		cout << "Inch : " << inch;
	}
};
main()
{
	Feet n1;
	n1.input;
	n1.out;
}
