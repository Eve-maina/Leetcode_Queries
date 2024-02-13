#include <stdio.h>
#include <stdlib.h>

int removeElement (int nums[],int numSize,int val)
{
    if (numSize==0)
    {
        return 0;
    }
    
    int k=0;
    for (int i=0;i<numSize;i++)
      {
         if (nums[i]!=val)
          {
              nums[k]=nums[i];
              k++; 
          }
      } 
      return k; 
}