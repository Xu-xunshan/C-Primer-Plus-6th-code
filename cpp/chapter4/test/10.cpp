#include <iostream>
int main()
{
	using namespace std;
	double time[3];
	cout<<"Enter first grade: "<<endl;
	cin>>time[0];
	cout<<"Enter second grade: "<<endl;
	cin>>time[1];
	cout<<"Enter first grade: "<<endl;
	cin>>time[2];
	cout<<"Average time = "<<(time[0]+time[1]+time[2])/3<<endl;
	cout<<"Three times.";
	return 0;
}