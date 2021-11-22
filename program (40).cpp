//Accept N numbers from user and perform addition using while

#include<iostream>
using namespace std;
 
int SumI(int Arr[],int iSize)
 {
	 int iSum=0,i=0;
	 
	 while(i<iSize)
	 {
		 iSum=iSum+Arr[i];
		 i++;
	 }
	
	 return iSum;
 }

int main()
{
	int iLength=0,i=0,iRet=0;
    int *p=NULL;
	
	cout<<"enter number of elements\n";
	cin>>iLength;
	
	p=new int[iLength];
	
	cout<<"Enter the elements\n";
	for(i=0;i<iLength;i++)    //input taking
	{
	  cin>>p[i];
    }
	iRet=SumI(p,iLength);
	cout<<"Addition is:"<<iRet<<"\n";
	
	delete[]p;
	return 0;
}