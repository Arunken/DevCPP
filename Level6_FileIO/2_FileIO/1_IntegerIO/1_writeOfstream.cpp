#include<fstream>
using namespace std;

main()
{
	ofstream outobj("int.tst");//creates an object of ofstream class and associates it with the file int.tst
	outobj<<25<<" well "<<4567<<' '<<8910;
}
