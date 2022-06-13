#include<iostream>
#include<math.h>
using namespace std;
class area
{
	private:
		int l,b,a;
	public:
		void input()
		{
		cout<<"enter the length of rectangle";
		cin>>l;
		cout<<"enter the breadth of rectangle";
		cin>>b;
		}
		void returnarea()
		{
			a=l*b;
			cout<<"the area of rectangle is:-"<<a<<endl;
		}
};
int main()
{
	area a;
	a.input();
	a.returnarea();
	return 0;
}
