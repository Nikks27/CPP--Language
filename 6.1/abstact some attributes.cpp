#include<iostream>
using namespace std;
static string comp_name = "MY COMPANY";
class Admin
{
	protected :
		int manager_salary = 45000,emp_salary = 10000,total_annual_revenue = 50000,total_staff = 50;
	
	public :
		void Access()
		{
			cout<<"Admin :"<<endl;
			cout<<"Company Name : "<<comp_name<<endl;
			cout<<"Total staff : "<<total_staff<<endl;
			cout<<"Manager Salary :"<<manager_salary<<endl;
			cout<<"Employee Salary :"<<emp_salary<<endl<<endl;
		}
};

class Manager : public Admin
{
	public :
		void Access()
		{
			cout<<"Manager :"<<endl;
			cout<<"Company Name : "<<comp_name<<endl;
			cout<<"Total staff : "<<total_staff<<endl;
			cout<<"Manager Salary :"<<manager_salary<<endl<<endl;
		}
};

class Employee : public Manager
{		
	public :
		void Access()
		{
			cout<<"Employee :"<<endl;
			cout<<"Company Name : "<<comp_name<<endl;
			cout<<"Total staff : "<<total_staff<<endl;
			cout<<"Employee Salary :"<<emp_salary<<endl;
		}
};

main()
{
	Admin a1;
	a1.Access();
	
	Manager m1; 
	m1.Access();
	
	Employee e1;
	e1.Access();
	
};
