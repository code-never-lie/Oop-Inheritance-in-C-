Inheraitance (extension)

- child inherits its parent
- Subclass can use all features of its super class
- Parent should exist for inheritance

Advantage
- Extension 
   child class extends the functionality of its     parent
- Reusability
   we can reuse already existing class with new Functionly 

e.g                  Calculator
    ScientificCal                  BusinessCaL
.................................................
#include <iostream.h>
class Calculator{
public :
  void add() { cout<<"add "<<endl;}
  void sub() { cout<<"sub "<<endl;}

};

class ScCalculator:public Calculator{
public :
  void sq() { cout<<"sq "<<endl;}
  void power() { cout<<"power "<<endl;}

};
void main () {
Calculator c;
c.add();
c.sub();
ScCalculator ob;
ob.add();
ob.sub();
ob.sq();
ob.power();

}
..........................................................
 Same example with constructor and destructors
#include <iostream.h>
class Calculator{
public :
  Calculator() { cout<<"Calculator created "<<endl;}
  ~Calculator() { cout<<"Calculator expired "<<endl;}
  void add() { cout<<"add "<<endl;}
  void sub() { cout<<"sub "<<endl;}

};

class ScCalculator:public Calculator{
public :
  ScCalculator() { cout<<"ScCalculator created "<<endl;}
  ~ScCalculator() { cout<<"ScCalculator expired "<<endl;}
  void sq() { cout<<"sq "<<endl;}
  void power() { cout<<"power "<<endl;}

};
void main () {
ScCalculator ob;
ob.add();
ob.sub();
ob.sq();
ob.power();

}
......................................................


e.g 
Example with data
                 Person(id,name)

 Student(marks,grade())        Teacher(salary,tax())
(UML Diagram on Board)
// constructor excution top to bottom
class Person{
private :
int id;
char name[20];
public:
  Person() {cout<<"Person Created"<<endl; }
  Person(int d, char n[]) {
    id=d;
    strcpy(name,n);
  cout<<"Person Created"<<endl;
 }
void setName(char n[]) { strcpy(name,n);}
void setId(int d ) { id=d;}
int getId() { return id;}
char * getName(){return name;} 

};
class Student :public Person{
private:
int marks;
public :
Student () { cout<<"Student Created"<<endl;}
Student (int d,char n[],int m):Person(d,n)
{ marks=m; 
cout<<"Student Created"<<endl; }
void setMarks(int m) {marks=m;}
int getMarks() {return marks;}
char grade() {
char g;
if (marks>=80)
   g='A';
else if (marks>=70)
   g='B';
else if (marks>=60)
   g='c';
else if (marks>=50)
   g='D';
else
   g='F';
return g;
}
};
// same for teacher class
void main () {
Student ob(10,"Imran",80);
cout<<ob.getId()<<ob.getName()<<ob.getMarks()<<ob.grade()<<endl;

}
.............................................................
e.g Extend student class as BS and MS students
                Person(id,name)

 Student(marks,grade())        Teacher(salary,tax())

   
BSStudent(project)     MsStudent(Thesis)

(UML Diagram on Board)

class Person{
private :
int id;
char name[20];
public:
  Person() {cout<<"Person Created"<<endl; }
  Person(int d, char n[]) {
    id=d;
    strcpy(name,n);
  cout<<"Person Created"<<endl;
 }
void setName(char n[]) { strcpy(name,n);}
void setId(int d ) { id=d;}
int getId() { return id;}
char * getName(){return name;} 

};
class Student :public Person{
private:
int marks;
public :
Student () { cout<<"Student Created"<<endl;}
Student (int d,char n[],int m):Person(d,n)
{ marks=m; 
cout<<"Student Created"<<endl; }
void setMarks(int m) {marks=m;}
int getMarks() {return marks;}
char grade() {
char g;
if (marks>=80)
   g='A';
else if (marks>=70)
   g='B';
else if (marks>=60)
   g='c';
else if (marks>=50)
   g='D';
else
   g='F';
return g;
}
};
class BsStudent:public Student{
private:
char project[200];
public:
BsStudent ( ) {
cout<<"BS Student Created"<<endl;
}
BsStudent(int d, char n[],int m,char p[]):Student(d,n,m)
  {
strcpy(project,p);
cout<<"BS Student Created"<<endl;
}

void setProject(char p[]){strcpy(project,p);}
char * getProject() { return project;}
};

void main () {
BsStudent ob (10,"Imran",80,"Graphics Game");
cout<<ob.getId()<<ob.getName()<<ob.getMarks()<<ob.grade()<<endl;
cout<<ob.getProject()<<endl;
}
..........................................................

Mixture of Composition and Inheritance

e.g Car must have Engine, Tyre,Body
HondaCivic extends the concept of car with digital meter
(see class diagram on board)
class Engine{
public :
    Engine() {
        cout<<"Engine created"<<endl;
    }
  void start() {
   cout<<"Engine Started 1800 hrspower"<<endl;
  }

};
class Tyre{
public :
    Tyre() {
        cout<<"Tyre  created"<<endl;
    }
  void size() {
   cout<<"Tyre Size is 17 inch"<<endl;
  }

};
class Body{
public :
    Body() {
        cout<<"Body  created"<<endl;
    }
  void type() {
cout<<"Body type is saloon color is white"<<endl;
  }

};
class Car {
private:
Engine e;
Body b;
Tyre t;
public :
  Car () {
   cout<<"Car  created"<<endl;
 }
void printSpecification(){
   e.start();
   b.type();
   t.size();
}
};
class HondaCivic:public Car{
private:
int digitalMeter;
public:
 HondaCivic() {
  cout<<"Honda Civic Created"<<endl;}

HondaCivic(int p ) {
  digitalMeter=p;
  cout<<"Honda Civic Created"<<endl;}
void printHondaSpecification(){
  printSpecification();
  cout<<digitalMeter<<endl;

}

};

void main (){

HondaCivic civic(300);
civic.printHondaSpecification();

}
............................................................











 
