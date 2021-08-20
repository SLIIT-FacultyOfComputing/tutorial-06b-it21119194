#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

void Student :: assignDetails(int stdID,const  char stdName[]){

  studentId=stdID;
  strcpy(name,stdName);

}

void Student :: display(){

  cout << "Student name is "<< name<< endl;
  cout << "Student ID is "<< studentId <<endl;

}