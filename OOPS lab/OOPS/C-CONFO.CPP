#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

class conferencehall
{
	int avail;
	char name[20];
public:
	conferencehall()
	{
		avail=30;
	}

	void enterhall()
	{
		if((avail>=1)&&(avail<=30))
		avail--;
	}

	void exithall()
	{
		avail++;
		if(avail>30)
		avail--;
	}

	void accept()
	{
		cout<<"Enter the hall name:";
		cin>>name;
	}

	int operator+(conferencehall b)
	{
		int p;
		p=b.avail+avail;
		return p;
	}

	void operator++()
	{
		avail=++avail;
	}

	void operator--()
	{
		avail=--avail;
	}

	void dispaly1(conferencehall h)
	{
		cout<<h;
	}

	void display(conferencehall h)
	{
		cout<<h;
	}

	friend ostream & operator<<(ostream &,conferencehall &);
	friend istream & operator>>(istream &,conferencehall &);
	friend void write(conferencehall,conferencehall);
};

void write(conferencehall x,conferencehall y)
{
	int s;
	s=x+y;
	x.display(x);
	y.display(y);

	cout<<"The available seats is:"<<x.avail<<endl;
	cout<<"The available seats is:"<<y.avail<<endl;
	cout<<"The total number of seates in both is:"<<s<<endl;
}

ostream & operator<<(ostream & out,conferencehall & o)
{
	out<<o.name<<endl;
	return out;
}
istream & operator>>(istream & in,conferencehall & o)
{
	in>>o.avail;
	return in;
}


void main()
{
	int n,x;
	clrscr();
	conferencehall h1,h2;
	h1.accept();
	h2.accept();
	while(1)
	{
		cout<<"Enter the choice:\n";
		cout<<"1:Enter the hall\t 2:Exit the hall\t 3:display the seates\t 4:exit\n";
		cin>>n;
		switch(n)
		{
			case 1:	cout<<"which hall you need to enter\n";
				cout<<"1";
				h1.display(h1);
				cout<<"2";
				h2.display(h2);
				cin>>x;
				if(x==1)
					h1.enterhall();
				else
					h2.enterhall();
				break;
			case 2:	cout<<"which hall you need to exit:\n";
				cout<<"1";
				h1.display(h1);
				cout<<"2";
				h2.display(h2);
				cin>>x;
				if(x==1)
					h1.exithall();
				else
					h2.exithall();
				break;
			case 3:	write(h1,h2);
				break;
			case 4:	exit(0);
				break;
			default:
		       exit(0);
		}
	}
getch();
}
