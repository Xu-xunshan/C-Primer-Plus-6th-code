#include <iostream>
#include <climits>
int main()
{
	using namespace std;
	int n_int= INT_MAX;
	short n_short = SHRT_MAX;
	long n_long =LONG_MAX;
	long long n_llong = LLOMG_MAX;
	cout<<"int is "<<sizesof(int)<<" bytes."<<endl;
	cout<<"short is "<<sizeof n_short<<" bytes."<<endl;
	cout<<"long is "<<sizeof n_long<<" bytes."<<endl;
	cout<<"long long is "<<sizeof n_llong<<" bytes."<<endl;
	cout<<endl;
	
	cout<<"Maximun values: "<<endl;
	cout<<"int: "<<n_int<<endl;
	cout<<"short: "<<n_short<<endl;
}