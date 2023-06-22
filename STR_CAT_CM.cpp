#include<iostream>
#include<string>
using namespace std;

class String
{
	char *s;
	int n=0;
	public:
	String(){
		s=new char(ln);
	}
	String()
	{
		cout<<"Enter the size of the string = ";
		cin>>n;
		s=new char(n);
		cin>>s;
	
	}
	String operator +=(String);
	void display();
};


String String::operator +=(String s2)
{
	strcat(s,s2.s);
	return *this;
}
void String::display()
{
	cout<<"\n-------------------------\n";
	cout<<s;
}
int main()
{
	String s1,s2,s3;
	s3=s1+=s2;
	cout<<"Using s1\n";
	s1.display();
	cout<<"Using s3\n";
	s3.display();
	return 0;
}
