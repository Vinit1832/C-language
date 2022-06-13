#include<iostream>
#include<math.h>
using namespace std;
class triangle
{
	private:
		int s1,s2,s3;
	public:
		void perimeter()
		{
			int p;
			cout<<"enter side 1:-";
			cin>>s1;
			cout<<"enter side 2:-";
			cin>>s2;
			cout<<"enter side 3:-";
			cin>>s3;
			p=s1+s2+s3;
			cout<<"the perimeter of triangle is:- "<<p<<endl;
		}
		void area()
		{
			float s,ar;
			s=(s1+s2+s3)/2;
			ar=sqrt(s*(s-s1)*(s-s2)*(s-s3));
			cout<<"area of triangle is:-"<<ar;
		}
};
int main()
{
	triangle t;
	t.perimeter();
	t.area();
	return 0;
}
