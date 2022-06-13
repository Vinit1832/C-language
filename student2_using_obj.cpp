#include<iostream>
using namespace std;
class student
{
	private:
		int roll,ph;
		char name[10],add[10];
	public:
		void input()
		{
			cout<<"enter name:-";
			cin>>name;
			cout<<"enter roll no:-";
			cin>>roll;
			cout<<"enter phone number:-";
			cin>>ph;
			cout<<"enter address:-";
			cin>>add;
		}
		void output()
		{
			cout<<name<<endl;
			cout<<roll<<endl;
			cout<<ph<<endl;
			cout<<add<<endl;
		}
};
int main()
{
student s1,s2;
s1.input();
s1.output();
s2.input();
s2.output();
return 0;
}
