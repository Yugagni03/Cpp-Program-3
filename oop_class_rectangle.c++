#include<iostream>
using namespace std;
class rectangle
{
	public:
		int length;
		int breadth;
		int area(){
			return length*breadth;
		}
		int perimeter(){
			return 2*(length+breadth);
		}
};
int main()
{
	rectangle r1,r2;
	r1.length=10;
	r1.breadth=5;
	cout<<"the area is:"<<r1.area()<<endl;
	cout<<"the perimeter is:"<<r1.perimeter()<<endl;;
	r2.length=20;
	r2.breadth=10;
	cout<<"the area of rec 2 is:"<<r2.area()<<endl;;
	cout<<"the perimete of rec 2 is:"<<r2.perimeter()<<endl;
	return 0;
}
