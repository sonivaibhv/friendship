// FRIENDSHIP METER made by :-
//VAIBHAV SONI//
#include<iostream>
#include<stdio>
#include<string>
void main()
{
System("cls");
char name1[40],name2[40],i,d;
int c,calculator,k;
textbackground(GREEN);
textcolor(RED);
printf("Created By:- Vaibhav Soni");
do
{
// This is the menu of this program
clrscr();
cout<<"\n                      //FRIEND SHIP METER V 5.0.3//";
cout<<"\n                               BY";
cout<<"\n                                VAIBHAV ";
cout<<"\n                                SONI ";
cout<<"\n\n                          --------";
cout<<"\n                          | MENU |";
cout<<"\n                          | ==== |";
cout<<"\n                        ------------";
cout<<"\n                        |1. | START|";
cout<<"\n                        |2. | HELP |";
cout<<"\n                        |3. | INFO |";
cout<<"\n                        |4. | ABOUT|";
cout<<"\n                        |5. | EXIT |";
cout<<"\n                        ------------\n";
cin>>c;
switch(c)
{
case 1:
do
{
clrscr();
cout<<"       [Friendship Meter]";
cout<<"\n\n\n ENTER YOUR NAME \t";
gets(name1);
cout<<"\n\n\n ENTER YOUR FRIEND NAME \t ";
gets(name2);
//Here the calculation is done
randomize();
calculator=random(60)+40;
//Here the percentages are printed
cout<<"\n\nfriendship between "<<name2<<" and "<<name1<<"is "<<calculator<<"%";
cout<<"\n\n\n do you want to match your friendship again(y/n)";
cin>>d;
i++;
}while(d!='n');
break;
case 2:
clrscr();
//Help of friendship meter
cout<<"\n    [FRIENDSHIP METER HELP]";
cout<<"\n 1. Choose the option 1 from menu";
cout<<"\n 2. Follow the instruction coming on your computer screen";
cout<<"\n\n  ANY QUESTIONS @:";
cout<<"\n vaibhv.soni1001@gmail.com";
cout<<"\n\n  Facbook ID is:vaibhv soni";
cout<<"\n -Search By :";
cout<<"\n vaibhv.soni1001@gmail.com";
cout<<"\n\n ACKNOWLEDGEMENTS :";
cout<<"\n ~I Thank the most benificient 'GOD' for everything.";

break;
case 3:
//Here the information is given about the friendship meter and the person who created
clrscr();
cout<<"\n [FRIENDSHIP METER]";
cout<<"\n\n BUILD :";
cout<<"\n 19 July 2015";
cout<<"\n\n COPYRIGHT (c) :";
cout<<"\n Vaibhav Soni ";
cout<<"\n\n E-MAIL";
cout<<"\n Vaibhv.soni1001@gmail.com";
break;
case 4:
clrscr();
//It is about the developer of this program
cout<<"\n CREATED BY : ";
cout<<"\n VAIBHAV SONI";
cout<<"\n users can contact with me on Facebook ID Vaibhav Soni";
cout<<"\n and can also search with E-mail ID Vaibhv.soni1001@gmail.com";
break;
case 5:
clrscr();
cout<<"\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
cout<<"\n\n     THANKYOU FOR SHARING YOUR FRIENDSHIP NAME ";
cout<<"\n                         WITH ME ";
cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
break;
}
cout<<"\n\nPRESS '5' FOR EXIT";
cout<<"\n PRESS '0' TO GO BACK TO MAIN MENU";
cin>>k;
}while(k==0);
getch();
}
