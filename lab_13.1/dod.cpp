//////////////////////////////////////////////////////////////////////////////
// dod.cpp
// файл реалізації функції
#include "dod.h"
#include "var.h" 

using namespace nsVar;

void nsDod::dod() 
{
	a *= (n * x - n) / (n * x + x);
} 
