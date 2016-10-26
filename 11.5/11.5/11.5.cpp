// 11.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <iomanip>
using namespace std;
int FindSmallest(int list[], int s) {
	//create a temp
	int *temp = new int;
	//set temp to the first value in array
	*temp = list[1];
	//loop through array to find values less than temp
	for (int i = 0; i < s; i++) {
		if (list[i] < *temp) {
			*temp = list[i];
		}
	}
	return *temp;
}
int main()
{
	bool playing = true;
	while (playing)
	{
		int size = 8;
		int nums[8]= {1,2,4,5,10,100,2,-22};
		//int* array = nums;
		cout<< "The smallest is " << FindSmallest(nums, size) << endl;

		int finalanswer = 0;
		cout << "Enter 1 to exit" << endl;
		cin >> finalanswer;
		if (finalanswer == 1) {
			playing = false;
		}
		//delete array;
	}


	return 0;
}


