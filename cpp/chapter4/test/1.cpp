#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	cout<<"What is your first name?";
	char f_name[20];
	cin.getline(f_name,20);
	cout<<"What is your last name?";
	char l_name[20];
	cin.getline(l_name,20);
	cout<<"What letter grade do you deserve?";
	char l1,l2;
	cin>>l1;
	l2=l1+1;
	cout<<"What is your age?";
	int age;
	cin>>age;
	cout<<"Name: "<<f_name<<" , "<<l_name<<endl;
	cout<<"Grade: "<<l2<<endl;
	cout<<"Age: "<<age;
	return 0;
}