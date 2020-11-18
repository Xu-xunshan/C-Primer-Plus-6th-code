#include <iostream>
using namespace std;
void time(int,int);
int main()
{
	int hours;
	int mins;
	cout<<"Enter the number of hours: ";
	cin>>hours;
	cout<<"Enter the number of minutes: ";
	cin>>mins;
	time(hours,mins);
}
void time(int a,int b)
{
	cout<<"Time: "<<a<<" : "<<b<<endl;
}