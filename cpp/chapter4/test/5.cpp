#include <iostream>
struct CandyBar
{
	char kind[20];
	double weight;
	int calorie;
};
int main()
{
	using namespace std;
	CandyBar snake={"Mocha Munch",2.3,350};
	cout<<"Snake :\n";
	cout<<snake.kind<<endl;
	cout<<snake.weight<<endl;
	cout<<snake.calorie<<endl;
	return 0;
}