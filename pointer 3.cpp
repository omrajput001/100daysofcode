#include<iostream>
using namespace std;
class A{
	int m;
	public:
		int n=20;
		void getdata(int x)
		{
			m=x;
			
		}
		void disp()
		{
			cout<<"Base class output"<<endl;
			cout<<"value of m="<<m<<endl;
			cout<<"value of n="<<n<<endl;
			
		}
};
class B:public A
{

		int p;
		public:
			void getdata(int y)
			{
				p=y;
			}
			void disp()
			{
				cout<<"derived class output:"<<endl;
				cout<<"value of p="<<p<<endl;
			}
		};
		int main()
		{
			A obj;
			A *ptr;
			ptr=&obj;
			ptr->getdata(10);
			ptr->disp();
			B obj1;
			B*ptr1;
			ptr1=&obj1;
			ptr1->getdata(40);
			ptr->disp();
			return 0;
		}
