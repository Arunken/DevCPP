#include<iostream>

using namespace std;

main()
{
	char text1[] = "text1";// creates an array that is large enough to hold the string literal including its Null terminator
							// Array can be modified at a later time
							// sizeof operator can be used to determine its size
	cout<<sizeof(text1)<<endl;					
								
	char *text2 = "text2";// C++03 deprecates use of string literal without the const keyword
	text2 = "arun";// modifying a string literal that the pointer points towards results in undefined behavior
	cout<<text2;			// sizeof operator cannot be used, instead strlen can be used

}
