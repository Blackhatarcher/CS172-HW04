// 11.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <iomanip>

using namespace std;
int main()
{
	bool playing = true;
	while (playing)
	{
		//for 11.1
		//create a pointer to a space in memory that can hold an array of size size
		int size;
		cout << "Enter the size of an array" << endl;
		cin >> size;
		int* array = new int[size];
		//reads values into the array
		for (int i = 0; i < size; i++) {
			cout << "Enter the value for array[" << i << "]" << endl;
			cin >> array[i];
		}
		int sum = 0;
		for (int k = 0; k < size; k++)
		{
			sum += array[k];
		}
		//get the average
		double average = sum / size;
		cout << "The average is " << average << endl;

		//find out how many values are greater than average
		int num_greater = 0;
		for (int z = 0; z < size; z++) {
			if (int(array[z]) > average) {
				num_greater++;
			}
		}
		cout << "There are " << num_greater << " number(s) above average" << endl;


		//all the deletes
		delete array;


		int finalanswer = 0;
		cout << "Enter 1 to exit" << endl;
		cin >> finalanswer;
		if (finalanswer == 1) {
			playing = false;
		}
	}


	return 0;
}



