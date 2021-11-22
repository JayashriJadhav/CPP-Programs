#include<iostream>
#include<stdio.h>
using namespace std;

typedef struct node
{
	int data;
	struct node* next;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,int no)
{
	PNODE newn=new NODE;
	newn->data=no;
	newn->next=NULL;
	
	if(*Head==NULL)
	{
		*Head=newn;
	}
	else
	{
		newn->next=*Head;
		*Head=newn;
	}
}

void Display(PNODE Head)
{
	while(Head!=NULL)
	{
		cout<<"|"<<Head->data<<"|";
		Head=Head->next;
	}
	cout<<"\n";
	
}
int Count(PNODE Head)
{
	int icnt=0;
	while(Head!=NULL)
	{
		icnt++;
		Head=Head->next;
	}
	return icnt;
}
	
int main()
{
	PNODE first=NULL;
	int iRet=0;
	
	InsertFirst(&first,101);
    InsertFirst(&first,51);
	InsertFirst(&first,21);
	InsertFirst(&first,11);
	
	Display(first);
	
	iRet=Count(first);
	
	cout<<"Number of elemets are:"<<iRet<<"\n";
	
	return 0;
}