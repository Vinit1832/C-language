#include<iostream>
using namespace std;
class complex
{
	private:
	int a=10,b=20;
	public:
	void output()
	{
		cout<<a<<endl<<b;
	}
};
main()
{
	complex c1;
	c1.output();
}
