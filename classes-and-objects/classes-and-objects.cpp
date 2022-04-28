#include <iostream>
#include <string>
#include "Employee.h"
#include "Triangle.h"

using namespace std;

int main()
{
   cout << "Employee class lyfecycle:" << endl;

   Employee* empty = new Employee();
   Employee* defined = new Employee("John Smith", 30, 5);

   defined->setName("copy of the John Smith object");
   defined->setAge(40);
   defined->setExperience(15);

   Employee* copy = new Employee(*defined);

   cout << "End of the program" << endl;

   cout << "Triangle class lyfecycle:" << endl;

   Triangle* emptyTrinagle = new Triangle();
   Triangle* definedTrinagle = new Triangle(5, 5, 5);

   definedTrinagle->setA(15);
   definedTrinagle->setB(53);
   definedTrinagle->setC(63);

   Triangle* copyTriangle = new Triangle(*definedTrinagle);

   cout << "End of the program" << endl;
}

