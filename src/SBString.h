#include <string>
/*
sb_strings are a handy way to encapsulate and reuse string content. All starburst functions
support printing via sb_strings
*/

class SBString {
    private:
        std::string color;
        std::string content;
        int speed;
        int waitTime;
    public:
        SBString(std::string content, std::string color, int speed, int waitTime);
        void unwrap(SBString *string);
};
