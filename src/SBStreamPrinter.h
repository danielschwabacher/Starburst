#include <string>
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLD_BLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLD_RED     "\033[1m\033[31m"      /* Bold Red */
#define BOLD_GREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLD_YELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLD_BLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLD_MAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLD_CYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLD_WHITE   "\033[1m\033[37m"      /* Bold White */
#define SLOW 150000 //.15 seconds
#define MEDIUM 100000 //.1 seconds
#define FAST 10000 //.01 seconds
#define INSTANT 1 //no character delay
#define WAIT_SHORT 1000000 // 1 second
#define WAIT_MEDIUM 2000000 // 2 seconds
#define WAIT_LONG 3000000 // 3 seconds
#define CLEAR "\033[2J" // clear screen

/*

Printing functions defined using C++ streams
Purpose: to provide an easy interface for timed and color printing

<------------------------------------------->
display: the string to print
color: the color to print the display in
speed: provides a way to print character by character:
---SLOW: print a character every .15 seconds
---MEDIUM: print every .1 seconds
---FAST: print every .01 seconds
---INSTANT: no character delay
waitTime: wait for however many seconds after done printing
----WAIT_SHORT: wait for 1 second
----WAIT_MEDIUM: wait for 2 seconds
----WAIT_LONG: wait for 3 seconds
<------------------------------------------->

Example: prints Hello World instantly in the color blue and then waits one second for additional I/O operations.
sb_stream_printer printer;
printer.stream_print("Hello World", BLUE, INSTANT, SHORT);

*/
class SBStreamPrinter{
	public:
		void streamPrint(std::string display, std::string color, int speed, int waitTime);
		void freeze();
		void centerStreamPrint(std::string display, std::string color, int wait_time);
		void clear();
};
