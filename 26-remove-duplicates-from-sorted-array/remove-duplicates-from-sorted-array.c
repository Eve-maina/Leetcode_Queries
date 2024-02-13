#include <stdio.h>
#include <stdlib.h>

int removeDuplicates (int nums[],int numSize)
{
    if (numSize==0)
    {
        return 0;
    }
    int k=1;
    for (int i=1;i<numSize;i++)
      {
         if (nums[i]!=nums[k-1])
           {
               nums[k]=nums[i];
               k++;
           }
      }
      return k;
}

