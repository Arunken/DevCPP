#include<iostream>
#include<string>

using namespace std;

struct Node
{
	string name;
	Node *NEXT;

/*The default initialization of the NEXT pointer is NULL*/
/*The name is initialized to a string*/
	Node(const string &s,Node *n=NULL):name (s),NEXT (n)
	{
	
	}
};

class List
{
	private:
		Node *START,//Point to start of the list
		*CURRENT,//Used by queryNode() and delNode()
		*PRECEDE;//Used by queryNode() and delNodw()
		
	public:
		//Constructor initializes the member pointers of the list to NULL
		List();
		/*List maintenance functions*/
		void addNode(const string &s);//Adds a Node 
		void traverse();//	Displays name in all the Nodes
};

List::List()
{
	/*Initialize all member pointers to NULL*/
	START = CURRENT = PRECEDE = NULL;
}

void List::addNode(const string &s)
{
	/*If the list does not exist OR name is to be added at the start*/
	if(START == NULL || s<= START->name)
	{
		/*Constructor for node updates NEXT to either NULL or to START depending on the state of the list */
		START = new Node(s,START);
		return;//No other steps need to be performed
	}
	/*If there are existing nodes in the list, position Prev and Curr at the required nodes*/
	Node *prev, *curr;
	for(prev = curr = START;curr !=NULL && s >curr->name;prev = curr, curr = curr->NEXT)
	{
		//Empty body of the for loop
	}
	Node *n = new Node(s,curr); //New Node's NEXT points to Curr
	prev->NEXT = n;
}

void List::traverse()
{
	for(Node *temp = START;temp !=NULL; temp = temp->NEXT)
	{
		cout<<temp->name<<endl;
	}
}

main()
{
	List obj;
	char ch;
	
	while(1)// The condition of the loop is always true.
	{
		cout<<endl<<"1. Enter customer name "<<endl;
		cout<<"2. Display the names of all customers "<<endl;
		cout<<"3. Exit"<<endl;
		cout<<endl<<"Enter your choice ";
		cin>>ch;
		
		switch(ch)
		{
			case '1' :
				{
					cout<<endl<<"Enter a name ";
					string s;
					cin.ignore();
					getline(cin,s);
					obj.addNode(s);
				 } 
				 break;
			case '2' :
					obj.traverse();
					break;
			case '3' :
					exit(0);//end the program
					break;
			default:
					cout<<endl<<"Enter a correct choice ";
					break;				 
		}	
	}
}
