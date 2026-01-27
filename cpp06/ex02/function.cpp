#include "headerfile.hpp"
Base * generate(void){

    int r = rand() % 3;
    if(r == 0)
        return new A;
    else if(r == 1)
        return new B;
    else 
        return new C;
}

void identify(Base* p){

    if(dynamic_cast<A*>(p))
        std::cout << "A\n";
    if(dynamic_cast<B*>(p))
        std::cout << "B\n";
    if(dynamic_cast<C*>(p))
        std::cout << "C\n";
    
}

void identify(Base& p)
{
    try{
        dynamic_cast<A&>(p);
        std::cout << "A\n";
        return;
    }catch(...){}
    try{
        dynamic_cast<B&>(p);
        std::cout << "B\n";
        return;
    }catch(...){}
    try{
        dynamic_cast<C&>(p);
        std::cout << "C\n";
        return;
    }catch(...){}
}