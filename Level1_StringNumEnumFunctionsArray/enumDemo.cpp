#include<iostream>
using namespace std;

enum Zwarriors
{
	Goku=1,
	Vageta=2,
	Picollo=3,
	Tein=4,
	Trunks
};

main()
{
	enum Zwarriors warrior = Vageta;
	cout<< "Value of warrior is "<<Vageta<<endl;
	switch(warrior)
	{
		case 1: cout<< "Goku is a prince";
			break;
		case 2: cout<< "Vageta is the prince";
			break;
		case 3: cout<< "Picollo is a namekian";
			break;		
		default : cout<< "Other Z fighters";
		break;	
	}
	
	
}
