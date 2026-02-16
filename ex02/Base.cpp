#include "Base.hpp"
Base::Base()
{
}
Base::Base(const Base &copy)
{
    *this = copy;
}
Base &Base::operator=(const Base &copy)
{
    (void)copy;
    return (*this);
}
Base::~Base()
{
}

Base *Base::generate(void)
{
    srand(time(0));
    int random = rand() % 3;
    if (random == 0)
        return (new A);
    else if (random == 1)
        return (new B);
    else
        return (new C);
}

void Base::identify(Base* p)
{
    if (dynamic_cast<A*>(p))//to check inside the pointer if it is of type A, B or C
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}
void Base::identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch (std::exception &e)
    {
        (void)e;
    }
    try
    {
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B" << std::endl;
    }
    catch (std::exception &e)
    {
        (void)e;
    }
    try
    {
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch (std::exception &e)
    {
        (void)e;
    }
}
