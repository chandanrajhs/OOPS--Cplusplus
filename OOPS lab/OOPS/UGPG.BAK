#include<iostream.h>
#include<conio.h>
#include<string.h>

class student
{
public:
char name[20];
int usn,age;
public:
void getdata()
{
	cout<<"enter the name of student:";
	cin>>name;
	cout<<"enter the usn:";
	cin>>usn;
	cout<<"enter the age:";
	cin>>age;
}
};

class ugstudent:public student
{
public:
	int semister,fees,stipund;
public:
	void getug();
};
void ugstudent::getug()
{
getdata();
cout<<"enter the sem of student:";
cin>>semister;
cout<<"enter the fees:";
cin>>fees;
cout<<"enter the stipund of the student:";
cin>>stipund;
}

class pgstudent:public student
{
public:
	int semister,fees,stipund;
public:
	void getpg();
};
void pgstudent::getpg()
{
getdata();
cout<<"enter the sem of student:";
cin>>semister;
cout<<"enter the fees:";
cin>>fees;
cout<<"enter the stipund of the student:";
cin>>stipund;
}

void main()
{
ugstudent ug[20];
pgstudent pg[20];
int i,j,n;
clrscr();
cout<<"enter the number of ug:";
cin>>n;
cout<<"details of ug\n";
for(i=0;i<n;i++)
{
	ug[i].getug();
}
clrscr();
cout<<"average age of student by semister wise:\n";
cout<<"sem\t average\t\n";
for(int sem=1;sem<=8;sem++)
{
	float sum=0;
	int found=0,count=0;
	for(i=0;i<n;i++)
	{
		if(ug[i].semister==sem)
		{
			sum+=ug[i].age;
			found=1;
			count++;
		}
	}
	if(found==1)
		cout<<"\t"<<sem<<"\t"<<sum/count<<"\n";
	else
		cout<<"\t"<<sem<<"\t\t"<<"0"<<"\n";
}

cout<<"enter the number of pg:";
cin>>n;
cout<<"details of pg\n";
for(i=0;i<n;i++)
{
	pg[i].getpg();
}
clrscr();
cout<<"average age of student by semister wise:\n";
cout<<"sem\t average\t\n";
for(sem=1;sem<=4;sem++)
{
	float sum=0;
	int found=0,count=0;
	for(i=0;i<n;i++)
	{
		if(pg[i].semister==sem)
		{
			sum=sum+pg[i].age;
			found=1;
			count++;
		}
	}
	if(found==1)
		cout<<"\t"<<sem<<"\t"<<sum/count<<"\n";
	else
		cout<<"\t"<<sem<<"\t\t"<<"0"<<"\n";
}
getch();
}




