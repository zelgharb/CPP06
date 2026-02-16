#ifndef DATA_HPP
#define DATA_HPP
#include <iostream>
#include <cstdlib>
class Base
{
    public:
        Base();
        Base(const Base &copy);
        Base &operator=(const Base &copy);
        virtual ~Base();
        Base *generate(void);
        void identify(Base* p);
        void identify(Base& p);

};
        class A : public Base {};
        class B : public Base {};
        class C : public Base {};
#endif