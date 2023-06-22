#include<iostream>
using namespace std;

class Office
{
	protected:
	float basic, hra, aa;
	public:
	void get_data()
	{
		int ch;
		cout<<"Enter basic = ";
		cin>>basic;
		cout<<"Enter hra = ";
		cin>>hra;
		do
		{
			cout<<"Select Employee:: 1: Manager, 2: Staff::";
			cin>>ch;
			switch(ch)
			{
				case 1: cout<<"Enter Additional Allowance = ";cin>>aa; break;
				case 2: aa=0; break;
				default: cout<<"Invalid Input!";
			}
		}
		while(ch<1 || ch>2);
		
	}
	void put_data()
	{
		cout<<"Basic salary = "<<basic<<endl;
		cout<<"HRA = "<<hra<<endl;
		cout<<"Additional Allowance = "<<aa<<endl;
	}
};

class Kolkata:public Office
{
	public:
	float sa;
	void get_value()
	{
		get_data();
		cout<<"Enter Special Allowance = ";
		cin>>sa;
	}
	void put_value()
	{
		put_data();
		cout<<"Enter Special Allowance = "<<sa<<endl;
		cout<<"Total Salary = "<<basic+hra+aa+sa<<endl;
	}
};

class Delhi:public Office
{
	public:
	float ca;
	void get_value()
	{
		get_data();
		cout<<"Enter City Allowance = ";
		cin>>ca;
	}
	void put_value()
	{
		put_data();
		cout<<"Enter City Allowance = "<<ca<<endl;
		cout<<"Total Salary = "<<basic+hra+aa+ca<<endl;
	}
};

class Darjeeling:public Office
{
	public:
	float ha;
	void get_value()
	{
		get_data();
		cout<<"Enter Hill Allowance = ";
		cin>>ha;
	}
	void put_value()
	{
		put_data();
		cout<<"Enter Hill Allowance = "<<ha<<endl;
		cout<<"Total Salary = "<<basic+hra+aa+ha<<endl;
	}
};

int main()
{
	Kolkata k;
	Delhi dh;
	Darjeeling dr;
	
	cout<<"Kolkata Branch::\n";
	cout<<"Enter employee data::\n";
	k.get_value();
	
	cout<<"Delhi Branch::\n";
	cout<<"Enter employee data::\n";
	dh.get_value();
	
	cout<<"Darjeeling Branch::\n";
	cout<<"Enter employee data::\n";
	dr.get_value();
	
	cout<<"\n--------------------------------\n";
	cout<<" Employee Kolkata Branch::\n";
	cout<<"\nThe Entered Employee Data::\n";
	k.put_value();
	cout<<"\n--------------------------------\n";
	cout<<"Employee Delhi Branch::\n";
	cout<<"\nThe Entered Employee Data::\n";
	dh.put_value();
	cout<<"\n--------------------------------\n";
	cout<<"Employee Darjeeling Branch::\n";
	cout<<"\nThe Entered Employee Data::\n";
	dr.put_value();
	cout<<"\n--------------------------------\n";
	
	return 0;
}
