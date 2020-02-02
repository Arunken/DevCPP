#include<iostream>
using namespace std;

class Stud
{
		
	public :
		void get()
	{
		cout<<"From Stud class"<<endl;
	}	
};

class Extracurriculam
{
		
	public :
		void get()
		{
			cout<<"From Extracuriculam class"<<endl;
		}
};

class Output : public Stud, public Extracurriculam
{

};

main()
{
//	Output obj;//subclass object
//	obj.get();// ambiguous function call. The object do not know which function to call 
	
	/*Ambiguity can be overcome by using scope resolution operator as follows */
	
	Output obj;
	obj.Stud::get();

}
