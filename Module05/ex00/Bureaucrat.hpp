#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat & obj);
        Bureaucrat(const std::string name, int grade);
        Bureaucrat & operator = (const Bureaucrat & obj);
        std::string getName();
        int getGrade();
        void increment();
        void decrement();
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        ~Bureaucrat();

};


std::ostream  & operator << (std::ostream &COUT, Bureaucrat & b);

#endif