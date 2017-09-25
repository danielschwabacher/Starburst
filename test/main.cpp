#include "../src/SBString.h"
#include "../src/SBStreamPrinter.h"
int main(){
    SBStreamPrinter mainPrinter;
    SBString testString = SBString("Hello World SBString", RED, FAST, INSTANT);
    mainPrinter.streamPrint("Hello World", RED, FAST, INSTANT);
    mainPrinter.centerStreamPrint("This is a center print", BOLD_GREEN, WAIT_SHORT);
    return 0;
}
