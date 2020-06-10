
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
void main()
{
char d[25];
int n;
clrscr();

cout<<"\n**********************STUDENT_DATABASE_MANAGEMENT_PROGRAM***********************";
while(n!=4)
{
cout<<"\nAVAILABLE OPTIONS:\n1.Admin View\n2.Student login\n3.Faculty login\n"
    <<"4.Exit\nEnter your option:";
cin>>n;
if(n==1)
{
char p[25];
cout<<"Enter password:";
cin>>p;
char pd[]="admin";
cout<<endl;
if(strcmp(p,pd)==0)
{
cout<<"Roll no. \tName   \t       Branch\t    Semester  Percentage"<<endl;
ifstream ob;
ob.open("Example.txt",ios::in);
int q=0;
while(ob>>d)
{
++q;
cout<<d<<"      \t";
if(q%5==0)
cout<<endl;
}
ob.close();
}
getch();
clrscr();
}
else if(n==2)
{
char ch[7];
cout<<"Enter your roll no.";
cin>>ch;
ifstream ob;
int check=0;
ob.open("Example.txt",ios::in);
while(ob>>d)
{
if(strcmpi(d,ch)==0)
{
cout<<"Roll no:"<<d<<endl;
ob>>d;
cout<<"Name:"<<d<<endl;
ob>>d;
cout<<"Branch:"<<d<<endl;
ob>>d;
cout<<"Semester:"<<d<<endl;
ob>>d;
cout<<"Percentage:"<<d<<endl;
ob>>d;
ob.close();
check=1;
}
}
if(check==0)
cout<<"No such results found!";
getch();
clrscr();
}
else if(n==3)
{
char s[6],c[6]="cs202";
cout<<"Enter your subject code:";
cin>>s;
if(strcmpi(s,c)==0)
{
int g;
cout<<"Available options:\n1.Do entry of student\n2.View Database\nEnter option:";
cin>>g;
if(g==1)
{
ofstream ob;
ob.open("Example.txt",ios::out|ios::app);
char j[7],k[25],l[10];
int v;
float b;
cout<<"Roll no.:";
cin>>j;
ob<<j<<" ";
cout<<"Name:";
cin>>k;
ob<<k<<" ";
cout<<"Branch:";
cin>>l;
ob<<l<<" ";
cout<<"Semester:";
cin>>v;
ob<<v<<" ";
cout<<"Percentage:";
cin>>b;
ob<<b<<" ";
ob.close();
}
else if(g==2)
{
ifstream ob;
ob.open("Example.txt",ios::in);
cout<<"Roll no.\tName\t        Branch \t    Semester   Percentage"<<endl;
int u=0;
while(ob>>d)
{
++u;
cout<<d<<"     \t";
if(u%5==0)
cout<<endl;
}
ob.close();
}
getch();
clrscr();
}
}
}
}

