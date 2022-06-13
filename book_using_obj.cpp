#include<iostream>
using namespace std;
class book
{
	private:
	int pages,id;
	float price;	char name[10];
	public:
	void input()
	{
		cout<<"enter pages:- ";
		cin>>pages;
		cout<<"enter id:- ";
		cin>>id;
		cout<<"enter price:- ";
		cin>>price;
		cout<<"enter name:- ";
		cin>>name;
	}
	void output()
	{
		cout<<"no of pages:- "<<pages<<endl;
		cout<<"id:-"<<id<<endl;
		cout<<"price:-"<<price<<endl;
		cout<<"name:-"<<name<<endl;
	}
};
main()
{
	book b1;
	b1.input();	
	b1.output();	
}
