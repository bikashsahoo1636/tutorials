#include<iostream>
#include<stdio.h>
using namespace std;
struct student
{
	int roll;
	student *link;
}
*front=NULL,*rear=NULL,*temp,*np;

void push(student *a)
{
	if (front==NULL)
	{
		front =rear=a;
	}
	else
	{
		rear->link=a;
		rear=a;
	}	
}
void pop()
{
	if (front==NULL)
	{
		cout<<"Empty"<<endl;
	}
	else
	temp=front;
	front=front->link;
	delete temp;
}
void display()
{ 
	struct student *a;
	a=front;
	if (front==NULL)
	{
		cout<<"Empty"<<endl;
	}
	else
	{
		cout<<"Desired queue look like::"<<endl;
		while (a!=NULL)
		{
			cout<<a->roll<<endl;
			a=a->link;
		}
	}
}
int main()
{ 
	int n,r,t;
	char s='Y';
	while (s=='Y'||s=='y')
	{
		cout<<"QUEUE::   1.PUSH    2.POP    3.DISPLAY"<<endl;
		cout<<"ENTER YOUR CHOICE::"<<endl;
		cin>>n;
		switch (n)
		{
			case 1:cout<<"Enter the no. to be pushed."<<endl;
			cin>>r;
			np=new student; 
			np->roll=r;
			np->link=NULL;
			push(np);break;
			case 2: pop();break;
			case 3: display();break;
			default:cout<<"Invalid Choice"<<endl;			
		}
		cout<<"Do you want to continue?(y/n)"<<endl;
		cin>>s;
	}
	return 0;
}
