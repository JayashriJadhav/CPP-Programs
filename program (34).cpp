#include<iostream>
using namespace std;

template<typename T>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

template<class T>
class DoublyCL
{
private:
    node<T>* first;
    node<T>* last;
    int size;
    
public:
    
    DoublyCL();
    void Display();
    int Count();
    void InsertFirst(T no);
    void InsertLast(T no);
    void InsertAtPos(T no , int ipos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int ipos);
};

//Constructor
template<class T>
DoublyCL<T>::DoublyCL()
    {
        first = NULL;
        last = NULL;
        size = 0;
    }

//InsertFirst function	
template<class T>
void DoublyCL<T> :: InsertFirst(T no)
{
    node<T>* newn = new node<T>;
    
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    
    if((first == NULL) && (last == NULL))
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first -> prev = newn;
        first = newn;
    }
    
    last->next = first;
    first->prev = last;
    size++;
}

//InsertLast function
template<class T>
void DoublyCL<T> :: InsertLast(T no)
{
    node<T>* newn = new node<T>;
    
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    
    if((first == NULL) && (last == NULL))
    {
        first = newn;
        last = newn;
    }
    else
    {
        last -> next = newn;
        newn->prev = last;
        last = newn;
    }
    
    last->next = first;
    first->prev = last;
    size++;
}

//Display function
template<class T>
void DoublyCL<T> :: Display()
{
   node<T>* temp = first;
    
    for(int i = 1; i <= size; i++)
    {
        cout<<"|"<<temp->data<<"|-> ";
        temp = temp->next;
    }
    cout<<"\n";
}

//Count function
template<class T>
int DoublyCL<T> :: Count()
{
    return size;
}

//DeleteFirst function
template<class T>
void DoublyCL<T> :: DeleteFirst()
{
    if((first == NULL) && (last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first  = NULL;
        last = NULL;
    }
    else
    {
        first = first -> next;
        delete last->next;
        first->prev = last;
        last->next = first;
    }
    size--;
}

//DeleteLast function
template<class T>
void DoublyCL<T> :: DeleteLast()
{
    if((first == NULL) && (last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first  = NULL;
        last = NULL;
    }
    else
    {
        last = last -> prev;
        delete last->next;
        first->prev = last;
        last->next = first;
    }
    size--;
}

//InsertAtPos function
template<class T>
void DoublyCL<T> :: InsertAtPos(T no, int ipos)
{
    if((ipos < 1) || (ipos > size+1))
    {
        return;
    }
    
    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == size +1)
    {
        InsertLast(no);
    }
    else
    {
       node<T>* newn= new node<T>;
        
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;
        
        node<T>*temp = first;
        
        for(int i = 1; i < ipos -1; i++)
        {
            temp = temp -> next;
        }
        
        newn->next = temp->next;
        newn->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
        size ++;
    }
}

//DeleteAtPos function
template<class T>
void DoublyCL<T> :: DeleteAtPos(int ipos)
{
    if((ipos < 1) || (ipos > size))
    {
        return;
    }
    if(ipos ==1)
    {
        DeleteFirst();
    }
    else if(ipos == size)
    {
        DeleteLast();
    }
    else
    {
        node<T>* temp = first;
        
        for(int i = 1; i < ipos -1 ; i ++)
        {
            temp = temp -> next;
        }
       
        temp -> next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
        
        size--;
    }
}

int main()
{
    DoublyCL<int> obj;
    
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    
    obj.InsertLast(51);
    obj.InsertLast(101);
    
    obj.InsertAtPos(75,3);
    obj.Display();
    
    int iret = obj.Count();
    cout<<"Number of elements are : "<< iret<<"\n";
    
    obj.DeleteAtPos(3);
    obj.DeleteFirst();
    obj.DeleteLast();
    
    obj.Display();
    return 0;
}
