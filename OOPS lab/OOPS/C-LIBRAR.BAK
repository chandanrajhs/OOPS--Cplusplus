#include<iostream.h>
#include<conio.h>
#include<string.h>
class library
{
int accno;
int status;
char authorname[40];
char titlename[30];
char usn[30];
char name[20];
public:
void read()
{
	cout<<"enter the account number:";
	cin>>accno;
	cout<<"enter the authorname:";
	cin>>authorname;
	cout<<"enter the title name:";
	cin>>titlename;
	cout<<"enter the status:";
	cin>>status;
}
void write()
{
	cout<<accno<<"\t"<<authorname<<"\t"<<titlename<<"\t"<<status<<"\t"<<name<<"\t"<<usn<<endl;
}
void search()
{
	char book[20];
	cout<<"enter the book name:";
	cin>>book;
	if(strcmpi(titlename,book)==0)
	{
		status=1;
		cout<<"found\n";
		}
	else
	{
		status=0;
		cout<<"not found\n";
	}
}
void issue()
{
	char book[20];
	if(strcmpi(titlename,book)==0)
		cout<<"book is available:\n";
	else
		cout<<"book is not available:\n";
}
void returnbook()
{
	status=1;
	cout<<"enter the studentname:";
	cin>>name;
	cout<<"enter the usn";
	cin>>usn;
}
};
void main()
{
	library l[20];
	int i,n;
	clrscr();
	cout<<"enter the number of books:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		l[i].read();
		l[i].search();
		l[i].issue();
		l[i].returnbook();
		cout<<"____________\n";
	}
	cout<<"accno"<<"\t"<<"authorname"<<"\t"<<"titlename"<<"\t"<<"status"<<"\t"<<"name"<<"\t"<<"usn"<<endl;
	cout<<"______________\n"<<endl;
	for(i=0;i<n;i++)
	{

		l[i].write();
	}
	getch();
}
