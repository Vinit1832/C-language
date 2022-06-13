#include<iostream>
using namespace std;
class travel
{
	private:
	int D,charge;
	public:
	void calculate()
	{
		int t;
		cout<<"enter D:-";
		cin>>D;
		if(D<40)
		{
			charge=(D*7);
		}
			else if(D>40 && D<=100)
			{
				t=(D-40);
				charge= 280+(t*6);
			}
				else if(D>100)
				{
					t=(D-100);
					charge= 640+(t*5);
				}
				else
				{
					charge=0;
				}
	}
	void output()
	{
		cout<<"distance travelled= "<<D;
		cout<<"\ncharge= "<<charge;
	}
};
main()
{
	travel t1;
	t1.calculate();	
	t1.output();	
}
