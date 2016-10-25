// 11.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <iomanip>
using namespace std;


int* doubleCapacity(const int* list, int size) {
	//create the new array that will be returned
	int* newlist = new int[size * 2];
	//populate list into newlist
	for (int i = 0; i < size; i++) {
		newlist[i] = list[i];
	}
	//and I think I wanna delete the old list
	delete list;
	//I don't delete the newlist becuase I need to return it 
	//presumably it will get deleted later on in the program
	return newlist;
}

int main()
{
	bool playing = true;
	while (playing)
	{
		//for 11.3


		int finalanswer = 0;
		cout << "Enter 1 to exit" << endl;
		cin >> finalanswer;
		if (finalanswer == 1) {
			playing = false;
		}
	}


	return 0;
}



