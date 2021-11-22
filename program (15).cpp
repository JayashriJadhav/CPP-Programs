#include<iostream>
using namespace std;
typedef unsigned int UNIT;


UNIT DisplayByte(UNIT iNo)
{
   UNIT Byte1=iNo&0x000000ff;
   
   UNIT Byte2=iNo&0x0000ff00;
   Byte2=Byte2>>8;
   
   UNIT Byte3=iNo&0x00ff0000;
   Byte3=Byte3>>16;
   
   UNIT Byte4=iNo&0xff000000;
   Byte4=Byte4>>24;
   
   cout<<"
   
   
   
	
}

int main()
{
	UNIT iValue=0,iRet=0,i,j;
	
	cout<<"enter number\n";
	cin>>iValue;
	
	DisplayByte(iValue);
	
	
	
	return 0;
}