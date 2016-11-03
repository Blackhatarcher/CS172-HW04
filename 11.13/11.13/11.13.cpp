// 11.13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <iomanip>
#include "Course.h"
using namespace std;

//don't know how to use the destructor and nor do I know what a deep copy is
int main()
{
	bool playing = true;
	while (playing)
	{
		Course course ("French",10);
		course.addStudent("Harry");
		course.addStudent("Ron");
		course.addStudent("Hermione");
		course.dropStudent("Ron");//because he fails classes
		cout << "Students left are " << endl;
		//haha almost fell for that! I need to loop
		for (int i = 0; i < course.getNumberOfStudents(); i++) {
		cout << course.getStudent(i)<< endl;
		}


		int finalanswer = 0;
		cout << "Enter 1 to exit" << endl;
		cin >> finalanswer;
		if (finalanswer == 1) {
			playing = false;
		}
	}


	return 0;
}


