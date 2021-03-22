
#pragma once
#include <getopt.h>
#include <deque>
#include <vector>
#include <iostream>
#include <string>


using namespace std;


struct Log
{
	string timeStamp;
	string category;
	string message;
};


class Driver {

	public:
		void get_options(int argc, char** argv);

		void read_input();

		void mainLoop();

	private:
		string logfile;

		vector<Log> masterLog;

		deque<int> excerptList;

};