// playground.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cassert>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	char g = 'g', h = 'h', yesorno = ' ';
	int gee = g, aych = h;
	bool booly;
	int inty , boolyinty;
	string fname;

	while (yesorno == ' ')
	{
	cout << "Is your name Toby? ";
	cin >> yesorno;
	}

	if (yesorno == 'y')
	{
		fname = "toby";
	}


	assert(fname == "toby");

	if (g < h)
	{
		cout << "yep, g is less than h." << endl;
	}

	booly = (g > h);
	inty = (100 >= (g + h));
	boolyinty = booly + inty;
	cout << booly << ' ' << inty << ' ' << g  << ' ' << h << endl
		<< gee << ' ' << aych << endl
		<< boolyinty << endl;
	return 0;
}

