#include "iostream"
int main()
{
	using namespace std;
	int foot,inch,pound;
	float hight,weight,BMI;
	const int fti=12;//fit=foot to inch
	const float itm=0.0254;//itm=itch to meter
	const float ptk=2.2;//ptk=pound to meter
	cout<<"请输入你的身高 : (几英尺几英寸)"<<endl;
	cin>>foot>>inch;
	cout<<"请输入你的体重(磅)"<<endl;
	cin>>pound;
	hight=(foot*fti+inch)*itm;
	weight=pound/ptk;
	BMI=weight/(hight*hight);
	cout<<"您的BMI为 "<<BMI<<" 。"<<endl;
	return 0;
}