#include "stdafx.h"
#include "Course.h"
#include <iostream>

Course::Course(const string &courseName,int capacity){
	numberOfStudents = 0;
	this->courseName = courseName;
	this-> capacity = capacity;
	students = new string[capacity];
}
Course::~Course(){
	delete[] students;
}
string Course::getCourseName() const {
	return courseName;
}
void Course::addStudent(const string& name) {
	students[numberOfStudents] = name;
	numberOfStudents++;
}
void Course::dropStudent(const string& name) {
	//nead to create a new students array
	//and populate it with all the old students but not the dropped student
	//and set students to the new stduents array
	string* newstudents = new string[numberOfStudents - 1];
	for (int i = 0; i < numberOfStudents; i++) {
		if (students[i] != name) {
			newstudents[i] = students[i];
		}
	}
	//and reduce number of students
	numberOfStudents--;
	students = newstudents;
	//then delete newstudents
	delete[] newstudents;
}
string* Course::getStudents() const{
	return students;
}
int Course::getNumberOfStudents()const {
	return numberOfStudents;
}

void Course::clear() {
	//just reset students to be empty and number of students to 0
	string* newstudents = new string[capacity];
	numberOfStudents = 0;
	students = newstudents;
	delete[] newstudents;
}
