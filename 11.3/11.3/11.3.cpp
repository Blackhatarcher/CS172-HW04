// 11.3.cpp : Defines the entry point for the console application.
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



