#include <iostream>
struct pizza
{
	char company[20];
	int inch;
	int weight;
};
int main()
{
	using namespace std;
	pizza piz_1;
	cout<<"Enter the company: ";
	cin.getline(piz_1.company,20);
	cout<<"Enter the diamater of the pizza: ";
	cin>>piz_1.inch;
	cout<<"Enter the weight of pizza:";
	cin>>piz_1.weight;
	cout<<"The pizza you chose is from "<<piz_1.company<<".\n";
	cout<<"Diamater is "<<piz_1.inch<<" cun.\n";
	cout<<"Weight is "<<piz_1.weight<<" pounds.\n";
	return 0;
}