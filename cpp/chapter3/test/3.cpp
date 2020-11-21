#include <iostream>
int main()
{
	using namespace std;
	const int transfer=60;
	int degrees;
	float minutes,seconds,location;
	cout<<"Enter a latitude in degrees,minutes,and seconds:"<<endl;
	cout<<"First,enter the degrees: ";
	cin>>degrees;
	cout<<"Next,enter rhe minutes of arc: ";
	cin>>minutes;
	cout<<"Finally,enter the seconds of arc: ";
	cin>>seconds;
	location=degrees+minutes/60+seconds/60/60;
	cout<<degrees<<" degrees, "<<minutes<<" minutes, "<<seconds<<" seconds = "<<location<<" degrees"<<endl;
	return 0;
}