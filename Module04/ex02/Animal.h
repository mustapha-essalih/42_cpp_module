#ifndef ANILMAL_H
#define ANILMAL_H


#include <iostream>
#include <string>
#include <cstring>

class Animal
{
    protected:
        std::string type;
        
    public:
        Animal();
        Animal(const Animal & obj);
        Animal & operator = (const Animal & obj);
        virtual std::string getType() const;
        virtual void makeSound()const = 0;
        virtual ~Animal();
};



#endif