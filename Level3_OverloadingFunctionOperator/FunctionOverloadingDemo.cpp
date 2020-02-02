#include<iostream>


using namespace std;

 class FunctionOverloadingDemo
 {
 	public :
	 	void myFun(int a,string str)
		 {
		 	cout<< "First function invoked"<<endl;
		 }
	
	 	void myFun(String a,int str)
		 {
		 	cout<< "second function invoked"<<endl;
		 }
		 
		void myFun(string s1,string s2)
		{
			cout<<"third function invoked"<<endl;
		} 
			
 };
 
 main()
 {
 	FunctionOverloadingDemo obj;
 	obj.myFun("Hello","Arun"); // 3rd function
 	
 }
