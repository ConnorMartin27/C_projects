//
// Created by Rachel on 02/10/2023.
//

#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;
class message
{
public:
        void initialise();
        void display();
protected:
    char contents[12];
};
void message::initialise() {
    strcpy_s(contents,"Hello Mike!");
}
void message::display() {
    cout<<contents<<endl;
}

