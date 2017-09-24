#include <cstdlib>
#include <iostream>
#include <unistd.h>
#include <fstream>
#include <string>
#include <sys/ioctl.h>
#include <stdio.h>
#include "SBStreamPrinter.h"
#include "SBString.h"

void SBStreamPrinter::streamPrint(std::string display_string, std::string color, int speed, int waitTime){
	if (speed == SLOW){
		for (int i = 0; i < display_string.size(); ++i) {
			std::cout<<color<<display_string[i];
			fflush(stdout);
			usleep(SLOW);
		}
		usleep(waitTime);
		// std::cout<<RESET;
	}
	else if (speed == MEDIUM){
		for (int i = 0; i < display_string.size(); ++i) {
			std::cout<<color<<display_string[i];
			fflush(stdout);
			usleep(MEDIUM);
		}
		usleep(waitTime);
		// std::cout<<RESET;
	}
	else if (speed == FAST){
		for (int i = 0; i < display_string.size(); ++i) {
			std::cout<<color<<display_string[i];
			fflush(stdout);
			usleep(FAST);
		}
		usleep(waitTime);
		// std::cout<<RESET;
	}
	else{
		std::cout<<color<<display_string<<RESET<<std::endl;
	}
	std::cout<<color<<RESET<<std::endl;
}


void SBStreamPrinter::freeze(){
	usleep(WAIT_LONG);
}


void SBStreamPrinter::centerStreamPrint(std::string display_string, std::string color){
	struct winsize w;
    ioctl(0, TIOCGWINSZ, &w);
    int cols = w.ws_col;
	std::cout<<std::string((cols-display_string.size())/2, ' ')<<display_string<<std::endl;
}

void SBStreamPrinter::clear(){
	std::cout<<CLEAR<<std::endl;
}
