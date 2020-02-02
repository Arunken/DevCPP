//Write a program to accept marks of six subjects for ten students and then display their total marks in a tabular format.

#include<iostream>
#include<string>
using namespace std;


class TwoDarray
{
	string marks[3][6];
	
	public :
		void accept()
		{
			

			for(int i=0;i<3;i++)
			{
				cout<< "Enter the student "<<(i+1) <<" mark for each subject one by one : "<<endl;
				for(int j=0;j<6;j++)
				{
					cin>> marks[i][j];
				}
			}
		}
		
		void display()
		{
			for(int i=0;i<3;i++)
			{
				cout<< "Marks of student "<<(i+1)<<endl;
				for(int j=0;j<6;j++)
				{
					cout<< marks[i][j]<<endl;
				}
			}
		}
};

main()
{
	TwoDarray obj;
	obj.accept();
	obj.display();
}
