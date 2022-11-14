#include <iostream>
#include "iter.hpp"


int main( void ) 
{
	int ar[] = {1,5,6,9,7,5,0};
	iter(ar,7, ::print);
	const char *str[]  = {"aloalo", "alo", "marhaba"};
	iter(str, 3, ::print);
	std::string *strd = new std::string[4];
	strd[0] = "string0";
	strd[1] = "string1";
	strd[2] = "string2";
	strd[3] = "string3";
	iter(strd, 4, ::print);
	delete [] strd;

}