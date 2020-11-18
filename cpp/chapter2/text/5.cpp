#include <iostream>
double get_fah(int);
int main()
{
	using namespace std;
	int cel;
	int fah;
	cout<<"Please enter aCelsius value: ";
	cin>>cel;
	fah=get_fah(cel);
	cout<<cel<<" degrees Celsius is "<<fah<<" degrees Fahrenheit."<<endl; 
}

double get_fah(int n)
{
	int a;
	a=1.8*n+32;
	return a;
}