#include<iostream>
using namespace std;

class Node
{
	public:
		int rollno;
		float per, marks;
		Node * next;
		
		Node()
		{
			rollno=0;
			per=0.0;
			marks=0.0;
			next=NULL;
		}
		
		Node(int x,float y,float z)
		{
			rollno=x;
			per=y;
			marks=z;
			next=NULL;
		}
		
		
};


class SLL
{
	
	public:
		Node *head;
		
		SLL()
		{
			head=NULL;
		}
		
		void create();
		void show();
		void update();
		void Showall();
};

void SLL::create()
{
	
	Node *p;
	int x;
	float y,z;
	
	cout<<"\n\n Enter Roll NO. of Student :  ";
	cin>>x;
	
	cout<<"\n\n Enter Marks of Student : ";
	cin>>y;
	
	z=y/100*100;
	
	
	if(head==NULL)
	{
		head=new Node(x,y,z);
	}
	else
	{
		p=head;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=new Node(x,y,z);
	}
}

void SLL::show()
{
	int x;
	cout<<"\n\n Enter Roll No. to search : ";
	cin>>x;
	
	if(head==NULL)
	{
		cout<<"\n\n List are Empty... ";
	}
	else
	{
		Node *p;
		int found=0;
		p=head;
		while(p!=NULL)
		{
			if(p->rollno==x)
			{
				cout<<"\n\n Roll No. : "<<p->rollno;
				cout<<"\n\n Marks : "<<p->marks;
				cout<<"\n\n Percentage : "<<p->per;
			    found++;	
			}
			p=p->next;
		}
	
	   if(found==0)
	   {
	   	cout<<"\n\n Roll NO. is Not present... ";
		   }	
	}
	
}

void SLL::update()
{
	int x;
	cout<<"\n\n Enter Roll No. to Update :  ";
	cin>>x;
	if(head==NULL)
	{
		cout<<"\n\n List is Empty... ";
	}
	else
	{
		Node *p;
		p=head;
		int found=0;
		float y,z;
		
		
		while(p!=NULL)
		{
			if(p->rollno==x)
			{
				cout<<"\n\n Enter Marks : ";
				cin>>y;
				z=y/100*100;
				p->marks=y;
				p->per=z;
				found++;
			}
			p=p->next;
		}
		
		if(found==0)
		{
			cout<<"\n\n Roll No. is not present... ";
		}
	}
	
	                           
}

void SLL::Showall()
{
	
	if(head==NULL)
	{
		cout<<"\n\n List is empty... ";
	}
	else
	{
		Node *p;
		p=head;
		while(p!=NULL)
		{
			cout<<"\n\n Roll No. : "<<p->rollno;
			cout<<"\n\n Marks : "<<p->marks;
			cout<<"\n\n Percentage : "<<p->per;
			p=p->next;
		}
	}
}
int main()
{
	SLL obj;
	obj.create();
	obj.create();
	obj.create();
	obj.show();
	obj.show();
	obj.update();
	obj.update();
	obj.Showall();
	
	
	
	
	return 0;
}
