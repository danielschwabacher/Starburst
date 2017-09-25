#include "SBString.h"
#include "SBStreamPrinter.h"
#include <iostream>
#include <string>

SBString::SBString(std::string content, std::string color, int speed, int wait_time){
    std::string string_content = content;
    std::string string_color = color;
    int string_speed = speed;
    int string_wait_time = wait_time;
}

std::string SBString::get_string_content(){
    return string_content;
}

void SBString::print(){
    std::cout<<get_string_content()<<std::endl;
    //std::cout<<this->string_content;
    //SBStreamPrinter printer = SBStreamPrinter();
    //printer.streamPrint(this->content, this->color, this->speed, this->wait_time);
}
