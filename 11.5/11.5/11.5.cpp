// 11.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <iomanip>
using namespace std;
int FindSmallest(int* list, int s) {
	int num = 0;
	return num;
}
int main()
{
	bool playing = true;
	while (playing)
	{
		int size = 8;
		int* array = new int[size];
		int nums[8]= {1,2,4,5,10,100,2,-22};
		for (int i = 0; i < size; i++)
		{
			array[i] = nums[i];
		}
		//debugging
		for (int i = 0; i < size; i++)
		{
			cout << array[i] << endl;
		}
		int smallest = FindSmallest(array, size);

		int finalanswer = 0;
		cout << "Enter 1 to exit" << endl;
		cin >> finalanswer;
		if (finalanswer == 1) {
			playing = false;
		}
		delete array;
	}


	return 0;
}


