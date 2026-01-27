#ifndef HEADERFILE_HPP
#define HEADERFILE_HPP
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
#endif