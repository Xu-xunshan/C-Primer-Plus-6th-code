#include <iostream>
int main()
{
	using namespace std;
	const int transfer=12;
	int hight0;
	float hight1;
	cout<<"请输入你的身高(英寸) : __\b\b";
	cin>>hight0;
	hight1=hight0/transfer;
	cout<<"身高为 "<<hight1<<" 英尺。"<<endl;
	return 0;
}