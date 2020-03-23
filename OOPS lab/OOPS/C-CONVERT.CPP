#include<iostream.h>
#include<conio.h>
class DF;
class DM
{
protected:
	float mt,cm;
public:
	void read()
	{
		cout<<"Enter the meters & centimeters"<<endl;
		cin>>mt>>cm;
	}
	void write()
	{
		cout<<"meter:"<<mt<<endl;
		cout<<"centimeter:"<<cm<<endl;
	}
	friend DM convert_cm(DF,DM);
	friend DM convert_m(DF,DM);
	friend DF convert_inches(DF,DM);
	friend DF convert_ft(DF,DM);
};

class DF
{
protected:
	float ft,inches;
public:
	void read()
	{
		cout<<"Enter the feet & inches"<<endl;
		cin>>ft>>inches;
	}
	void write()
	{
		cout<<"feet:"<<ft<<endl;
		cout<<"inches:"<<inches<<endl;
	}
	friend DM convert_cm(DF,DM);
	friend DM convert_m(DF,DM);
	friend DF convert_inches(DF,DM);
	friend DF convert_ft(DF,DM);
};

DM convert_cm(DF f,DM m)
{
	DM M;
	M.cm=m.cm+100*m.mt+2.54*f.inches+12*2.54*f.ft;
	return M;
}

DM convert_m(DF f,DM m)
{
	DM M;
	M.mt=m.mt+(1/100)*m.cm+(2.54/100)*f.inches+(12*2.54/100)*f.ft;
	return M;
}

DF convert_ft(DF f,DM m)
{
	DF F;
	F.ft=f.ft+(1/12)*f.inches+(1/12*2.54)*m.cm+(100/12*2.54)*m.mt;
	return F;
}

DF convert_inches(DF f,DM m)
{
	DF F;
	F.inches=f.inches+12*f.ft+(1/2.54)*m.cm+(100/2.54)*m.mt;
	return F;
}

void main()
{
	int ch;
	clrscr();
	DF p,s;
	DM q,r;
	p.read();
	p.write();
	q.read();
	q.write();
	cout<<"Enter the choice:"<<endl;
	cout<<"1:in cm\t 2:in mt\t 3:in inches\t 4:in feet"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:	r=convert_cm(p,q);
			r.write();
			break;
		case 2:	r=convert_m(p,q);
			r.write();
			break;
		case 3:	s=convert_inches(p,q);
			s.write();
			break;
		case 4:	s=convert_ft(p,q);
			s.write();
			break;
	}
	getch();
}