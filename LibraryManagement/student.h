/*
 * student.h
 *
 *  Created on: Aug 9, 2013
 *      Author: nirav.chotai
 */
//Header file for Student Class

#ifndef STUDENT_H_
#define STUDENT_H_

#include<iostream>
using namespace std;

class student
{
	char admno[6];
	char name[20];
	char stbno[6];
	int token;
public:
	void create_student();
	void show_student();
	void modify_student();

	char* retadmno();
	char* retstbno();

	int rettoken() const;

	void addtoken();
	void resettoken();
	void getstbno(char t[]);
	void report();

};

#endif /* STUDENT_H_ */
