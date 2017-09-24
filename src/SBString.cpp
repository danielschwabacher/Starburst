#include "SBString.h"
#include <iostream>
#include <string>

SBString::SBString(std::string content, std::string color, int speed, int waitTime){
    std::string stringColor = color;
    std::string stringContent = content;
    int stringSpeed = speed;
    int stringWaitTime = waitTime;
}

void SBString::unwrap(SBString* packedString){
    std::string color = packedString->color;
    std::cout<<"Color is: "<<color;
}
