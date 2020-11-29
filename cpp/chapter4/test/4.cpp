#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string f_name,l_name,name;
	cout<<"Enter your first name:";
	cin>>f_name;
	cout<<"Enter your last name:";
	cin>>l_name;
	cout<<"Here's the inforamtion in a single string: ";
	name=l_name+", "+f_name;
	cout<<name<<endl;
	return 0;
}