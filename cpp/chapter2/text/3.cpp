#include "iostream"
using namespace std;
void l1();
void l2();
int main ()
{
	l1();
	l1();
	l2();
	l2();
	return 0;
}
void l1()
{
	cout<<"Three blind mice"<<endl;
}
void l2()
{
	cout<<"See how they run"<<endl;
}