/*
 * book.h
 *  Created on: Aug 9, 2013
 *      Author: nirav.chotai
 */
//Header file for Book Class

#ifndef BOOK_H_
#define BOOK_H_

#include<iostream>
using namespace std;


class book
{
	char bno[6];
	char bname[50];
	char aname[20];
public:
	void create_book();
	void show_book();
	void modify_book();

	char* retbno();

	void report();
};

#endif /* BOOK_H_ */
