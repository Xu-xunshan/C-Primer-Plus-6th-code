#include <iostream>
int main()
{
	using namespace std;
	float kilometers,litres,result;
	cout<<"请输入距离(公里)";
	cin>>kilometers;
	cout<<"请输入使用汽油量(升)";
	cin>>litres;
	result=litres/kilometers*100;
	cout<<"每百公里耗油 "<<result<<"升"<<endl;
	return 0;
}