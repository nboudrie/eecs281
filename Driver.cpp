
#include "Driver.h"
#include <deque>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Driver::get_options(int argc, char** argv) {
	if (*argv[1] == 'h' || argv[1] == "help")
	{
		cout << "help is needed";
		exit(0);
	}
	else
	{
		logfile = argv[1];
	}
}

void Driver::read_input() {
	ifstream fin(logfile);
	Log temp;
	char junk;
	string junk2;
	while (getline(fin, temp.timeStamp, '|'))
	{
		
		getline(fin, temp.category, '|');
		getline(fin, temp.message);
		masterLog.push_back(temp);
	}
}

void Driver::mainLoop() {
	char cmd;
	do
	{
		cout << "% ";
		cin >> cmd;
		if (cmd == 'q')
		{
			return;
		}
		else if (cmd == '#')
		{
			continue;
		}
		else if (cmd == 'a')
		{
			int temp;
			cin >> temp;
			excerptList.push_back(temp);
			cout << "log entry " << temp << " appended" << '\n';
		}
		else if (cmd == 't')
		{

		}

	} while (cmd != 'q');
}
