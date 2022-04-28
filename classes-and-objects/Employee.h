#pragma once
#include<iostream>
#include<string>

using namespace std;

class Employee {

public:

   Employee() {
      cout << endl << "+ Call the empty constructor" << endl;

      this->name = "undefined";
      this->age = -1;
      this->experience = -1;

      cout << toString() << endl << endl;
   }

   Employee(const char* name, int age, int experience) {
      cout << endl << "+ Call the constructor with params" << endl;

      this->name = name;
      this->age = age;
      this->experience = experience;

      cout << toString() << endl << endl;
   }

   Employee(Employee& employee) {
      cout << endl << "+ Call the copy constructor" << endl;

      this->name = employee.getName();
      this->age = employee.getAge();
      this->experience = employee.getExperience();

      cout << toString() << endl << endl;
   }

   ~Employee() {
      delete[] name;

      cout << "+ Call the destructor" << endl;
   }

   void setName(const char* name) {
      this->name = name;

      cout << "  - Call the [name] field setter" << endl;
   }

   const char* getName() {
      cout << "  - Call the [name] field getter" << endl;

      return this->name;
   }

   void setAge(int age) {
      this->age = age;

      cout << "  - Call the [age] field setter" << endl;
   }

   int getAge() {
      cout << "  - Call the [age] field getter" << endl;

      return this->age;
   }

   void setExperience(int experience) {
      this->experience = experience;

      cout << "  - Call the [experience] field setter" << endl;
   }

   int getExperience() {
      cout << "  - Call the [experience] field getter" << endl;

      return this->experience;
   }

   string toString() {
      string dump =
         "Employee: {\n";
      dump += "  name: " + (string)this->name + ",\n";
      dump += "  age: " + to_string(this->age) + ",\n";
      dump += "  experience: " + to_string(this->experience) + ",\n";
      dump += "}";

      return dump;
   }

private:

   const char* name;
   int age;
   int experience;

};
