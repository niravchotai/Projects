/*
 * book.cpp
 *
 *  Created on: Aug 15, 2013
 *      Author: nirav.chotai
 */
//Implementation file for book class

#include<fstream>
#include<iostream>
#include<cstdio>
#include<string>
#include<iomanip>
#include "book.h"
using namespace std;

void book::create_book()
{
		cout<<"\nNEW BOOK ENTRY...\n";
		cout<<"\nEnter The book no.";
		cin>>bno;
		cout<<"\n\nEnter The Name of The Book ";
		cin.ignore();
		cin.getline(bname,50);
		//gets(bname);
		cout<<"\n\nEnter The Author's Name ";
		gets(aname);
		cout<<"\n\n\nBook Created..";
}

void book::show_book()
{
		cout<<"\nBook no. : "<<bno;
		cout<<"\nBook Name : ";
		puts(bname);
		cout<<"Author Name : ";
		puts(aname);
}

void book::modify_book()
{
		cout<<"\nBook no. : "<<bno;
		cout<<"\nModify Book Name : ";
		cin.ignore();
		cin.getline(bname,50);
		//gets(bname);
		cout<<"\nModify Author's Name of Book : ";
		gets(aname);
}

char* book::retbno()
{
		return bno;
}

void book::report()
{
	cout << bno << setw(30) << bname << setw(30) << aname << endl;
}


