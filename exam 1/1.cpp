#include<iostream>
using namespace std;
class Hoursh
{
	public:
	int hh,mm,ss,a;
	int time()
	{
		cout<<"enter your value:";
		cin>>ss;
		hh = ss / 3600;
		ss =(ss % 3600);
		mm = (ss/60);
		ss =(ss%60);
		cout<< hh << " : "<< mm<< " : "<< ss;	
	}
};
main()
{
	class Hoursh f1;
	f1.time();
}
