#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	char f_name[20],l_name[20],name[40];
	cout<<"Enter your first name:";
	cin.getline(f_name,20);
	cout<<"Enter your last name:";
	cin.getline(l_name,20);
	cout<<"Here's the inforamtion in a single string: ";
	strcat(l_name,", ");
	strcpy(name,l_name);
	strcat(name,f_name);
	cout<<name<<endl;
	return 0;
}