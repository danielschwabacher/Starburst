#include <cstdlib>
#include <iostream>
#include <unistd.h>
#include <fstream>
#include <string>
#include <sys/ioctl.h>
#include <stdio.h>
#include "SBStreamPrinter.h"
#include "SBString.h"

void SBStreamPrinter::streamPrint(std::string display_string, std::string color, int speed, int wait_time){
	for (int i = 0; i < display_string.size(); ++i) {
		std::cout<<color<<display_string[i];
		fflush(stdout);
		usleep(speed);
	}
	usleep(wait_time);
	std::cout<<color<<RESET<<std::endl;
}

void SBStreamPrinter::centerStreamPrint(std::string display_string, std::string color, int wait_time){
	struct winsize w;
    ioctl(0, TIOCGWINSZ, &w);
	int cols = w.ws_col;
	std::cout<<std::string((cols-display_string.size())/2, ' ')<<display_string<<std::endl;
	fflush(stdout);
	usleep(wait_time);
}

void SBStreamPrinter::freeze(){
	usleep(WAIT_LONG);
}

void SBStreamPrinter::clear(){
	std::cout<<CLEAR<<std::endl;
}
