#include <iostream>
int main()
{
	using namespace std;
	long w_pop,us_pop;
	float percent;
	cout<<"Enter the world's population: ";
	cin>>w_pop;
	cout<<"Enter the population of the US: ";
	cin>>us_pop;
	percent=float (us_pop)/float (w_pop)*100;
	cout<<"The population of the US is "<<percent<<"% of the world population."<<endl;
	return 0;
}