#include <iostream>
int main()
{
	using namespace std;
	cout<<"Enter the staring continue value: ";
	int limit;
	cin>>limit;
	int i;
	for(i=limit;i;i--)
		cout<<"i = "<<i<<"\n";
	cout<<"Done now that i = "<<i<<"\n";
	return 0;
}