/*
 * main.cpp
 *
 *  Created on: 2016. 10. 9.
 *      Author: song
 */

#include <iostream>
#include <string>

using namespace std;

struct student
{
	int id;
	string name;
	int grade;
};

int main()
{
	int i;
	int top=0;
	struct student s[10];
	for(i=0;i<10;i++)
	{
		cin>>s[i].id>>s[i].name>>s[i].grade;
	}
	for(i=0;i<10;i++)
	{
		if(s[i].grade>s[top].grade)
		{
			top=i;
		}
	}
	cout<<"id : "<<s[top].id<<endl;
	cout<<"name : "<<s[top].name<<endl;
	cout<<"grade : "<<s[top].grade<<endl;

	return 0;
}
