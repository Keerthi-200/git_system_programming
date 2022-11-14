#include<iostream>
using namespace std;
class cal{
	private:
		int x,y;
	public:
	int add(int,int);
	int sub(int,int);
	int mul(int,int);
	int div(int,int);
};
int cal::add(int x,int y) {
	return x+y;
}
int cal::sub(int x,int y) {
        return x-y;
}

int cal::mul(int x,int y) {
        return x*y;
}

int cal::div(int x,int y) {
        if(y>0)

	return x/y;
	else
		return 0;
}


int main() {
	cal obj;
cout<<"add is :"<<obj.add(2,3)<<endl;
cout<<"sub is :"<<obj.sub(2,3)<<endl;
cout<<"mul is :"<<obj.mul(2,3)<<endl;
cout<<"div is :"<<obj.div(2,3)<<endl;
	return 0;
}
