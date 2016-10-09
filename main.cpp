/*
 * main.cpp
 *
 *  Created on: 2016. 10. 6.
 *      Author: song
 */

#include <iostream>

using namespace std;

struct square
{
	int point_x1;
	int point_x2;
	int point_y1;
	int point_y2;
	int width;
	int height;
	int area;
};

struct square overlap(struct square a, struct square b)
{
	struct square c;

	if(a.point_x1<b.point_x1)
		c.point_x1=b.point_x1;

	else
		c.point_x1=a.point_x1;

	if(a.point_y1<b.point_y1)
		c.point_y1=b.point_y1;

	else
		c.point_y1=a.point_y1;

	if(a.point_x2<b.point_x2)
		c.point_x2=a.point_x2;

	else
		c.point_x2=b.point_x2;

	if(a.point_y2<b.point_y2)
		c.point_y2=a.point_y2;

	else
		c.point_y2=b.point_y2;

	c.width=c.point_x2-c.point_x1;
	c.height=c.point_y2-c.point_y1;
	c.area=c.width*c.height;

	return c;
}

int main()
{
	struct square a, b, c;

	cout<<"input square A (x1, y1, x2, y2) : ";
	cin>>a.point_x1>>a.point_y1>>a.point_x2>>a.point_y2;

	cout<<"input square B (x1, y1, x2, y2) : ";
	cin>>b.point_x1>>b.point_y1>>b.point_x2>>b.point_y2;

	a.width=a.point_x2-a.point_x1;
	a.height=a.point_y2-a.point_y1;
	a.area=a.width*a.height;

	b.width=b.point_x2-b.point_x1;
	b.height=b.point_y2-b.point_y1;
	b.area=b.width*b.height;

	c = overlap(a,b);

	cout<<"A ��ǥ (x1,y1) : "<<a.point_x1<<","<<a.point_y1<<endl;
	cout<<"A ��ǥ (x2,y2) : "<<a.point_x2<<","<<a.point_y2<<endl;
	cout<<"A �� : "<<a.width<<", ���� : "<<a.height<<", ���� : "<<a.area<<endl<<endl;

	cout<<"B ��ǥ (x1,y1) : "<<b.point_x1<<","<<b.point_y1<<endl;
	cout<<"B ��ǥ (x2,y2) : "<<b.point_x2<<","<<b.point_y2<<endl;
	cout<<"B �� : "<<b.width<<", ���� : "<<b.height<<", ���� : "<<b.area<<endl<<endl;

	cout<<"C ��ǥ (x1,y1) : "<<c.point_x1<<","<<c.point_y1<<endl;
	cout<<"C ��ǥ (x2,y2) : "<<c.point_x2<<","<<c.point_y2<<endl;
	cout<<"C �� : "<<c.width<<", ���� : "<<c.height<<", ���� : "<<c.area<<endl<<endl;

	return 0;
}
