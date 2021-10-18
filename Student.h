/*
Hello guys This Tutorial is about introduction to inheritance
This is a part 3 for introduction on inheritance::by Nyakama
Mahle
  
*Inheritance refers to the process of 
*getting property of one class to another class.
*In other words inheritance refers to the process
*deriving a new class class from an old class.
*New formed class is called a derived ,child or sub-class.
*Old class class is called a base,parent or super-class

*When a class B inherits all the properties of class A
*That means class B can access all the member variables 
*and member functions except for private members

*Types of inheritance 
 1.Single inheritance 
 2.Multiple inheritance 
 3.Multilevel inheritance
 4.hierachical inheritance
 5.hybrid inheritance 
 
 *in this video we will talk about single and multilevel
 *inheritance.
 *Single Inheritance:
 *Single Inheritance refers to inheritance where
 *there are only two classes base class and derived
 *class.
 *Multilevel Inheritance:refers to the inheritance
 *where single class class inherit properties
 *from 2 or more classes
 
 *Advantages of inheritance:
 1.Code reuse:
  function inside base class can be shared by all all
  derived classes ,without repeating definotion
 2.Time Saving:
  we dont have to write the definitions of the 
  inherited members again
 3.less cost:
  because the existing program is reused
  that leads us to less development and maintaince costs
 4.Reduces code redundancy:
  Now that your code has less definitions and is divided
  into muliple code,it is clean and easy to spot errors
  
 *public inheritane(More common):
  -public members of the base class become
   public members of the derived class.
  -private members of the base class become private
   members of a derived class
   
*The are powerful operations in inheritance like
*function Overloading:
If I have function person(string,string) in the base class
class and then in the derived class you have also have function
person but with additional paramter of any type
person(string,string,double) this is function 
overloading

*function Overriding(redefining):
If I have function person(string,string) in the base class
class and then in the  derived class you also have the same
function person but with same name,return type,type and 
number of paramters
person(string,string) this is function overriding
    
*/

/*
*********************************************************
* Author:Nyakama Mahle Cyrus                            *
* Programming Language:C++ (Inheritance)                *
*********************************************************
*/

 /*
 *Problem:
 *Lets say you want time create a class Tutor but you dont.
 *have time ,earlier you created a class student
  With member variables:
  firstName;
  lastName;
  studentNumber;
  member functions:
  setStudent
  getFirstName;
  getLastName;
  getStudentNumber;
  print
  
 *Inheritance apply in problems like these.
 
 *Inheritance emphasize the concept of is-a relationship.
 *because tutor is also a student but with additional members
 *hours and salaryPerHour
 
 
 *will write the program in this tutorial dont forget
 *to subscribe and like  thank you.
 
 */
 #include<iostream>
 using namespace std;
 class Student{
 	private:
 		string firstName;
 		string lastName;
 		int studentNumber;
 	public:
 		Student();
 		Student(string,string,int);
 		void setStudent(string,string,int);
 		string getFirstName()const;
 		string getLastName()const;
 		int getStudentNumber()const;
 		void print()const;
 	
 };
 
 // Student is the parent class
 
 
