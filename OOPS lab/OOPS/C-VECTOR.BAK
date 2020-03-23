#include<iostream.h>
#include<conio.h>
#include<process.h>
class vector
{
char a[5];
public:
int n,count;
vector()
{
	cout<<"Enter the size of vector\n";
	cin>>n;
}
void ins()
{
	count=0;
	while(count<n)
	{
		cin>>a[count++];
	}
	return;
}
void dele()
{
	if(count==0)
	{
		cout<<"empty vector\n";
		return;
	}
	count=0;
	cout<<"vector is deleted\n";
}
};

void main()
{
vector v1,v2;
int ch;
clrscr();
for(;;)
{
	cout<<"1.insert\t 2.delete\t 3.exit\n"<<endl;
	cout<<"enter the choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			v1.ins();
			cout<<"vector 1 is full\n";
			v2.ins();
			cout<<"vector 2 is full\n";
			break;
		case 2:
			v1.dele();
			v2.dele();
			break;
		case 3:
			exit(0);
	}
}
getch();
}
