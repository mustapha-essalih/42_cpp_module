#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H


#include <iostream>

#include <cstring>

using std::cout;
using std::endl;
using std::string;
using std::cin;

#include "Form.h"
// #include "Bureaucrat.h"

class Form;

class Bureaucrat 
{
    private:
        string const name;
        int         grade;
    public:
        void signForm(Form &f);
        // class member
        class GradeTooHighException : public std::exception{
            
            const char * what() const throw()
            {
                return "is Grade Too High";
            }

        };
        class GradeTooLowException : public std::exception{
           
            const char * what() const throw()
            {
                return "is Grade Too low";
            }

        };



        string    getName();
        int    getGrade();
        void increment(); 
        void decrement();
        Bureaucrat(/* args */);
        ~Bureaucrat();
};








#endif