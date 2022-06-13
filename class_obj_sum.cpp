#include<iostream>
using namespace std;
class complex
{
	private:
	int a,b;
	public:
	void input()
	{
		cout<<"enter a:-";
		cin>>a;
		cout<<"enter b:-";
		cin>>b;
	}
	void output()
	{
		cout<<"the value of a & b is "<<a<<" "<<"&"<<" "<<b<<" "<<"respectively";
	}
	void add(complex x,complex y)
	{
		a=x.a+y.a;
		b=x.b+y.b;
	}
};
main()
{
	complex c1,c2,c3;
	c1.input();
	c2.input();
	c3.add(c1,c2);
	c3.output();	
}
