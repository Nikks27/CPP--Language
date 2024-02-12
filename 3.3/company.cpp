#include<iostream>
#include<string.h>
using namespace std;

class Company
{
	int comp_id,cafe_rating,comp_staff_quantity,comp_revenue,comp_import_raw_diamonds,comp_export_diamonds;
	string comp_name,comp_ceo;

	public :

	Company()
	{
		cout << "kiran diamonds" << endl;
		cout << "Rabari Naresh" << endl;
	}
	void set()
	{
		cout << "Enter the comp_id : ";
		cin >> comp_id;
		cin.ignore();
		
		cout << "Enter the comp_staff_quantity : ";
		cin >> comp_staff_quantity;
		cin.ignore();
		
		cout << "Enter the comp_revenue : ";
		cin >> comp_revenue;
		cin.ignore();
			
		cout << "Enter the comp_import_raw_diamonds : ";
		cin >> comp_import_raw_diamonds;
		cin.ignore();
		
		cout << "Enter the comp_export_diamonds : ";
		cin >> comp_export_diamonds;
		cin.ignore();
		
		cout << endl << endl;
	}	
	
	void get()
	{
		cout << "company ID: " << comp_id << endl;
		cout << "comp_staff_quantity: " << comp_staff_quantity << endl;
		cout << "comp_revenue : " << comp_revenue << endl;
		cout << "comp_import_raw_diamonds: " << comp_import_raw_diamonds << endl;
		cout << "comp_export_diamonds: " << comp_export_diamonds << endl;
	}
};

int main()
{
	int n;
	cout << "Enter the company information  : ";
	cin >> n;
	
	Company diamonds[n];
	
	int i;
	
	for(i=0; i<n; i++)
	{
		diamonds[i].set();
	}
	for(i=0; i<n; i++)
	{
		diamonds[i].get();
	}
	return 0;
}
