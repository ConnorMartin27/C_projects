


#include "message.h"
class any_message: public message
{
public:
    void initialise();
};

void any_message::initialise() {
    char terminator;
    cout<< "Enter your message!";
    cin.get(contents,20);
    cin.get(terminator);
}