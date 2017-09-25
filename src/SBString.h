#include <string>
/*
SBString provides a neat way to encapsulate string content, for example, to reuse commonly
printed strings. All Starburst functions support printing via SBStrings.

Functions:
----------
SBString: 

Constructor for Starburst strings. Starburst strings must contain data about 
their print color, their display string, their print speed and their wait time

print: prints a Starburst string
*/

class SBString {
    private:
        std::string string_content;
        std::string string_color;
        int string_speed;
        int string_wait_time;
    public:
        SBString(std::string content, std::string color, int speed, int wait_time);
        std::string get_string_content();
        void print();
};
