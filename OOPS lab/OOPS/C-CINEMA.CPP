#include<iostream.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
class cinema
{
int noa,noc,bill_amt;
int amt1,amt2;
char *dt;
public:
void read_info1()
{
	cout<<"enter the number of adults\n";
	cin>>noa;
	cout<<"enter the cost per ticket of the adults\n";
	cin>>amt1;
}
void read_info2()
{
	cout<<"enter the number of children\n";
	cin>>noc;
	cout<<"enter the cost per ticket of children\n";
	cin>>amt2;
}
void c_bill()
{
	bill_amt=noa*amt1;
}
void c_bill(int m)
{
	m=noc;
	bill_amt=m*amt2;
}
void c_bill(int x,int y)
{
	x=noa;
	y=noc;
	bill_amt=(x*amt1)+(y*amt2);
}
void display()
{
	char cname[50],tname[50];
	cout<<"enter the name of theatre\n";
	cin>>tname;
	cout<<"enter the name of cinema\n";
	cin>>cname;
	time_t now=time(0);
	char *dt=ctime(&now);
	cout<<"date and time="<<dt<<endl;
	cout<<"total amt="<<bill_amt<<endl;
}
};
void main()
{
	int m,x,y,ch;
	clrscr();
	cinema c;
	cout<<"enter the choice"<<endl;
	cout<<"1.only adult\t2only children\t3.both\t4.exit"<<endl;\
	cin>>ch;
	switch(ch)
	{
		case 1:	c.read_info1();
			c.c_bill();
			c.display();
			break;
		case 2:	c.read_info2();
			c.c_bill(m);
			c.display();
			break;
		case 3:	c.read_info1();
			c.read_info2();
			c.c_bill(x,y);
			c.display();
			break;
		case 4:	exit(0);
	}
	getch();
}





