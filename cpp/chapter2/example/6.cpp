#include <iostream>
double get_ast();
int main()
{
	double ligtyear;
	double ast;
	cout<<"Enter the number of light years: ";
	cin>>lightyear;
	ast=get_ast(lightyear);
	cout<<lightyear<<" light yesrs = "<<ast<<"astronomical units."
	
}
double get_ast(double n)
{
	double a;
	a=n*63240;
	return a;
}