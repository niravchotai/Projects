/*
 * resume.cpp
 *
 *  Created on: Aug 15, 2013
 *      Author: nirav.chotai
 */
/*   This Program Will Make Your Curriculam Vitae Within 2 Minutes
	 And Save Your File With Html Extension.
	 You can enhance this to meet your expectations.
*/

#include<fstream>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<process.h>
using namespace std;

int main()
{
	char name[30], file[30], *blank=".html";
	char temp[200], ch;
	int num=0, len,i, line=1;

	cout<<"Enter Name Of The Database : ";
	gets(name);

	strcpy(file,name);
	strcat(file,blank);
	ofstream fout(file);

	if(!fout)
	{
		cout<<"Error In Making Of A File :";
		return 1;
	}

	fout<<"<html>";
	fout<<"<blockqoute>";
	fout<<"<center>";

	fout<<"<b><h1><u>"<<"CURRICULAM VITAE"<<"</h1></b></u>";
	fout<<"</center>";

	cout<<"Enter Your Name : ";
	gets(temp);
	strcpy(name,temp);
	fout<<"<br><h2>"<<temp<<"<br>";

	cout<<"Enter Your Address : ";
	gets(temp);

	len=strlen(temp);
	for(i=0;i<len;i++)
	{
		ch=temp[i];
		if(ch==' ')
		{
			num++;
			if(num==3)
			{
				fout<<"<br>";
				num=0;
			}
			fout<<ch;
		}
		fout<<ch;
	}

	cout<<"Enter Your Contact Number : ";
	gets(temp);
	fout<<"<br>Contact No : "<<temp<<"<br><br><br>";

	cout<<"Enter Your Objective : ";
	gets(temp);
	fout<<"<u>Objective : </u>";

	len=strlen(temp);
	for(i=0;i<len;i++)
	{
		ch=temp[i];
		if(ch==' ')
		{
			num++;
			if(num==12)
			{
				fout<<"<br>";
				num=0;
			}
			fout<<ch;
		}
		fout<<ch;
	}

	num=0;
	fout<<"<br><br>";
	cout<<"Enter Your Academic Record :";
	fout<<"<u>Academic Record  </u><br>";
	do
	{
		x:cout<<""<<line<<". ";
		gets(temp);
		len=strlen(temp);
		fout<<"<li>";
		for(i=0;i<len;i++)
		{
			ch=temp[i];

			if(ch==' ')
			{
				num++;
				if(num==8)
				{
					fout<<"<br>  ";
					num=0;
				}
				fout<<ch;
			}
			fout<<ch;
		}
		cout<<"If you Want To Add More Information Press * Sign Or Quit To $:";
		cin>>ch;
		line++;
		num=0;
		if(ch=='*')goto x;
	}while(ch!='$');

	line=1;
	num=0;
	cout<<"Enter Your Hobbies : ";
	cin.ignore();
	cin.getline(temp,100);
	//gets(temp);
	fout<<"<br><br><u>Hobbies : </u>"<<temp;

	cout<<"Languages Known : ";
	cin.ignore();
	cin.getline(temp,100);
	//gets(temp);
	fout<<"<br><br><u>Languages Known : </u>"<<temp;

	cout<<"Enter Your Experience :";
	cout<<"If You Want To Bypass This Information Press $ Sign Or Any Other Key To Continue : ";
	cin>>ch;
	if(ch=='$')
	{
		goto a;
	}
	else
	{
		fout<<"<br><br><u>Experience  </u>";
		do
		{
			y:cout<<""<<line<<". ";
			gets(temp);
			len=strlen(temp);
			fout<<"<li>";
			for(i=0;i<len;i++)
			{
				ch=temp[i];

				if(ch==' ')
				{
					num++;
					if(num==8)
					{
						fout<<"<br>  ";
						num=0;
					}
					fout<<ch;
				}
				fout<<ch;
			}
			cout<<"If you Want To Add More Information Press A * sign Or Quit To $ : ";
			cin>>ch;
			line++;
			num=0;
			if(ch=='*')goto y;
		}while(ch!='$');
	}

	line=1;
	num=0;
    a:cout<<"Technical Skills  :";
	cout<<"If You Want To Bypass This Information Press $ Sign Or Any Other Key To Continue : ";
	cin>>ch;
	if(ch=='$')
	{
		goto b;
	}
	else
	{
		fout<<"<br><br><u>Technical Skills </u><br>";
		do
		{
			z:cout<<""<<line<<". ";
			gets(temp);
			len=strlen(temp);
			fout<<"<li>";
			for(i=0;i<len;i++)
			{
				ch=temp[i];

				if(ch==' ')
				{
					num++;
					if(num==8)
					{
						fout<<"<br>  ";
						num=0;
					}
					fout<<ch;
				}
				fout<<ch;
			}
			cout<<"If you Want To Add More Information Press A * sign Or Quit To $ ";
			cin>>ch;
			line++;
			num=0;
			if(ch=='*')goto z;
		}while(ch!='$');
	}

	line=1;
	num=0;
    b:cout<<"In The End Enter Your Personal Details : ";

	fout<<"<br><br><u>Personal Details </u><br><br> ";

	cout<<"\nFathers Name : ";
	cin.ignore();
	cin.getline(temp,50);
	//gets(temp);
	fout<<"Fathers Name :   "<<temp;

	cout<<"Enter Date Of Birth : ";
	cin.ignore();
	cin.getline(temp,50);
	//gets(temp);
	fout<<"<br>Date Of Birth :    "<<temp;

	cout<<"Enter Martial Status :";
	gets(temp);
	fout<<"<br>Martial Status :   "<<temp;

	cout<<"Sex :";
	gets(temp);
	fout<<"<br>Sex :            &nbsp;        "<<temp;

	cout<<"Permanent Address : ";
	fout<<"<br>Permanent Address : ";
	fout<<"<blockqoute><dl><dd>";
	gets(temp);

	len=strlen(temp);
	for(i=0;i<len;i++)
	{
		ch=temp[i];
		if(ch==' ')
		{
			num++;
			if(num==3)
			{
				fout<<"<dd>";
				num=0;
			}
			fout<<ch;
		}
		fout<<ch;
	}


	fout<<"</dl></blockqoute>";
	fout<<"<hr>";

	fout<<"Date : Aug 2013";

	fout<<"<br>Place : Ahmedabad";
	fout<<"<h2 align=right>("<<name<<")</h2>";
	fout<<"</blockqoute>";
	fout<<"</html>";
	cout<<"End Of Your CV Press Any Key To Continue : ";
	cin.get();
	fout.close();
	return 0;
}



