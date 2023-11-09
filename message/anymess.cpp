#include "message1.h"

int main() {
    message hello;
    hello.initialise();
    hello.display();
    system("PAUSE");
    any_message do_message;
    do_message.initialise();
    do_message.display();
    return EXIT_SUCCESS;
}
