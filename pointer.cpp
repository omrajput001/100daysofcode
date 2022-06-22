#include<iostream>
using namespace std;
class demo{
	public:
		void show()
		{
			cout<<"hii"<<endl;
		}
		void show1()
		{
			cout<<"hello"<<endl;
		}
};
int main(){
demo obj;
demo *ptr=&obj;
obj.show();
obj.show1();
return 0;
}
