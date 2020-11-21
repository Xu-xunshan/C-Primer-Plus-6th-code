#include <iostream>
int main()
{
	using namespace std;
	float eu_cost,us_cost;
	const float transfer1=62.14;
	const float transfer2=3.875;
	cout<<"请输入汽车耗油量(每百公里消耗多少升)";
	cin>>eu_cost;
	us_cost=1/(eu_cost/transfer1/transfer2);
	cout<<"转换为美国风格的耗油量(mpg)为: "<<us_cost<<endl;
	return 0;
}