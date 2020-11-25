#include <iostream>
struct inflatable
{
	char name[20];
	float volum;
	double price;
};
int main()
{
	using namespace std;
	inflatable *ps=new inflatable;
	cout<<"Enter name of inflatable item: ";
	cin.get(ps->name,20);
	cout<<"Enter volum in cubic feet: ";
	cin>>(*ps).volum;
	cout<<"Enter price: $";
	cin>>ps->price;
	cout<<"Name: "<<(*ps).name<<endl;
	cout<<"Volum: "<<ps->volum<<" cubic feer\n";
	cout<<"Price: $"<<ps->price<<endl;
	delete ps;
	return 0;
}