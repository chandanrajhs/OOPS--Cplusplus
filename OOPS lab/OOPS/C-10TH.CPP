#include<iostream.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

class media
{
protected:
char title[100],pub[100];
public:
virtual void read()
{
	cout<<"enter the title name:";
	cin>>title;
	cout<<"enter the publisher:";
	cin>>pub;
}
virtual void show()
{
	cout<<title<<"\t"<<pub;
}
};

class books:public media
{
int page;
public:
void read()
{
	media::read();
	cout<<"enter number of pages available in the book:";
	cin>>page;
}
void show()
{
	media::show();
	cout<<"\t\t"<<page<<endl;
}
};

class videotape:public media
{
int hr,min,sec;
public:
void read()
{
	media::read();
	cout<<"duration of videotape in secs:";
	cin>>sec;
	compute();
}
void compute()
{
	min=sec/60;
	sec=sec%60;
	hr=min/60;
	min=min%60;
}
void show()
{
	media::show();
	cout<<"\t\t"<<hr<<":"<<min<<":"<<sec<<endl;
}
};

void main()
{
media *m;
books bs[50];
videotape vt[50];
int ch,nb,nv;
clrscr();
while(1)
{
	cout<<"1.about bookshop\t 2.about videotape\t 3.to exit"<<endl;
	cout<<"enter your choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"enter number of books:";
			cin>>nb;
			for(int i=1;i<=nb;i++)
			{
				m=&bs[i];
				m->read();
			}
			cout<<"-----------------------------------"<<endl;
			cout<<"title\t"<<"publisher\t"<<"pages available"<<endl;
			cout<<"-----------------------------------"<<endl;
			for(i=1;i<=nb;i++)
			{
				m=&bs[i];
				m->show();
			}
			cout<<"-----------------------------------"<<endl;
			break;

		case 2:
			cout<<"enter number of videotapes:";
			cin>>nv;
			for(i=1;i<=nv;i++)
			{
				m=&vt[i];
				m->read();
			}
			cout<<"-----------------------------------"<<endl;
			cout<<"title\t"<<"publisher\t"<<"total duration of videotape(hr:min:sec)"<<endl;
			cout<<"-----------------------------------"<<endl;
			for(i=1;i<=nv;i++)
			{
				m=&vt[i];
				m->show();
			}
			cout<<"-----------------------------------"<<endl;
			break;
		case 3:
			cout<<"enter the valid choice!!!...";
			exit(0);
	 getch();	}
	}

}
