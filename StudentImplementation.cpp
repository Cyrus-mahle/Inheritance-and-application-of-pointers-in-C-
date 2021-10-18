#include<iostream>
#include"Student.h"
using namespace std;

/*
lets write the definitions of member functions
of the class Student
*/
Student::Student(){ // default constructor
	firstName="";
    lastName="";
 	studentNumber=0;	
}
void Student::setStudent(string firstName,string lastName,int studentNumber){
	this->firstName=firstName;
    this->lastName=lastName;
 	this->studentNumber=studentNumber;	
}
Student::Student(string firstName,string lastName,int studentNumber){
	setStudent(firstName,lastName,studentNumber);
	print();
}
string Student::getFirstName()const{
    return firstName;
}
string Student::getLastName()const{
  return lastName;
}
int Student::getStudentNumber()const{
  return studentNumber;
}

void Student::print()const{
    cout<<"Student Details:"<<endl<<endl;
    cout<<"FirstName : "<<getFirstName()<<endl;
    cout<<"LastName  : "<<getLastName()<<endl;
    cout<<"Student number : "<<getStudentNumber()<<endl;
}

