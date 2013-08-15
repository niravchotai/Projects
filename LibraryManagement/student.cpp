/*
 * student.cpp
 *
 *  Created on: Aug 15, 2013
 *      Author: nirav.chotai
 */
//Implementation file for Student class

#include<fstream>
#include<iostream>
#include<cstdio>
#include<cstring>
#include<iomanip>
#include "book.h"
#include "student.h"
using namespace std;

void student::create_student()
{
 	cout<<"\nNEW STUDENT ENTRY...\n";
	cout<<"\nEnter The admission no. ";
	cin>>admno;
	cout<<"\n\nEnter The Name of The Student ";
	cin.ignore();
	cin.getline(name,50);
	//gets(name);
	token=0;
	stbno[0]='/0';
	cout<<"\n\nStudent Record Created..";
}

void student::show_student()
{
	cout<<"\nAdmission no. : "<<admno;
	cout<<"\nStudent Name : ";
	puts(name);
	cout<<"\nNo of Book issued : "<<token;
	if(token==1)
		cout<<"\nBook No "<<stbno;
}

void student::modify_student()
{
	cout<<"\nAdmission no. : "<<admno;
	cout<<"\nModify Student Name : ";
	cin.ignore();
	cin.getline(name,50);
	//gets(name);
}

char* student::retadmno()
{
	return admno;
}

char* student::retstbno()
{
	return stbno;
}

int student::rettoken() const
{
	return token;
}

void student::addtoken()
{
	token=1;
}

void student::resettoken()
{
	token=0;
}

void student::getstbno(char t[])
{
	strcpy(stbno, t);
}

void student::report()
{
	cout<<"\t"<<admno<<setw(20)<<name<<setw(10)<<token<<endl;
}



