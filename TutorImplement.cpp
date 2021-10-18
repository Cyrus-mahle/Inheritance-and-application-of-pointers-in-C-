#include<iostream>
#include"Tutor.h"
using namespace std;

/***********************************************************/
/********Implementation of a derived class Tutor***********/
Tutor::Tutor(string firstName,string lastName,int studentNumber,int hrs,double salaryPerHr)
:Student(firstName,lastName,studentNumber)// definition of Student constructor
{
  this->hrs=hrs; // pointers
  this->salaryPerHr=salaryPerHr;// pointers
  print();
}
void Tutor::setStudent(string firstName,string lastName,int studentNumber,int hrs,double salaryPerHr){
 Student::setStudent(firstName,lastName,studentNumber);
 this->hrs=hrs;
 this->salaryPerHr=salaryPerHr;
}
int Tutor::getHrs()const{
    return hrs;
}

double Tutor::getSalaryPerHr()const{
   return salaryPerHr;
}

void Tutor::print()const{
    Student::print();// define print function of Student
    cout<<"Tutor :";
    cout<<"hours worked by Tutor :"<<getHrs()<<" hours"<<endl;
    cout<<"Salary per hour : R"<<getSalaryPerHr()<<endl;
}

Tutor::Tutor(){
  hrs=0;
  salaryPerHr=0.0;	
}

