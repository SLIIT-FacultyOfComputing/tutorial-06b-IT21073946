#include "Student.h"
#include <iostream>
#include <string.h>
using namespace std;

// Assign studentId and name
Student::assignDetails(int astudent,char aname[20]) 
{
   student = astudent;
   strcpy(name,aname); 
}

// Display StudentId and Name
Student::display() 
{
  cout << "student id:" << astudent << endl  ;
  cout << "student name" << aname << endl;
}
