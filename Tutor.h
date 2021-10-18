/*

**********************************************************
*Author:Nyakama Mahle Cyrus                              *
*Date  :18/10/2021                                       *
*Programming Language :C++ Inheritance and application of*
*pointers                                                *
**********************************************************
class Tutor inherits properties of class Student
class Tutor is derived class from base class Student


*/
/*
Syntax for inheritance:

class DerivedclassName:access specifier base ClassName 


*/
#include<iostream>
#include"Student.h"
using namespace std;


class Tutor:public Student{
	private:
	int hrs;
	double salaryPerHr;
	public:
		// function overloading
		void setStudent(string,string,int,int,double);
		Tutor(string,string,int,int,double);
		//declare get functions or accessor functions
		int getHrs()const;
		double getSalaryPerHr()const;
		// function overriding
		void print()const;
		Tutor();
};
