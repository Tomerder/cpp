/***************************************************************************
    Author: Stav Ofer
    Creation date:  		2013-10-13    
    Last modified date:		2013-10-13
    Description: 	
****************************************************************************/


//#include <cstring>
#include <cstdio>
#include <iostream>
using namespace std;


int main()
{
	const int i=5;
	int *ip = (int*) &i;
	
	*ip = 7;
	
	printf("%d %d\n" ,i ,*ip);
	
	return 0;
}


/*######################################################################*/
