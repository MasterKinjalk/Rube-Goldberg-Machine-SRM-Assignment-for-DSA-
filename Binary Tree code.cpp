#include <iostream>
#include <string.h>
using namespace std;

struct node           /* structure template for creating nodes of tree and linked list*/
{
   node *left;
   node *right;
   string fname;
   string lname;
   int age;
   string DOB;
   node *next;
};

node *tree=NULL;   // for creating an unordered Binary tree
node *start=NULL;   // for creating a linked list

void InsertElementInTree()   // function to initialise tree elements from the dequed elements of que 
{ 
	node *ptr, *temp;

	// function for dequing and updating tree to be added here, containing this entire operation witin the body of a while loop, running on the vondition "que!=NULL" with update datatement as "que=que->next"

	ptr = new node;
	ptr->fname = // input from que element
	ptr->lname = // input from que element
	ptr->age = // input from que element
	ptr->DOB = // input from que element
	ptr->left = NULL;
	ptr->right = NULL;

	if(tree == NULL)           // If the tree is empty, assign new node address to root
	{
		tree = ptr;
		tree->left=NULL;
		tree->right=NULL;
	}
	else
	{
		temp = tree;
		while(temp != NULL)
		{
			
			/* Else, do level order traversal until we find an empty
             place, i.e. either left child or right child of some
             node is pointing to NULL. */

			if(temp->left != NULL)
				{
					temp = temp->left;
				}
			else temp->left = ptr;

			 if (temp->right != NULL)
			 {
			 	temp = temp->right;
			 }
			 else temp->right = ptr;
				
		}

	}

}

void printPreOrder(node *tree)    // Remember to intitialize it with the Root node of tree
{
	cout<<"\n---------------------------------- Pre Order Traversal ----------------------------------"<<endl;	
	if(tree != NULL)
	{
		cout<<"\nFirst Name = "<<tree->fname;
		cout<<"\nLast Name = "<<tree->lname;     //ask the user to press any key to continue 
		cout<<"\nAge = "<<tree->age;                //the processing to be defined in main
		cout<<"\nDOB (DD-MM-YY) = "<<tree->DOB;
		printPreOrder(tree->left);
		printPreOrder(tree->right);
	}
}

void printPostOrder(node *tree)
{
	cout<<"\n---------------------------------- Post Order Traversal ----------------------------------"<<endl;
	if(tree != NULL) 
	 {
	    printPostOrder(tree->left);                    //ask the user to press any key to continue
		printPostOrder(tree->right);                    //the processing to be defined in main
        cout<<"\nFirst Name = "<<tree->fname;
		cout<<"\nLast Name = "<<tree->lname;
		cout<<"\nAge = "<<tree->age;
		cout<<"\nDOB (DD-MM-YY) = "<<tree->DOB;
	}
}	


void InOrderToList(node *tree)                // function to move tree data element in a linked list with start pointing to its first node;
{
	node *ptr,*temp;                          // ptr is used to create new node and temp is used to access the end of linked list
	temp = start;
	if(tree != NULL)
	{ 
		ptr = new node;

		InOrderToList(tree->left);

		ptr->fname = tree->fname;                // inserting values in the data members of the node
	    ptr->lname = tree->lname;
	    ptr->age = tree->age;
    	ptr->DOB = tree->DOB;
    	ptr->left = NULL;
	    ptr->right = NULL;

        if(start == NULL)
        	{
                ptr-next=NULL;
                start=ptr;
        	}
        else
        	{
				while(temp->next != NULL)
				temp=temp->next;	//update temp
			    
			    temp->next=ptr;     //inserting data
	        }

	   InOrderToList(tree->right);
	   
	}
}

void printLinkedList()
{
	node *ptr;
	ptr=start
	cout<<"\n---------------------------------- Printing Nodes Of Linked List ----------------------------------"<<endl;
	while(ptr != NULL)
	{
		cout<<"\nFirst Name = "<<ptr->fname;
		cout<<"\nLast Name = "<<ptr->lname;
		cout<<"\nAge = "<<ptr->age;
		cout<<"\nDOB (DD-MM-YY) = "<<ptr->DOB;
		ptr=ptr->next;
	}
}

void swap(node *a, node *b)    // for swapping during sorting
{ 
    string fn, ln, _dob;       // fn is first name, ln is last name, _dob is date of birth in DD-MM-YY, Age is age of person
    int Age;

    fn=a->fname;
    ln=a->lname;
    _dob=a->DOB;
    Age=a->age;

    a->fname=b->fname;
    a->lname=b->lname;
    a->DOB=b->DOB;
    a->age=b->age;

    b->fname=fn;
    b->lname=ln;
    b->DOB=_dob;
    b->age=Age;
} 

void SortLL()
{
	int swapped, i; 
    node *ptr1; 
    node *lptr = NULL; 
  
    /* Checking for empty list */
    if (start == NULL) 
        return; 
  
    do
    { 
        swapped = 0; 
        ptr1 = start; 
  
        while (ptr1->next != lptr) 
        { 
            if (ptr1->data > ptr1->next->data) 
            {  
                swap(ptr1, ptr1->next); 
                swapped = 1; 
            } 
            ptr1 = ptr1->next; 
        } 
        lptr = ptr1; 
    } 
    while (swapped); 

cout<<"\n---------------------------------- Sorted Linked List Using Quick Sort ----------------------------------"<<endl;
    printLinkedList()
}

void inserInSortedList()                                         // to be used after the sorting of list is completed
{
	string fn, ln, _dob;                                         // fn is first name, ln is last name, _dob is date of birth in DD-MM-YY
    int Age;                                                      //  Age is age of person

	cout<<"\nEnter Data:\n"
	cout<<"\nEnter First Name = ";
	cin>>fn;
	cout<<"\nEnter Last Name = ";
	cin>>ln;
	cout<<"\nEnter DOB(DD-MM-YY) = ";
	cin>>_dob;
	cout<<"\nEnter Age = ";
	cin>>Age;
	cout<<endl;

	node *newnode, *ptr, *preptr;                                   // newnode is used to create new node in the sorted linked list
	newnode = new node;

	newnode->fname=fn;
	newnode->lname=ln;
	newnode->DOB=_dob;
	newnode->age=Age;
	newnode->left=NULL;
	newnode->right=NULL;

	while(preptr->age != Age)
	{
		preptr=ptr;
		ptr=ptr->next;
	}

	preptr->next=newnode;
	newnode->next=ptr;

 cout<<"\n---------------------------------- Linked List After Updating List In Assending Oder With Your Input  ----------------------------------\n";
 printLinkedList()

}