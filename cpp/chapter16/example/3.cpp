#include <iostream>
#include <cstring>
int main()
{
	char f_name,l_name;
	cout<<"Enter your first name:";
	cin>>f_name;
	cout<<"Enter your last name:";
	cin>>l_name;
	cout<<"Here's the inforamtion in a single string: ";
	strcpy(f_name,", ");
	strcpy(f_name,l_name);
	cout<<f_name;
	return 0;
}