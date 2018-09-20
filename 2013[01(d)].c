#include <stdio.h> 
 
int binarySearch(int A[], int low, int high, int searchKey) 
{ 
   if (high >= low) 
   { 
        int mid = low + (high - low)/2; 

        if (A[mid] == searchKey)   
            return mid; 

        if (A[mid] > searchKey)  
            return binarySearch(A, low, mid-1, searchKey); 

        return binarySearch(A, mid+1, high, searchKey); 
   } 
  
   return -1; 
} 
  
int main(void) 
{ 
   int A[] = {2, 3, 4, 10, 40}; 
   int high;
   int low;
   int searchKey;
   printf("Enter the High value ");
   scanf("%d", &high);
   printf("Enter the low value ");
   scanf("%d", &low);
   printf("Enter the SK ");
   scanf("%d", &searchKey);
 
   int result = binarySearch(A, low, high, searchKey); 
   (result == -1)? printf("Element is not present in array \n") 
                 : printf("Element is present at index %d\n", 
                                                   result); 
   return 0; 
} 