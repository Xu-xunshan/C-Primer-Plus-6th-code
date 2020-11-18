#include <iostream>
int far(int);
int main()
{
	using namespace std;
	int cel;
	int far;
	cout<<"Please enter aCelsius value: ";
	cin>>cel;
	far=far(cel);
	cout<<cel<<" degrees Celsius is "<<far<<" degrees Fahrenheit."
}

int far(int n)
{
	far=1.8*n+20;
	return far;
}