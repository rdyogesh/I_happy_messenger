
#include<conio.h>
#include<fstream.h>
#include<iostream.h>
#include<stdio.h>
#include<process.h>
#include<dos.h>
#include<string.h>
#include<time.h>
char gname[35],sname[35],o[35],p[10],g,w[10],pa[10],check[30],xname[35],xpass[10];
void in();
void pv();
void user_slide();
void col()
{
_setcursortype(_NOCURSOR);
gotoxy(1,1);
textbackground(GREEN);
clreol();
gotoxy(1,2);
textbackground(GREEN);
clreol();
gotoxy(1,3);
textbackground(GREEN);
clreol();
gotoxy(1,4);
textbackground(GREEN);
clreol();
gotoxy(1,5);
textbackground(GREEN);
clreol();
gotoxy(1,6);
textbackground(WHITE);
clreol();
gotoxy(1,7);
textbackground(WHITE);
clreol();
gotoxy(1,8);
textbackground(WHITE);
clreol();
gotoxy(1,9);
textbackground(WHITE);
clreol();
gotoxy(1,10);
textbackground(WHITE);
clreol();
gotoxy(1,11);
textbackground(WHITE);
clreol();
gotoxy(1,12);
textbackground(WHITE);
clreol();
gotoxy(1,13);
textbackground(WHITE);
clreol();
gotoxy(1,14);
textbackground(WHITE);
clreol();
gotoxy(14,15);
textbackground(WHITE);
clreol();
gotoxy(1,16);
textbackground(WHITE);
clreol();
gotoxy(1,17);
textbackground(WHITE);
clreol();
gotoxy(1,18);
textbackground(WHITE);
clreol();
gotoxy(1,19);
textbackground(WHITE);
clreol();
gotoxy(1,20);
textbackground(WHITE);
clreol();
gotoxy(1,21);
textbackground(WHITE);
clreol();
gotoxy(1,22);
textbackground(WHITE);
clreol();
gotoxy(1,23);
textbackground(WHITE);
clreol();
gotoxy(1,24);
textbackground(WHITE);
clreol();
gotoxy(1,25);
textbackground(WHITE);
clreol();
gotoxy(1,26);
textbackground(WHITE);
clreol();
/*gotoxy(1,27);
textbackground(YELLOW)
clreol();
gotoxy(1,28);
textbackground(YELLOW)
clreol();
gotoxy(1,29);
textbackground(YELLOW)
clreol();
gotoxy(1,30);
textbackground(YELLOW)
clreol();
gotoxy(1,31);
textbackground(YELLOW)
clreol();
gotoxy(1,32);
textbackground(YELLOW)
clreol();
gotoxy(1,33);
textbackground(YELLOW)
clreol();
gotoxy(1,34);
textbackground(YELLOW)
clreol();
gotoxy(1,35);
textbackground(YELLOW)
clreol();
gotoxy(1,36);
textbackground(YELLOW)
clreol();
gotoxy(1,37);
textbackground(YELLOW)
clreol();
gotoxy(1,38);
textbackground(YELLOW)
clreol();
gotoxy(1,39);
textbackground(YELLOW)
clreol();
gotoxy(1,40);
textbackground(YELLOW)
clreol();
gotoxy(1,41);
textbackground(YELLOW)
clreol();
gotoxy(1,42);
textbackground(YELLOW)
clreol();
gotoxy(1,43);
textbackground(YELLOW)
clreol();
  */
}
void cl()
{
_setcursortype(_NOCURSOR);
gotoxy(1,1);
textbackground(GREEN);
clreol();
delay(50);
gotoxy(1,2);
textbackground(GREEN);
clreol();
delay(50);
gotoxy(1,3);
textbackground(GREEN);
clreol();
delay(50);
gotoxy(1,4);
textbackground(GREEN);
clreol();
delay(50);
gotoxy(1,5);
textbackground(GREEN);
clreol();
delay(50);
gotoxy(1,6);
textbackground(WHITE);
clreol();
delay(50);
gotoxy(1,7);
textbackground(WHITE);
clreol();
delay(50);
gotoxy(1,8);
textbackground(WHITE);
clreol();
delay(50);
gotoxy(1,9);
textbackground(WHITE);
clreol();
delay(50);
gotoxy(1,10);
textbackground(WHITE);
clreol();
delay(50);
gotoxy(1,11);
textbackground(WHITE);
clreol();
delay(50);
gotoxy(1,12);
textbackground(WHITE);
clreol();
delay(50);
gotoxy(1,13);
textbackground(WHITE);
clreol();
delay(50);
gotoxy(1,14);
textbackground(WHITE);
clreol();
delay(50);
gotoxy(1,15);
textbackground(WHITE);
clreol();
delay(50);
gotoxy(1,16);
textbackground(WHITE);
clreol();
delay(50);
gotoxy(1,17);
textbackground(WHITE);
clreol();
delay(50);
gotoxy(1,18);
textbackground(WHITE);
clreol();
delay(50);
gotoxy(1,19);
textbackground(WHITE);
clreol();
delay(50);
gotoxy(1,20);
textbackground(WHITE);
clreol();
delay(50);
gotoxy(1,21);
textbackground(WHITE);
clreol();
delay(50);
gotoxy(1,22);
textbackground(WHITE);
clreol();
delay(50);
gotoxy(1,23);
textbackground(WHITE);
clreol();
delay(50);
gotoxy(1,24);
textbackground(WHITE);
clreol();
delay(50);
gotoxy(2,10);
textcolor(GREEN);
cout<<"______________,,__";
clreol();
delay(50);
gotoxy(2,11);
textcolor(GREEN);
cout<<"|::::::::::::::::|";
clreol();
gotoxy(20,11);
textcolor(GREEN);
delay(50);
gotoxy(2,12);
textcolor(GREEN);
cout<<"|____|___________|";
clreol();
delay(50);
gotoxy(2,13);
textcolor(GREEN);
cout<<"||::||";
clreol();
delay(50);
gotoxy(2,14);
textcolor(GREEN);
cout<<"||::||";
clreol();
delay(50);
gotoxy(2,15);
textcolor(GREEN);
cout<<"||::||";
clreol();
delay(50);
gotoxy(2,16);
textcolor(GREEN);
cout<<"||__||";
clreol();
gotoxy(6,8);
cout<<"*********PRESS ENTER TO EXPERIENCE******* ";
getch();
for(int i=23;i<40;i++)
{
gotoxy(i,10);
cout<<"*";
gotoxy(i-1,10);
cout<<" ";
delay(50);
}
gotoxy(40,10);
cout<<"GET STARTED";
delay(1000);
}
void title()
{
clrscr();
for(int e=35;e>=17;e--)
{
delay(400);
gotoxy(15,e+1);
cout<<"                          ";
gotoxy(15,e+2);
cout<<"                            ";
gotoxy(15,e+3);
cout<<"                           ";
gotoxy(15,e+4);
cout<<"                               ";
gotoxy(15,e+5);
cout<<"                                 ";
gotoxy(15,e+6);
cout<<"                                 ";
gotoxy(15,e+7);
cout<<"                                   ";
gotoxy(15,e+8);
cout<<"                                       ";
gotoxy(15,e+9);
cout<<"              ";
gotoxy(15,e+10);
cout<<"                                      ";
gotoxy(15,e+11);
cout<<"                                          ";
gotoxy(15,e+12);
cout<<"                                       ";
gotoxy(15,e+13);
cout<<"                               ";
gotoxy(15,e);
cout<<"           CAST  AND CREW ";
gotoxy(15,e+1);
cout<<"DIRECTOR- VASANTH KUMAR.K";
gotoxy(15,e+2);
cout<<"EXECUTER- YOGESH.R.D";
gotoxy(15,e+3);
cout<<"EDITOR-   SIVA KARTHIK.P";
gotoxy(15,e+4);
cout<<"MODIFIER- VARA PRASAD ";
gotoxy(15,e+5);
cout<<"         SPECIAL THANKS TO ";
gotoxy(15,e+6);
cout<<"COMPUTER TEACHER- L.RAJESHWARI ";
gotoxy(15,e+8);
cout<<"       FRIENDS     ";
gotoxy(15,e+9);
cout<<"N.JAI SAI";
gotoxy(15,e+10);
cout<<"N.ARUNJUNAI";
gotoxy(15,e+11);
cout<<"E.HARI HARAN ";
}
getch();
clrscr();
}
void mai()
{
clrscr();
for(int j=10;j<=13;j++)
{
delay(100);
gotoxy(2,j-1);
cout<<"                    ";
gotoxy(2,j);
cout<<"______________,,__";
gotoxy(2,j+1);
cout<<"|::::::::::::::::|";
gotoxy(2,j+2);
cout<<"|____|___________|";
gotoxy(2,j+3);
cout<<"||::||";
gotoxy(2,j+4);
cout<<"||::||";
gotoxy(2,j+5);
cout<<"||::||";
gotoxy(2,j+6);
cout<<"||__||";
gotoxy(2,j+1);
cout<<"                    ";
gotoxy(1,j+1);
cout<<"|::::::::::::::::|";
delay(300);
gotoxy(1,j+1);
cout<<"                    ";
gotoxy(2,j+1);
cout<<"|::::::::::::::::|";
for(int i=23;i<40;i++)
{
gotoxy(i,j+1);
cout<<"*";
gotoxy(i-1,j+1);
cout<<" ";
delay(50);
}
if(j==10)
{
gotoxy(40,j+1);
textcolor(RED);
clreol();
cout<<"VASANTH KUMAR.K";
gotoxy(60,j+1);
textbackground(BLACK);
clreol();
}
if(j==11)
{
gotoxy(40,j+1);
textcolor(YELLOW);
clreol();
cout<<"YOGESH.R.D";
gotoxy(60,j+1);
textbackground(BLACK);
clreol();
}
if(j==12)
{
gotoxy(40,j+1);
textcolor(GREEN);
clreol();
cout<<"SIVA KARTHIK.P";
gotoxy(60,j+1);
textbackground(BLACK);
clreol();
}
if(j==13)
{
gotoxy(40,j+1);
textcolor(BLUE);
clreol();
cout<<"VARA PRASAD";
gotoxy(60,j+1);
textbackground(BLACK);
textcolor(WHITE);
clreol();
}
}
for(int s=13;s>=6;s--)
{
delay(100);
gotoxy(6,s+3);
cout<<"                       ";
gotoxy(2,s+7);
cout<<"      ";
gotoxy(2,s);
cout<<"______________,,__";
gotoxy(2,s+1);
cout<<"|::::::::::::::::|";
gotoxy(2,s+2);
cout<<"|____|___________|";
gotoxy(2,s+3);
cout<<"||::||";
gotoxy(2,s+4);
cout<<"||::||";
gotoxy(2,s+5);
cout<<"||::||";
gotoxy(2,s+6);
cout<<"||__||";
}
for(int h=23;h<80;h++)
{
gotoxy(h,s+2);
cout<<"*";
gotoxy(h-1,s+2);
cout<<" ";
delay(5);
}
clrscr();
for(int x=0;x<30;x++)
{
gotoxy(x,s+2);
cout<<"*";
gotoxy(x-1,s+2);
cout<<" ";
delay(50);
}
gotoxy(29,7);
textbackground(RED);
clreol();
gotoxy(45,7);
textbackground(BLACK);
clreol();
gotoxy(30,7);
cout<<"VASANTH KUMAR.K";
gotoxy(42,8);
cout<<"|";
gotoxy(42,9);
textbackground(RED);
clreol();
gotoxy(68,9);
textbackground(BLACK);
clreol();
gotoxy(42,9);
cout<<"DIRECTOR OF IHAPPY";
delay(150);
for(int g=46;g<80;g++)
{
gotoxy(g,7);
cout<<"*";
gotoxy(g-1,7);
cout<<" ";
delay(20);
}
clrscr();
for(int q=0;q<30;q++)
{
gotoxy(q,7);
cout<<"*";
gotoxy(q-1,7);
cout<<" ";
delay(20);
}
gotoxy(29,7);
textbackground(YELLOW);
clreol();
gotoxy(43,7);
textbackground(BLACK);
clreol();
gotoxy(30,7);
cout<<"YOGESH.R.D";
gotoxy(37,8);
cout<<"|";
gotoxy(37,9);
textbackground(YELLOW);
clreol();
gotoxy(60,9);
textbackground(BLACK);
clreol();
gotoxy(38,9);
cout<<"EXECUTER OF IHAPPY";
delay(150);
for(int d=43;d<=80;d++)
{
gotoxy(d,7);
cout<<"*";
gotoxy(d-1,7);
cout<<" ";
delay(20);
}
clrscr();
for(int t=0;t<=29;t++)
{
gotoxy(t,7);
cout<<"*";
gotoxy(t-1,7);
cout<<" ";
delay(20);
}
gotoxy(27,7);
textbackground(GREEN);
clreol();
gotoxy(42,7);
textbackground(BLACK);
clreol();
gotoxy(28,7);
cout<<"SIVA KARTHIK.K";
gotoxy(37,8);
cout<<"|";
gotoxy(37,9);
textbackground(GREEN);
clreol();
gotoxy(59,9);
textbackground(BLACK);
clreol();
gotoxy(38,9);
cout<<"EDITOR OF IHAPPY";
delay(150);
for(int u=43;u<=80;u++)
{
gotoxy(u,7);
cout<<"*";
gotoxy(u-1,7);
cout<<" ";
delay(20);
}
clrscr();
for(int w=0;w<=27;w++)
{
gotoxy(w,7);
cout<<"*";
gotoxy(w-1,7);
cout<<" ";
delay(20);
}
gotoxy(27,7);
textbackground(BLUE);
clreol();
gotoxy(40,7);
textbackground(BLACK);
clreol();
gotoxy(28,7);
cout<<"VARA PRASAD";
gotoxy(37,8);
cout<<"|";
gotoxy(37,9);
textbackground(BLUE);
clreol();
gotoxy(59,9);
textbackground(BLACK);
clreol();
gotoxy(38,9);
cout<<"MODIFER OF IHAPPY";
delay(150);
cl();
}
void modify();
class groupc
{
public:
char name[35],message[100];long hr,m;char dd,mm;int yy;
char *getname()
{
return name;
}
long geth()
{
return hr;
}
long getm()
{
return m;
}
char getda()
{
return dd;
}
char getmo()
{
return mm;
}
void gety()
{
cout<<yy;
}
void getdata();
void putdata();
};
void seeall();
void asearch();
void keypad()
{
gotoxy(1,16);
cout<<"======================================================";
gotoxy(1,17);
cout<<"|  | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | <- |";
gotoxy(1,18);
cout<<"|====================================================|";
gotoxy(1,19);
cout<<"|TABS| Q | W | E | R | T | Y | U | I | O | P | {} [] |";
gotoxy(1,20);
cout<<"|====================================================|";
gotoxy(1,21);
cout<<"|CAPS LOCK| A | S | D | F | G | H | J | K | L | ENTER|";
gotoxy(1,22);
cout<<"|====================================================|";
gotoxy(1,23);
cout<<"|SHIFT | Z | X | C | V | B | N | M | < | > | ? |SHIFT|";
gotoxy(1,24);
cout<<"|====================================================|";
gotoxy(1,25);
cout<<"|CTRL|-|-|ALT|         SPACE            |ALT|-_-|CTRL|";
gotoxy(1,26);
cout<<"======================================================";
}
class pass
{
char acna[30],pass[30],phno[30];
int age;
public:
void ap();
void accre();
char *getpass()
{
return pass;
}
char *getname()
{
return acna;
}
void pdata(){ cout<<acna<<age;}
void putdata(int);
void show();
void sd();
void showl();
void showld();
void modifynumber()
{
gotoxy(10,4);
cout<<"To modify your phone number:";
gotoxy(10,6);
cout<<"Enter your new number to modify: ";
gotoxy(10,48);
gets(phno);
gotoxy(10,24);
cout<<"saving your number to your account";
delay(600);
cout<<'.';
delay(600);
cout<<'.';
delay(600);
cout<<".press a key to proceed";
}

void modifyage()
{
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"                                                              ----";
gotoxy(10,10);
cout<<"Enter your age: ";
gotoxy(26,10);
textbackground(GREEN);
textcolor(WHITE);
clreol();
gotoxy(46,10);
textbackground(WHITE);
clreol();
gotoxy(26,10);
cin>>age;
}
void modifypass()
{
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"                                                              ----";
gotoxy(10,10);
cout<<"ENTER YOUR NEW PASSWORD";
gotoxy(35,10);
textbackground(GREEN);
textcolor(WHITE);
clreol();
gotoxy(50,10);
textbackground(WHITE);
clreol();
gotoxy(35,10);
gets(pass);
gotoxy(10,14);
}
void modifyphono()
{
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"                                                              ----";
gotoxy(10,10);
cout<<"ENTER YOUR NEW PHONE NUMBER ";
gotoxy(39,10);
textbackground(GREEN);
textcolor(WHITE);
clreol();
gotoxy(55,10);
textbackground(WHITE);
clreol();
gotoxy(39,10);
gets(phno);
}
};
void accmodify(int Ch)
{
clrscr();
pass s;
char password[40],choice;
int pos=0,flag=0;
fstream in;
in.open("accr.dat",ios::binary|ios::in|ios::out);
if(!in)
{
cout<<"unable to open";
exit(0);
}
puts(gname);
gotoxy(22,16);
strcpy(password,"sdfgsdgdfsd");
while(in.read((char*)&s,sizeof(s)))
{
pos++;
if(strcmp(s.getname(),gname)==0)
{
if(strcmp(s.getpass(),password)!=0)
{
in.seekg((pos-1)*sizeof(s),ios::beg);
clrscr();
if(Ch==1)
{
s.modifypass();
flag=1;
}
if(Ch==2)
{
s.modifyage();
flag=2;
}
if(Ch==3)
{
s.modifyphono();
flag=2;
}
in.write((char*)&s,sizeof(s));
gotoxy(10,20);
cout<<"Your Changes has been successfully stored";
}
}
}
if(flag==0)
cout<<"invalid username or password ";
if(flag==1)
{
clrscr();
gotoxy(10,10);
cout<<"Your profile is about to restart to save changes";
delay(1000);
gotoxy(10,12);
cout<<"Restarting your account ";
delay(1000);
cout<<'.';
delay(1000);
cout<<'.';
delay(1000);
cout<<'.';
delay(1000);
cout<<'.';
gotoxy(10,23);
cout<<"Your profile has been successfully restarted";
}
getch();
in.close();
}
void accountmodify()
{
clrscr();
int ch,flag=0;
pass s;
do
{
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"                                                              ----";
m:
gotoxy(10,8);
cout<<"In Your account what do you want to modify";
gotoxy(10,10);
cout<<"1# PASSWORD";
gotoxy(10,12);
cout<<"2# AGE";
gotoxy(10,14);
cout<<"3# PHONE NUMBER";
gotoxy(10,16);
cout<<"4# HOME ";
gotoxy(10,18);
cout<<"ENTER YOUR CHOICE: ";
cin>>ch;
 switch(ch)
 {
 case 1:
  accmodify(ch);
   flag=1;
    break;
 case 2:
  accmodify(ch);
   flag=1;
    break;
 case 3:
  accmodify(ch);
   flag=1;
    break;
 case 4:
 user_slide();
  flag=1;
 }

if(flag==0)
{
gotoxy(10,18);
cout<<"You have entered an invalid option";
gotoxy(15,20);
cout<<"Please enter the available choice!!";
getch();
goto m;
  }
 }while(ch!=4);
}
/*int check()
{
char name[30];
pass s;
ifstream fin;
fin.open("accr.dat",ios::binary|ios::binary|ios::in);
if(!fin)
{
cout<<"Error in opening the file";
exit(0);
}
strcpy(name,check);
while(fin.read((char*)&s,sizeof(s)))
{
if(strcmp(s.getname(),name)==0)
{
return 0;
}
if(strcmp(s.getname(),name)!=0)
{
return 1;
}
}
fin.close();
}*/

/*void safety()
{
int ch;
do
{
clrscr();
gotoxy(10,6);
cout<<"Safety tips";
gotoxy(10,8);
cout<<"1.How to login ?";
gotoxy(10,10);
cout<<"2.How to send message?";
gotoxy(10,12);
cout<<"3.How to ?";
gotoxy(10,14);
cout<<"4.Exit ";
cin>>ch;
switch(ch)
{
case 1:safebuy();
       getch();
       break;

case 2:safesell();
       getch();
       break;

case 3:safeaccount();
       getch();
       break;
  }
 }while(ch!=4);
}
*/
void col();
void load();
int deactive();
void rep();
void user_slide();
void main_slide();
void namefile(char []);
void pass::accre()
{
char password[30],filename[30];
strcpy(acna,sname);

gotoxy(43,10);
gets(phno);
for(;strlen(phno)!=10;)
{
gotoxy(19,18);
cout<<"Invalid phone number........";
gotoxy(19,10);
cout<<"Enter the phone number:                                              ";
gotoxy(43,10);
gets(phno);
}
gotoxy(19,18);
cout<<"                            ";
gotoxy(43,12);
cin>>age;
if(age>=15)
{
gotoxy(19,19);
cout<<"you are  eligible";
delay(1000);
}
else
{
gotoxy(19,19);
cout<<"you are not eligible";
delay(1000);
main_slide();
}
gotoxy(43,14);
gets(pass);
gotoxy(43,16);
gets(password);
for(;strcmp(pass,password)!=0;)
{
gotoxy(19,14);
cout<<"Enter your password:                           ";
gotoxy(19,16);
cout<<"RE-enter your password:                        ";
gotoxy(43,14);
gets(pass);
gotoxy(43,16);
gets(password);
}
strcpy(xpass,pass);
gotoxy(22,18);
cout<<"your account is created";
getch();
}
void pass::ap()
{
clrscr();
col();
char password[30],filename[30];
gotoxy(19,5);
cout<<"ENTER YOUR NAME:";
gets(acna);
gotoxy(19,6);
cout<<"Enter the phone number:";
gets(phno);
for(;strlen(phno)!=10;)
{
gotoxy(19,18);
cout<<"Invalid phone number........";
gotoxy(19,6);
cout<<"Enter the phone number:                                              ";
gotoxy(43,6);
gets(phno);
}
gotoxy(19,18);
cout<<"                            ";
gotoxy(19,7);
cout<<"Enter your age:";
cin>>age;
if(age>=15)
{
gotoxy(20,8);
cout<<"you are  eligible";
}
else
{
gotoxy(20,8);
cout<<"you are not eligible";
getch();
//clrscr();
main_slide();
}
gotoxy(19,9);
cout<<"Enter your password:";
gets(pass);
gotoxy(19,10);
cout<<"RE-enter your password:";
gets(password);
for(;strcmp(pass,password)!=0;)
{
gotoxy(19,9);
cout<<"Enter your password:                           ";
gotoxy(41,9);
gets(pass);
gotoxy(19,10);
cout<<"RE-enter your password:                          ";
gotoxy(42,10);
gets(password);
}
gotoxy(22,14);
cout<<"your account is created";
getch();
}
void acc()
{
clrscr();
char password[30],filename[30],phno[10],pas[10],age;
pass s;
ifstream fin;
fin.open("accr.dat",ios::binary|ios::binary|ios::in);
gotoxy(19,5);
cout<<"ENTER YOUR NAME:";
gotoxy(36,5);
gets(filename);
while(fin.read((char*)&s,sizeof(s)))
{
if(strcmp(s.getname(),filename)==0)
{
in();
getch();
}
if(strcmp(s.getname(),filename)!=0)
{
strcpy(o,filename);
gotoxy(19,6);
cout<<"Enter the phone number:";
gets(phno);
for(;strlen(phno)!=10;)
{
gotoxy(19,18);
cout<<"Invalid phone number........";
gotoxy(19,6);
cout<<"Enter the phone number:                                              ";
gotoxy(43,6);
gets(phno);
}
strcpy(p,phno);
gotoxy(19,18);
cout<<"                            ";
gotoxy(19,7);
cout<<"Enter your age:";
cin>>age;
if(age>=15)
{
gotoxy(20,8);
cout<<"you are  eligible";
g=age;
}
else
{
gotoxy(20,8);
cout<<"you are not eligible";
getch();
//clrscr();
main_slide();
}
gotoxy(19,9);
cout<<"Enter your password:";
gets(pas);
gotoxy(19,10);
cout<<"RE-enter your password:";
gets(password);
for(;strcmp(pas,password)!=0;)
{
gotoxy(19,9);
cout<<"Enter your password:                           ";
gotoxy(41,9);
gets(pas);
gotoxy(19,10);
cout<<"RE-enter your password:                          ";
gotoxy(42,10);
gets(password);
}
strcpy(w,pas);
gotoxy(22,14);
cout<<"your account is created";
getch();
}
}
fin.close();
}
void in()
{
clrscr();
cout<<"THIS NAME IS ALREADY EXIST ";
getch();
acc();
}
void accref();
void pass::putdata(int r)
{
gotoxy(5,r);
cout<<acna;
gotoxy(25,r);
cout<<age;
gotoxy(35,r);
cout<<phno;
}
void modifyacc()
{
clrscr();
col();
pass s;
char namet[60],con;
int flag=0,pos=0;
fstream in;
in.open("accr.dat",ios::binary|ios::in|ios::out);
if(!in)
{
cout<<"Unable to open";
exit(0);
}
gotoxy(19,5);
cout<<"ENTER ACCOUNT NAME:";
gets(namet);
while(in.read((char*)&s,sizeof(s)))
{
pos++;
if(strcmpi(s.getname(),namet)==0)
{
in.seekg((pos-1)*sizeof(s),ios::beg);
clrscr();
s.ap();
in.write((char*)&s,sizeof(s));
flag=1;
}
}
if(flag==0)
{
cout<<"No such ad was found ";
getch();
}
in.close();
}
void seealld();
int delmyaccount()
{
clrscr();
col();
char username[40],password[40],con;
pass  s;
int flag=0;
ifstream in;
ofstream out;
seealld();
in.open("accr.dat",ios::binary|ios::in);
out.open("accrd.dat",ios::binary|ios::out) ;
if(!in && !out)
{
cout<<"Unable to open";
exit(0);
}
clrscr();
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       delete        chats       SEARCH       accounts          REPORT";
gotoxy(1,5);
cout<<"           ------";
gotoxy(10,12);
cout<<"#DELETE AN ACCOUNT";
gotoxy(10,14);
cout<<"#USERSNAME:";
gotoxy(21,14);
textbackground(GREEN);
clreol();
gotoxy(41,14);
textbackground(WHITE);
clreol();
gotoxy(21,14);
gets(username);
while(in.read((char*)&s,sizeof(s)))
{
if(strcmp(s.getname(),username)==0)
{
if(strcmp(s.getname(),username)==0)
{
s.sd();
flag=1;
gotoxy(10,17);
cout<<"DO YOU WANT TO DELETE (y/n): ";
cin>>con;
if(con=='n')
out.write((char*)&s,sizeof(s));
if(con=='y')
flag=2;
}
else
out.write((char*)&s,sizeof(s));
 }
else
out.write((char*)&s,sizeof(s));
}
if(flag==0)
{
gotoxy(10,16);
cout<<"#NO SUCH RECORD FOUND";
getch();
clrscr();
col();
}
in.close();
out.close();
remove("accr.dat");
rename("accrd.dat","accr.dat");
//return 0;
clrscr();
if(flag==2)
{
gotoxy(10,16);
cout<<"#RECORD DELETED";
getch();
//return 2;
clrscr();
}
clrscr();
return flag;
}
int deactive()
{
clrscr();
col();
char username[40],password[40],con;
pass  s;
int flag=0;
ifstream in;
ofstream out;
in.open("accr.dat",ios::binary|ios::in);
out.open("accrd.dat",ios::binary|ios::out) ;
if(!in && !out)
{
cout<<"Unable to open";
exit(0);
}
clrscr();
col();
gotoxy(10,10);
strcpy(username,gname);
strcpy(password,pa);
clrscr();
while(in.read((char*)&s,sizeof(s)))
{
if(strcmp(s.getname(),username)==0)
{
if(strcmp(s.getpass(),password)==0)
{
s.showld();
flag=1;
gotoxy(10,17);
cout<<"DO YOU WANT TO DEACTIVATE (y/n): ";
cin>>con;
if(con=='n')
out.write((char*)&s,sizeof(s));
col();
if(con=='y')
flag=2;
col();
}
else
out.write((char*)&s,sizeof(s));
 }
else
out.write((char*)&s,sizeof(s));
}
if(flag==0)
{
gotoxy(5,21);
cout<<"no such user account found";
col();
}
in.close();
out.close();
remove("accr.dat");
rename("accrd.dat","accr.dat");
//return 0;
clrscr();
if(flag==2)
{
cout<<"Your profile is deleted.";
//return 2;
col();
main_slide();
//return flag;
}
col();
return flag;
}
void delacc()
{
pass s;
col();
char namet[60],con;
int flag=0;
seeall();
ifstream in;
ofstream out;
in.open("accr.dat",ios::binary|ios::in);
out.open("accrd.dat",ios::binary|ios::out) ;
if(!in && !out)
{
cout<<"Unable to open";
exit(0);
}
cout<<"\n\tEnter the user to be deleted :";
gets(namet);
clrscr();
while(in.read((char*)&s,sizeof(s)))
{
if(strcmp(s.getname(),namet)==0);
{
flag=1;
gotoxy(10,17);
cout<<"Do you want to delete this record (y/n):";
cin>>con;
if(con=='n')
out.write((char*)&s,sizeof(s));
if(con=='y')
flag=2;
}
if(strcmp(s.getname(),namet)!=0);
{
out.write((char*)&s,sizeof(s));
}
}
if(flag==0)
{
cout<<"\n\tno such user account found";
getch();
clrscr();
main_slide();
}
in.close();
out.close();
remove("accr.dat");
rename("accrd.dat","accr.dat");
if(flag==2)
{
cout<<"Record deleted";
getch();
in.open("accr.dat",ios::binary|ios::in);
out.open("accrd.dat",ios::binary|ios::out) ;
if(!in && !out)
{
cout<<"Unable to open";
exit(0);
}
while(in.read((char*)&s,sizeof(s)))
{
if(strcmp(namet,s.getname())!=0)
{
flag=1;
out.write((char*)&s,sizeof(s));
}
}
in.close();
out.close();
remove("accr.dat");
rename("accrd.dat","accr.dat");
}
}
void pass::showl()
{
clrscr();
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"                                              ----------";
gotoxy(12,8);
cout<<"***** NAME*****";
gotoxy(40,8);
cout<<acna;
gotoxy(12,10);
cout<<"*****AGE*******";
gotoxy(40,10);
cout<<age;
gotoxy(12,12);
cout<<"****** PHONE NUMBER*******";
gotoxy(40,12);
cout<<phno;
gotoxy(12,14);
cout<<"PRESS ANY KEY TO PROCEED";
getch();
}
void pass::sd()
{
clrscr();
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       delete        chats       SEARCH       accounts          REPORT";
gotoxy(1,5);
cout<<"           ------";
gotoxy(12,8);
cout<<"***** NAME*****";
gotoxy(40,8);
cout<<acna;
gotoxy(12,10);
cout<<"*****AGE*******";
gotoxy(40,10);
cout<<age;
gotoxy(12,12);
cout<<"****** PHONE NUMBER*******";
gotoxy(40,12);
cout<<phno;
gotoxy(12,14);
cout<<"PRESS ANY KEY TO PROCEED";
getch();
}
void pass::showld()
{
clrscr();
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"                                              ----------";
gotoxy(12,8);
cout<<"***** NAME*****";
gotoxy(40,8);
cout<<acna;
gotoxy(12,10);
cout<<"*****AGE*******";
gotoxy(40,10);
cout<<age;
gotoxy(12,12);
cout<<"****** PHONE NUMBER*******";
gotoxy(40,12);
cout<<phno;
}

void pass::show()
{
clrscr();
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"                                 -------";
gotoxy(12,8);
cout<<"***** NAME*****";
gotoxy(40,8);
cout<<acna;
gotoxy(12,10);
cout<<"*****AGE*******";
gotoxy(40,10);
cout<<age;
gotoxy(12,12);
cout<<"****** PHONE NUMBER*******";
gotoxy(40,12);
cout<<phno;
gotoxy(12,14);
cout<<"PRESS ANY KEY TO PROCEED";
}
void namefile(char na[20])
{
pass s;
fstream fin;
fin.open(na,ios::binary|ios::out|ios::app);

fin.close();
}
void v()
{
clrscr();
for(int o=0;o<2;o++)
{
textbackground(4);
textcolor(15);
clrscr();
}
for(int i=78;i>=1;i--)
{
gotoxy(i,1);
cout<<"\2";
delay(10);
}
for(int j=1;j<=25;j++)
{
gotoxy(1,j);
cout<<"\2";
delay(10);
}
for(i=1;i<=78;i++)
{
gotoxy(i,25);
cout<<"\2";
delay(10);
}
for( j=25;j>=1;j--)
{
gotoxy(78,j);
cout<<"\2";
delay(10);
}
//getch();
}
void ins();
void login2();
void accref()
{
col();
pass s;
groupc g;
char name[35],found='n';
ofstream fout;
ifstream fin;
fin.open("accr.dat",ios::binary|ios::in);
if(!fin)
{
gotoxy(1,1);
cout<<"iHAPPY MESSANGER";
gotoxy(1,4);
cout<<"HOME                  login             signup                 help";
gotoxy(1,5);
cout<<"                                        ------";
gotoxy(19,8);
cout<<"ENTER YOUR NAME:";
gotoxy(19,10);
cout<<"Enter the phone number:";
gotoxy(19,12);
cout<<"Enter your age:";
gotoxy(19,14);
cout<<"Enter your password:";
gotoxy(19,16);
cout<<"RE-enter your password:";
gotoxy(43,8);
textcolor(WHITE);
textbackground(GREEN);
clreol();
gotoxy(58,8);
textbackground(WHITE);
clreol();
gotoxy(43,10);
textcolor(WHITE);
textbackground(GREEN);
clreol();
gotoxy(58,10);
textbackground(WHITE);
clreol();
gotoxy(43,12);
textcolor(WHITE);
textbackground(GREEN);
clreol();
gotoxy(58,12);
textbackground(WHITE);
clreol();
gotoxy(43,14);
textcolor(WHITE);
textbackground(GREEN);
clreol();
gotoxy(58,14);
textbackground(WHITE);
clreol();
gotoxy(43,16);
textcolor(WHITE);
textbackground(GREEN);
clreol();
gotoxy(58,16);
textbackground(WHITE);
clreol();
gotoxy(43,8);
gets(name);
strcpy(sname,name);
strcpy(xname,name);
ofstream fout;
fout.open("accr.dat",ios::binary|ios::out|ios::app);
if(!fout)
{
cout<<"\n error in opening ";
exit(0);
}
s.accre();
fout.write((char*)&s,sizeof(s));
login2();
}
if(fin)
{
gotoxy(1,1);
cout<<"iHAPPY MESSANGER";
gotoxy(1,4);
cout<<"HOME                  login             signup                 help";
gotoxy(1,5);
cout<<"                                        ------";
gotoxy(19,8);
cout<<"ENTER YOUR NAME:";
gotoxy(19,10);
cout<<"Enter the phone number:";
gotoxy(19,12);
cout<<"Enter your age:";
gotoxy(19,14);
cout<<"Enter your password:";
gotoxy(19,16);
cout<<"RE-enter your password:";
gotoxy(43,8);
textcolor(WHITE);
textbackground(GREEN);
clreol();
gotoxy(58,8);
textbackground(WHITE);
clreol();
gotoxy(43,10);
textcolor(WHITE);
textbackground(GREEN);
clreol();
gotoxy(58,10);
textbackground(WHITE);
clreol();
gotoxy(43,12);
textcolor(WHITE);
textbackground(GREEN);
clreol();
gotoxy(58,12);
textbackground(WHITE);
clreol();
gotoxy(43,14);
textcolor(WHITE);
textbackground(GREEN);
clreol();
gotoxy(58,14);
textbackground(WHITE);
clreol();
gotoxy(43,16);
textcolor(WHITE);
textbackground(GREEN);
clreol();
gotoxy(58,16);
textbackground(WHITE);
clreol();
gotoxy(43,8);
gets(name);
while(!fin.eof())
{
fin.read((char*)&s,sizeof(s));
if(strcmp(s.getname(),name)==0)
{
gotoxy(15,19);
cout<<"this name is aldready";
getch();
found='y';
main_slide();
}
}
if(found=='n')
{
strcpy(sname,name);
strcpy(xname,name);
ofstream fout;
fout.open("accr.dat",ios::binary|ios::out|ios::app);
if(!fout)
{
cout<<"\n error in opening ";
exit(0);
}
s.accre();
fout.write((char*)&s,sizeof(s));
}
login2();
}
fin.close();
fout.close();
}
void ins()
{
gotoxy(15,20);
cout<<"!!!!This name is already exist!!!!!!";
getch();
accref();
}
/*s.accre();
fout.write((char*)&s,sizeof(s));
fout.close();
main_slide();
//}*/
void loginad()
{
col();
char name[30],password[30];
clrscr();
gotoxy(16,8);
cout<<"Acess granted";
getch();
main_slide();
}
void search();
void admin_slide()
{
	clrscr();
	col();
	int ch;
	do
	 {  gotoxy(1,1);
	    cout<<"iHAPPY MESSENGER ";
	    gotoxy(1,4);
	    cout<<"HOME       delete        chats       SEARCH       accounts          REPORT";
	    gotoxy(1,5);
	    cout<<"------";

		gotoxy(16,9);
		cout<<"                   1# Delete an  account";
		gotoxy(16,10);
		cout<<"                   2# Search an account";
		gotoxy(16,11);
		cout<<"                   3# Chat History";
		gotoxy(16,12);
		cout<<"                   4# Report";
		gotoxy(16,13);
		cout<<"                   5# ACCOUNTS";
		gotoxy(16,14);
		cout<<"                   6# Log Out";
		gotoxy(22,17);
		cout<<"Enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1: if(delmyaccount()==2)
			       getch();clrscr();col();break;
			case 2: asearch();getch();clrscr();col();break;
			case 3: pv();clrscr();col();break;
			case 4: rep();clrscr();col();break;
			case 5: seeall();col();break;
			case 6:main_slide();break;
		}
	 }
	while(ch!=7);
}
void accmod(int Ch)
{
clrscr();
pass s;
char seller_name[30],password[40],choice;
int pos=0,flag=0;
fstream in;
in.open("accr.dat",ios::binary|ios::in|ios::out);
if(!in)
{
cout<<"unable to open";
exit(0);
}
strcpy(seller_name,gname);
strcpy(password,pa);
while(in.read((char*)&s,sizeof(s)))
{
pos++;
if(strcmp(s.getname(),seller_name)==0)
{
if(strcmp(s.getpass(),password)==0)
{
in.seekg((pos-1)*sizeof(s),ios::beg);
clrscr();
if(Ch==1)
{
s.modifypass();
flag=1;
}
if(Ch==2)
{
s.modifynumber();
flag=2;
}
if(Ch==3)
{
s.modifyage();
flag=2;
}
if(Ch==4)
{
s.modifypass();
flag=2;
}
in.write((char*)&s,sizeof(s));
gotoxy(10,20);
cout<<"Your Changes has been successfully stored";
}
}
}
if(flag==0)
cout<<"invalid username or password ";
if(flag==1)
{
clrscr();
gotoxy(10,10);
cout<<"Your profile is about to restart to save changes";
delay(1000);
gotoxy(10,12);
cout<<"Restarting your account ";
delay(1000);
cout<<'.';
delay(1000);
cout<<'.';
delay(1000);
cout<<'.';
delay(1000);
cout<<'.';
gotoxy(10,23);
cout<<"Your profile has been successfully restarted";
}
getch();
in.close();
}

void login()
{
clrscr();
col();
pass s;
char ch;
int found=0;
char tname[30],tpassword[30];
ifstream file;
gotoxy(1,1);
cout<<"iHAPPY MESSANGER";
gotoxy(1,4);
cout<<"HOME                  login             signup                 help";
gotoxy(1,5);
cout<<"                      -----";
file.open("accr.dat",ios::binary|ios::in);
if(!file)
{
gotoxy(16,7);
cout<<"!!!cannot open this file!!!";
getch();
exit(0);
}
gotoxy(8,10);
cout<<"Enter Your User name:";
gotoxy(8,12);
cout<<"Enter Your Password :";
gotoxy(30,10);
textcolor(WHITE);
textbackground(GREEN);
clreol();
gotoxy(45,10);
textbackground(WHITE);
clreol();
gotoxy(30,12);
textcolor(WHITE);
textbackground(GREEN);
clreol();
gotoxy(45,12);
textbackground(WHITE);
clreol();
gotoxy(30,10);
gets(tname);
gotoxy(30,12);
gets(tpassword);
while(file.read((char*)&s,sizeof(s)))
{
if(strcmp(s.getpass(),tpassword)==0 && strcmp(s.getname(),tname)==0)
{
strcpy(gname,s.getname());
strcpy(pa,s.getpass());
load();
user_slide();
found=1;
}
}
if(strcmp(tname,"boss")==0 && strcmp(tpassword,"theboss")==0)
{
admin_slide();
}
if(found==0)
{
cout<<"\n no such account is found";
getch();
clrscr();
main_slide();
}
}
void login2()
{
clrscr();
col();
pass s;
char ch;
int found=0;
char tname[30],tpassword[30];
ifstream file;
file.open("accr.dat",ios::binary|ios::in);
if(!file)
{
gotoxy(16,7);
cout<<"!!!cannot open this file!!!";
getch();
exit(0);
}
stpcpy(tname,xname);
stpcpy(tpassword,xpass);
while(file.read((char*)&s,sizeof(s)))
{
if(strcmp(s.getpass(),tpassword)==0 && strcmp(s.getname(),tname)==0)
{
strcpy(gname,s.getname());
strcpy(pa,s.getpass());
user_slide();
found=1;
}
}
if(strcmp(tname,"boss")==0 && strcmp(tpassword,"theboss")==0)
{
admin_slide();
}
if(found==0)
{
cout<<"\n no such account is found";
getch();
clrscr();
main_slide();
}
}
void mod()
{
clrscr();
pass s;
char name[35],password[40],choice;
int pos=0,flag=0;
fstream in;
in.open("accr.dat",ios::binary|ios::in|ios::out);
if(!in)
{
cout<<"unable to open";
exit(0);
}
strcpy(name,gname);
strcpy(password,pa);
while(in.read((char*)&s,sizeof(s)))
{
pos++;
if(strcmp(s.getname(),name)==0)
{
if(strcmp(s.getpass(),password)==0)
{
in.seekg((pos-1)*sizeof(s),ios::beg);
clrscr();
in.write((char*)&s,sizeof(s));
s.ap();
gotoxy(10,20);
cout<<"Your Changes has been successfully stored";
}
}
}
if(flag==0)
cout<<"invalid username or password ";
if(flag==1)
{
clrscr();
gotoxy(10,12);
cout<<"MODIFYING ";
gotoxy(10,23);
cout<<"SUCESSFULLY RESTARTED";
}
getch();
in.close();
}

void sear();
void mod();
void search();
void a();
void main_slide()
{
clrscr();
col();
int ch;
do
{
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME                  login             signup                 help";
gotoxy(1,5);
cout<<"----";
gotoxy(16,9);
cout<<"                   1# SIGN UP";

gotoxy(16,10);
cout<<"                   2# LOGIN";
gotoxy(16,11);
cout<<"                   3# EXIT";
gotoxy(22,15);
cout<<"Enter your choice:";
cin>>ch;
switch(ch)
{
case 1:accref();break;
case 2:login();break;
case 3:exit(0);
}
}
while(ch!=5);
}

void main()
{
clrscr();
mai();
clrscr();
getch();
clrscr();
textcolor(15);
textbackground(15);
main_slide();
getch();
}

void groupc::getdata()
{
int n=0;
struct time t;
struct date d;
strcpy(name,gname);
gotoxy(1,8);
cout<<"ENTER YOUR MESSAGE ";
gotoxy(5,9);
textcolor(WHITE);
textbackground(GREEN);
clreol();
gotoxy(50,9);
textbackground(WHITE);
clreol();
gotoxy(5,10);
textcolor(WHITE);
textbackground(GREEN);
clreol();
gotoxy(50,10);
textbackground(WHITE);
clreol();
gotoxy(5,11);
textcolor(WHITE);
textbackground(GREEN);
clreol();
gotoxy(50,11);
textbackground(WHITE);
clreol();
gotoxy(5,12);
textcolor(WHITE);
textbackground(GREEN);
clreol();
gotoxy(50,12);
textbackground(WHITE);
clreol();
gotoxy(5,13);
textcolor(WHITE);
textbackground(GREEN);
clreol();
gotoxy(50,13);
textbackground(WHITE);
clreol();
gotoxy(5,14);
textcolor(WHITE);
textbackground(GREEN);
clreol();
gotoxy(50,14);
textbackground(WHITE);
clreol();
gotoxy(5,15);
textcolor(WHITE);
textbackground(GREEN);
clreol();
gotoxy(50,15);
textbackground(WHITE);
clreol();
gotoxy(5,9);
gets(message);
gettime(&t);
getdate(&d);
hr=t.ti_hour;
m=t.ti_min;
dd=d.da_day;
mm=d.da_mon;
yy=d.da_year;
n=n+1;
}
void groupc::putdata()
{
cout<<"\n"<<name<<":-"<<"      time:"<<geth()<<":"<<getm()<<" date:"<<int(getda())<<"/"<<int(getmo())<<"\n";
cout<<"MESSAGE:-";puts(message);cout<<"\n";
cout<<"_____________________________________________________________________________"<<"\n";
}
void insert()
{
clrscr();
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"           ----";
groupc g;
keypad();
ofstream fout;
fout.open("group.dat",ios::binary|ios::out|ios::app);
if(!fout)
{
cout<<"\n error in opening ";
exit(0);
}
g.getdata();
fout.write((char*)&g,sizeof(g));
fout.close();clrscr();
}
void report()
{
clrscr();
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"                                                                       ------";
groupc g;
keypad();
ofstream fout;
fout.open("chat.dat",ios::binary|ios::out|ios::app);
if(!fout)
{
cout<<"\n error in opening ";
exit(0);
}
g.getdata();
fout.write((char*)&g,sizeof(g));
fout.close();clrscr();
}

void a()
{
clrscr();
pass s;
keypad();
ofstream fout;
fout.open("accr.dat",ios::binary|ios::out|ios::app);
if(!fout)
{
cout<<"\n error in opening ";
main_slide();
}
s.accre();
fout.write((char*)&s,sizeof(s));
fout.close();
clrscr();
}
void load()
{
clrscr();
col();
struct time t;
gettime(&t);
if(int(t.ti_hour)<12)
{
gotoxy(19,10);
cout<<"GOOD MORNGING";
}
if(int(t.ti_hour)>=12&&int(t.ti_hour)<16)
{
gotoxy(19,10);
cout<<"GOOD AFTERNOON";
}
if(int(t.ti_hour)>16&&int(t.ti_hour)==16)
{
gotoxy(19,10);
cout<<"GOOD EVENING";
}
gotoxy(35,10);
cout<<"TIME:"<<int(t.ti_hour)<<"|"<<int(t.ti_min);
char tname[35];
strcpy(tname,gname);
gotoxy(19,6);
cout<<"HI";
gotoxy(24,6);
cout<<tname;
gotoxy(17,8);
cout<<"LOADING";
gotoxy(25,8);
textbackground(BLACK);
clreol();
gotoxy(50,8);
textbackground(WHITE);
clreol();
delay(500);
gotoxy(25,8);
textbackground(GREEN);
clreol();
gotoxy(28,8);
textbackground(BLACK);
clreol();
gotoxy(50,8);
textbackground(WHITE);
clreol();
delay(500);
gotoxy(28,8);
textbackground(GREEN);
clreol();
gotoxy(30,8);
textbackground(BLACK);
clreol();
gotoxy(50,8);
textbackground(WHITE);
clreol();
delay(500);
gotoxy(30,8);
textbackground(GREEN);
clreol();
gotoxy(35,8);
textbackground(BLACK);
clreol();
gotoxy(50,8);
textbackground(WHITE);
clreol();
delay(500);
gotoxy(35,8);
textbackground(GREEN);
clreol();
gotoxy(50,8);
textbackground(WHITE);
clreol();
delay(500);

}
void display()
{
clrscr();
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"                       ----";
groupc g;
ifstream fin;
fin.open("group.dat",ios::binary|ios::in);
if(!fin)
{
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"                       ----";
gotoxy(1,8);
cout<<" TILL NOW NO MESSAGE RECIVED ";
getch();
}
int r=9;
while(fin.read((char*)&g,sizeof(g)))
{
g.putdata();
r++;
}
getch();
fin.close();
}
void rep()
{
clrscr();
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       delete        chats       SEARCH       accounts          REPORT";
gotoxy(1,5);
cout<<"                                                                    ------";
groupc g;
ifstream fin;
fin.open("chat.dat",ios::binary|ios::in);
if(!fin)
{
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       delete        chats       SEARCH       accounts          REPORT";
gotoxy(1,5);
cout<<"                                                                    ------";
gotoxy(1,9);
cout<<"  NO REPORTS RECIVED ";
}
int r=9;
while(fin.read((char*)&g,sizeof(g)))
{
g.putdata();
r++;
}
getch();
fin.close();
}
void seeall()
{

clrscr();
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       delete        chats       SEARCH       accounts          REPORT";
gotoxy(1,5);
cout<<"                                                  --------";
pass s;
ifstream fin;
fin.open("accr.dat",ios::binary|ios::in);
if(!fin)
{
cout<<" unable to open ";
exit(0);
}
int r=9;
while(fin.read((char*)&s,sizeof(s)))
{
s.putdata( r);
r++;
}
getch();
fin.close(); clrscr();
}
void seealld()
{

clrscr();
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       delete        chats       SEARCH       accounts          REPORT";
gotoxy(1,5);
cout<<"           ------";
pass s;
ifstream fin;
fin.open("accr.dat",ios::binary|ios::in);
if(!fin)
{
cout<<" unable to open ";
exit(0);
}
int r=9;
while(fin.read((char*)&s,sizeof(s)))
{
s.putdata( r);
r++;
}
getch();
fin.close(); clrscr();
}
void pc()
{
clrscr();
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"           ----";
char tname[35],found='n';
groupc g;
pass s;
ifstream fin;
if(!fin)
{
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"           ----";
gotoxy(1,8);
cout<<" NO SUCH ID  IS FOUND";
getch();
}
gotoxy(1,8);
cout<<"ENTER NAME TO SEND MESSAGE";
gotoxy(27,8);
textcolor(WHITE);
textbackground(GREEN);
clreol();
gotoxy(50,8);
textbackground(WHITE);
clreol();
gotoxy(27,8);
gets(tname);
clrscr();
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"           ----";
fin.open("accr.dat",ios::binary|ios::in);
while(fin.read((char*)&s,sizeof(s)))
{
if(strcmp(s.getname(),tname)==0)
{
keypad();
ofstream fout;
strcat(tname,".dat");
fout.open(tname,ios::binary|ios::out|ios::app);
if(!fout)
{
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"           ----";
gotoxy(1,8);
cout<<" NO SUCH ID  IS FOUND";
getch();
}
g.getdata();
fout.write((char*)&g,sizeof(g));
fout.close();clrscr();
found='y';
}
}
if(found=='n')
{
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"           ----";
gotoxy(1,8);
cout<<" NO SUCH ID  IS FOUND";
getch();
}
fin.close();
clrscr();
}
void search()
{
clrscr();
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"                                 ------";
char tname[35],found='n';
groupc g;
pass s;
ifstream fin;
if(!fin)
{
cout<<" !!!!!!!!!!!!!!!!";
exit(0);
}
gotoxy(1,7);
cout<<"SEARCH: ";
gotoxy(9,7);
gets(tname);
clrscr();
fin.open("accr.dat",ios::binary|ios::in);
while(fin.read((char*)&s,sizeof(s)))
{
if(strcmp(s.getname(),tname)==0)
{
s.show();
found='y';
}
}
if(found=='n')
{
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"                                 ------";
gotoxy(1,7);
cout<<"no such record where  found";
getch();
user_slide();
}
fin.close();
}


void asearch()
{
clrscr();
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       delete        chats       SEARCH       accounts          REPORT";
gotoxy(1,5);
cout<<"                                     ------";
char tname[35],found='n';
groupc g;
pass s;
ifstream fin;
if(!fin)
{
cout<<" !!!!!!!!!!!!!!!!";
exit(0);
}
gotoxy(1,7);
cout<<"SEARCH: ";
gotoxy(9,7);
gets(tname);
clrscr();
fin.open("accr.dat",ios::binary|ios::in);
while(fin.read((char*)&s,sizeof(s)))
{
if(strcmp(s.getname(),tname)==0)
{
s.show();
found='y';
}
}
if(found=='n')
{
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       delete        chats       SEARCH       accounts          REPORT";
gotoxy(1,5);
cout<<"                                     ------";
gotoxy(1,7);
cout<<"#NO SUCH RECORD IS FIND";
getch();
admin_slide();
}
fin.close();
}
void se()
{
clrscr();
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"                                 ------";
char tname[35],found='n';
groupc g;
pass s;
ifstream fin;
if(!fin)
{
cout<<" !!!!!!!!!!!!!!!!";
exit(0);
}
gotoxy(1,7);
cout<<"SEARCH: ";
gotoxy(9,7);
gets(tname);
clrscr();
fin.open("accr.dat",ios::binary|ios::in);
while(fin.read((char*)&s,sizeof(s)))
{
if(strcmp(s.getname(),tname)==0)
{
s.show();
found='y';
}
}
if(found=='n')
{
clrscr();
col();
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"                                 ------";
gotoxy(1,7);
cout<<"no such record where  found";
getch();
user_slide();
}
fin.close();
}
void sear()
{
clrscr();
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"                                              ----------";
char tname[35],found='n';
groupc g;
pass s;
ifstream fin;
if(!fin)
{
cout<<" !!!!!!!!!!!!!!!!";
exit(0);
}
gotoxy(15,2);
strcpy(tname,gname);
clrscr();
fin.open("accr.dat",ios::binary|ios::in);
while(!fin.eof())
{
fin.read((char*)&s,sizeof(s));
if(strcmp(s.getname(),tname)==0)
{
s.showl();
found='y';
}
}
if(found=='n')
{
cout<<" \n no suchh record whre  found";
getch();
user_slide();
}
fin.close();
}
void ps()
{
clrscr();
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"                      ----";
groupc g;
pass s;
char tname[35],found='n';
ifstream fin;
strcpy(tname,gname);
if(!fin)
{
cout<<" !!!!!!!!!!!!!!!!";
exit(0);
}
fin.open("accr.dat",ios::binary|ios::in);
while(fin.read((char*)&s,sizeof(s)))
{
if(strcmp(s.getname(),tname)==0)
{
strcat(tname,".dat");
ifstream file;
file.open(tname,ios::binary|ios::in);
if(!file)
{
clrscr();
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"                       ----";
gotoxy(1,10);
cout<<" TILL NOW NO MESSAGES RECIVED ";
getch();
}
int r=9;
while(file.read((char*)&g,sizeof(g)))
{
g.putdata();
r++;
}
getch();
file.close(); clrscr();
found='y';
}
}
if(found=='n')
{
exit(0);
}
fin.close();
}

void pv()
{
clrscr();
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       delete        chats       SEARCH       accounts          REPORT";
gotoxy(1,5);
cout<<"                         ------";
groupc g;
pass s;
char tname[35],found='n';
textcolor(15);
ifstream fin;
gotoxy(12,12);
cout<<"ENTER NAME TO SEE CHAT HISTORY";
gotoxy(42,12);
textbackground(GREEN);
clreol();
gotoxy(62,12);
textbackground(GREEN);
clreol();
gotoxy(62,12);
textbackground(WHITE);
clreol();
gotoxy(42,12);
gets(tname);
clrscr();
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       delete        chats       SEARCH       accounts          REPORT";
gotoxy(1,5);
cout<<"                         ------";
if(!fin)
{
cout<<" !!!!!!!!!!!!!!!!";
exit(0);
}
fin.open("accr.dat",ios::binary|ios::in);
while(fin.read((char*)&s,sizeof(s)))
{
if(strcmp(s.getname(),tname)==0)
{
strcat(tname,".dat");
ifstream file;
file.open(tname,ios::binary|ios::in);
if(!file)
{
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       delete        chats       SEARCH       accounts          REPORT";
gotoxy(1,5);
cout<<"                         -----";
gotoxy(1,7);
cout<<"   TILL NOW NO MESSAGES  ";
getch();
}
int r=9;
while(file.read((char*)&g,sizeof(g)))
{
g.putdata();
r++;
}
getch();
file.close(); clrscr();
found='y';
}
}
if(found=='n')
{
exit(0);
}
fin.close();
}
void see()
{
clrscr();
int ch;
do
{
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"                      ----";
gotoxy(16,9);
cout<<"                   1# GROUPBOX";
gotoxy(16,10);
cout<<"                   2# CHATBOX";
gotoxy(16,11);
cout<<"                   3# HOME";
gotoxy(16,15);
cout<<"Enter your choice:";
cin>>ch;
switch(ch)
{
case 1:display();clrscr();col();break;
case 2:ps();clrscr();col();break;
case 3:user_slide();
}
}while(ch!=3);
}
void text()
{
clrscr();
col();
int ch;
do
{
col();
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"           ----";
gotoxy(16,9);
cout<<"                   1# GROUPIN";
gotoxy(16,10);
cout<<"                   2# CHATIN";
gotoxy(16,11);
cout<<"                   3# HOME";
gotoxy(16,15);
cout<<"Enter your choice:";
cin>>ch;
switch(ch)
{
case 1:insert();col();display();clrscr();col();break;
case 2:pc(); getch();break;
case 3:user_slide();
}
}while(ch!=3);
}
void search();
void user_slide()
{
clrscr();
col();
int ch;
struct  time t;
gettime(&t);
struct date d;
getdate(&d);
do
{
gotoxy(1,1);
cout<<"iHAPPY MESSENGER ";
gotoxy(1,4);
cout<<"HOME       TEXT        SEE       SEARCH       MY PROFILE      EDIT     REPORT";
gotoxy(1,5);
cout<<"----";
gotoxy(16,9);
cout<<"                   1# TEXT";
gotoxy(16,10);
cout<<"                   2# SEE";
gotoxy(16,11);
cout<<"                   3# Search FRIEND";
gotoxy(16,12);
cout<<"                   4# My PROFILE";
gotoxy(16,13);
cout<<"                   5# DEACTIVATE";
gotoxy(16,14);
cout<<"                   6# EDIT MY PROFILE";
gotoxy(16,15);
cout<<"                   7# REPORT";
gotoxy(16,16);
cout<<"                   8# Log OUT";
gotoxy(16,18);
cout<<"Enter your choice:";
cin>>ch;
switch(ch)
{
case 1:text();getch();clrscr();
break;
case 2:see();getch();clrscr();
break;
case 3:search();getch();clrscr();col();
break;
case 4:sear();getch();clrscr();col();
break;
case 5:if(deactive()==2)
	       getch();clrscr();col();break;
case 6:accountmodify();getch();clrscr();
break;
case 7:report();getch();clrscr();col();
break;
case 8:main_slide();
}
}while(ch!=8);
}
