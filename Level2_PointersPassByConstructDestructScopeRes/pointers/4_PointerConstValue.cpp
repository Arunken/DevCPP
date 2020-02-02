#include<iostream>
#include<cstring>
using namespace std;

main()
{

	//============================================================================
	
	char A = 'a';
	char B = 'b';
	const char *p = &A;//Once declared const, the pointer reference can be changed 
					//but not the value stored where the pointer is pointing to
	
	p = &B;//Allowed
	*p ='c';// Not allowed

	
	
	
}
