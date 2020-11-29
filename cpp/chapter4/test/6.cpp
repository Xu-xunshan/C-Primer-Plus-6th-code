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
	CandyBar snake;

	cout<<"Enter the kind of candy: ";
	cin>>snake.kind;
	cout<<"Enter the weight of candy: ";
	cin>>snake.weight;
	cout<<"Enter the calories of this kindy: ";
	cin>>snake.calorie;
	cout<<"Snake :\n";
	cout<<snake.kind<<endl;
	cout<<snake.weight<<endl;
	cout<<snake.calorie<<endl;
	return 0;
}