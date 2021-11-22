#include<iostream>
using namespace std;



typedef struct node
{
	int data;
	struct node*next;
}NODE,*PNODE,**PPNODE;

class SinglyLL
{
	private:
	 PNODE first;
	 int size;
	 
	public:
	SinglyLL();
	void InsertFirst(int);
	void InsertLast(int);
	void InsertAtPos(int,int);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int);
	void Display();
	int Count();
	 
};
SinglyLL::SinglyLL()
	 {
		first=NULL;
		size=0;
	 }

//InsertFirst function 	 
	 void SinglyLL::InsertFirst(int no)
	 {
		 PNODE newn=new NODE;      //newn=(PNODE)malloc(sizeof(NODE))
	     
		 newn->data=no;
		 newn->next=NULL;
		 
		 if(first==NULL)
		 {
			 first=newn;
		 }
		 else
		 {
			 newn->next=first;
			 first=newn;
		 }
		 size++;
	 }
	 
//InsertLast function
	 void SinglyLL::InsertLast(int no)
	 {
		 PNODE newn=new NODE;      //newn=(PNODE)malloc(sizeof(NODE))
	     
		 newn->data=no;
		 newn->next=NULL;
		 
		 if(first==NULL)
		 {
			 first=newn;
		 }
		 else
		 {
			PNODE temp=first;

            while(temp->next!=NULL)
			{
             temp=temp->next;
			}
            temp->next=newn;			
		 }
		 size++;
	 }
	 
//InsertAtPos function
	 void SinglyLL::InsertAtPos(int no,int iPos)
	 {}
	 void SinglyLL::DeleteFirst()
	 {
		 PNODE temp=first;
		 
		 if(first!=NULL)
		 {
			first=first->next;
            delete temp;

            size--;			
		 }
	 }
	 
//DeleteLast function
	 void SinglyLL::DeleteLast()
	 {
		 PNODE temp=first;
		 
		 if(first==NULL)
		 {
			 return;
		 }
		 else if(first->next==NULL)
		 {
			 delete first;
			 first=NULL;
			 
			 size--;
		 }
		 else
		 {
			 while(temp->next->next!=NULL)
			 {
				 temp=temp->next;
			 }
			 delete temp->next;
			 temp->next=NULL;
			 
			 size--;
		 }
			 
	 }
	 
//DeleteAtPos function
	 void SinglyLL::DeleteAtPos(int iPos)
	 {}
	 void SinglyLL::Display()
	 {
		 PNODE temp=first;
		 
		 while(temp!=NULL)
		 {
			 cout<<temp->data<<"\t";
			 temp=temp->next;
		 }
		 cout<<"\n";
	 }
	 
//Count function
	 int SinglyLL::Count()
	 {
		 return size;
	 }
	 
int main()
{
	SinglyLL obj;
	int iRet=0;
	
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	
	obj.InsertLast(101);
	obj.InsertLast(111);
	
	obj.Display();
	
	iRet=obj.Count();
	cout<<"number of elements are:"<<iRet<<"\n";
	
	
	
	return 0;
}