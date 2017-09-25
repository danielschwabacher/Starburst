#include "../src/SBString.h"
#include "../src/SBStreamPrinter.h"
#include <iostream>

int main(){
    //SBStreamPrinter mainPrinter;
    SBString *testString; 
    testString = new SBString("Hello World SBString", RED, FAST, INSTANT);
    testString->print();
    // std::string x = testString.get_string_content();
    // std::cout<<x;
    //mainPrinter.streamPrint("Hello World", RED, FAST, INSTANT);
    //mainPrinter.centerStreamPrint("This is a center print", BOLD_GREEN, WAIT_SHORT);
    // testString.print();
    std::cout<<"DONE TESTING";
    return 0;
}
