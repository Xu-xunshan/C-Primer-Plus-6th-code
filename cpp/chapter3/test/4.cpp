#include <iostream>
int main()
{
	using namespace std;
	long long num;
	int days,hours,minutes,seconds;
	cout<<"Enter the number of seconds: ";
	cin>>num;
	days=num/(60*60*24);
	hours=(num-days*60*60*24)/3600;
	minutes=(num-days*60*60*24-hours*3600)/60;
	seconds=num-days*60*60*24-hours*3600-minutes*60;
	cout<<num<<" seconds = "<<days<<" days, "<<hours<<" hours, "<<minutes<<" minutes, "<<seconds<<" seconds"<<endl;
	return 0;
}