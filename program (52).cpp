#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *lchild;
	struct node *rchild;
}NODE,*PNODE,**PPNODE;


void Insert(PPNODE Head,int no)
{
  PNODE newn=new NODE;

  newn->data=no;
  newn->lchild=NULL;
  newn->rchild=NULL;

  if(*Head==NULL)
  {
    *Head=newn;
  }
  else
  {
	  PNODE temp=*Head;
	  
	  while(1)  //unconditional loop
	  {
		 if(temp->data==no)
		 {
			 cout<<"Duplicate node\n";
			 
			 delete newn;
			 break;
		 }
        else if(temp->data > no)     //small data
		{
			if(temp->lchild==NULL)
			{
				temp->lchild=newn;
				break;
			}
			temp=temp->lchild;
			
		}
		else if(temp->data < no)   //big data
		{
			if(temp->rchild==NULL)
			{
				temp->rchild=newn;
				break;
			}
			temp=temp->rchild;
	   }
	}
  }   

}
bool Search(PNODE Head,int no)
{
	
	if(Head==NULL)   //tree is empty
	{
		return false;
	}
	else         // tree contains atleast one node
	{
		while(Head!=NULL)
		{
			if(Head->data==no)  //node sapadala
			{
				
				break;
			}
			else if(no>(Head->data))
			{
				Head=Head->rchild;
			}
			else if(no<(Head->data))
			{
				Head=Head->lchild;
			}
		}
		if(Head==NULL)
		{
			return false;
		}
		else
		{
			return true;
		}
		
	}

}

int Count(PNODE Head)
{
	static int iCnt=0;
	
	if(Head!=NULL)
	{
		iCnt++;
	    Count(Head->lchild);
		Count(Head->rchild);
	}
	return iCnt;
}
int CountLeaf(PNODE Head)
{
	static int iCnt=0;
	
	if(Head!=NULL)
	{
		if((Head->lchild==NULL)&&(Head->rchild==NULL))
		{
	      iCnt++;
		}
	    CountLeaf(Head->lchild);
		CountLeaf(Head->rchild);
	}
	return iCnt;
}
int CountParent(PNODE Head)
{
	static int iCnt=0;
	
	if(Head!=NULL)
	{
		if((Head->lchild!=NULL)||(Head->rchild!=NULL))
		{
	      iCnt++;
		}
	    CountParent(Head->lchild);
		CountParent(Head->rchild);
	}
	return iCnt;
}
int main()
{
	int no=0;
	int iret=0,bret=0;
	
	PNODE first=NULL;
	
	Insert(&first,51);
	Insert(&first,21);
	Insert(&first,101);
	
	cout<<"enter number to search\n";
	cin>>no;
	
	bret=Search(first,no);
	if(bret==true)
	{
		cout<<"data is there\n";
	}
	else
	{
		cout<<"data is not there\n";
	}
	
	iret=Count(first);
	
	cout<<"number of nodes are:"<<iret<<"\n";
	
	iret=CountLeaf(first);
	
	cout<<"number of leaf nodes are:"<<iret<<"\n";
	
	iret=CountParent(first);
	
	cout<<"number of parent nodes are:"<<iret<<"\n";
	
	return 0;
}