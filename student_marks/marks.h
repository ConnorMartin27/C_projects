//
// Created by Rachel on 09/10/2023.
//

#include <iostream>
#include <iomanip>
#ifndef STUDENT_MARKS_MARKS_H
#define STUDENT_MARKS_MARKS_H
class student_marks
{
public :
    void initialise() ;
    void display_identities () ;
    void display_marks () ;
    void display_sum () ;
    void display_weighted_average () ;
protected :
    char student_identity[9] ;
    char module_identity [6] ;
    int exam_mark,
    practical_mark,
    sum;
    float weighted_average ;
};

void student_marks::initialise() {
    const float exam_weight = 0.75,
    practical_weight = 0.25;
    char terminator ;
    std::cout << "Enter Module Identity Code ";
    std::cin.get(module_identity,6) ;
    std::cin.get(terminator);
    std::cout <<"Enter Student Identity Code" ;
    std::cin.get (student_identity,9);
    std::cout <<"Enter Exam Mark";
    std::cin >> exam_mark;
    std::cin.get(terminator);
    std::cout <<"Enter Practical Mark";
    std::cin >> practical_mark ;
    std::cin.get(terminator);
    sum = exam_mark + practical_mark ;
    weighted_average = (exam_mark * exam_weight) + (practical_mark * practical_weight) ;
}

void student_marks::display_identities() {
    std::cout <<std::endl ;
    std::cout <<"Student Identity: " <<student_identity

    << " for module: " <<module_identity <<std::endl ;
}
void student_marks::display_marks() {
    std::cout << "Exam mark is " <<exam_mark <<
    " Practical Mark is " <<practical_mark <<std::endl;
}
void student_marks::display_sum() {
    display_identities();
    display_marks();
    std::cout <<"The sum of the marks is " <<sum <<std::endl ;
}
void student_marks::display_weighted_average() {
    display_identities();
    display_marks();
    std::cout <<"The weighted average of the marks is "
    << std::setprecision(2) <<weighted_average <<std::endl;
}

#endif //STUDENT_MARKS_MARKS_H
