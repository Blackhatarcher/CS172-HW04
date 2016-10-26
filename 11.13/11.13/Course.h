#pragma once
#include <string>
using namespace std;
class Course
{
private:
	int capacity;
	int numberOfStudents;
	string* students;
	string courseName;

public:
	int getNumberOfStudents()const;
	string* getStudents() const;
	void addStudent(const string &name);
	void dropStudent(const string &name);
	string getCourseName() const;
	Course(const string &courseName,int capacity);
	~Course();
	void clear();
};

