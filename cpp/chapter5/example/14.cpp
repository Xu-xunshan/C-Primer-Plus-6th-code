#include <iostream>
#include <ctime>
int main()
{
	using namespace std;
	cout<<"Enter the delay time,in seconds: ";
	float seces;
	cin>>seces;
	clock_t delay=seces*CLOCKS_PER_SEC;
	cout<<"string\a\n";
	clock_t start=clock();
	while (clock()-start<delay);
	cout<<"done\a\n";
	return 0;
}