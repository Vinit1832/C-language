#include<iostream>
using namespace std;
class student
{
	private:
		int roll;
		char name[10];
	public:
		void input()
		{
			cout<<"enter name:-";
			cin>>name;
			cout<<"enter roll no:-";
			cin>>roll;
		}
		void output()
		{
			cout<<name<<endl;
			cout<<roll;
		}
};
int main()
{
student s;
s.input();
s.output();
return 0;
}
