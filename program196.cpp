#include<iostream>
using namespace std;

typedef unsigned long int UINT;

UINT ToggleRange(UINT iNo,int iStart,int iEnd)
{
    UINT iResult=0;
    UINT iMask=0x00000000;
    
   
    
    iMask = (0xffffffff<<(iStart-1)) & ((0xffffffff)>>(32-End));
    
    iResult = iNo ^ iMask;
    
    return iResult;
	
}

//start  5
//End   16
//  0000 0000 0000 0000 0000 0000 0000 0000

//  0000 0000 0000 0000 1111 1111 1111 0000
int main()
{
  
    UINT iValue=0,iRet=0;
    int i=0,j=0;
    cout<<"Enter Number\n";
    cin>>iValue;
   
    cout<<"Enter Starting Point\n";
    cin>>i;
   
    cout<<"Enter Ending Point\n";
    cin>>j;
    
    iRet = ToggleRange(iValue,i,j);

    cout<<"Updated Number is : "<<iRet<<"\n";
    //printf("%lu\n",iRet);

	return 0;
}