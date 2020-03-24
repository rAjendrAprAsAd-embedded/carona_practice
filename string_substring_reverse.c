#include <stdio.h> 
#include <string.h> 
  
void printReverse(char arr[]) 
{ 
	char temp;
    int length = strlen(arr); 
  printf("%ld\n",length);
    
    int i=0,k,dummy; 
    for (i = 0;i<=length;)
	 {        
		k=i;
 	 while(arr[k]!= ' ' && k!=length)
	 {
        	k++;
         } 
	
	dummy=i;i=k+1;
	k--;
	while(dummy<k)
	{
		temp=arr[k];
		arr[k]=arr[dummy];
		arr[dummy]=temp;	
	dummy++;k--;

	}
	
    } 
  
    printf("%s", arr); 
} 
  
int main() 
{ 
    char str[] = "Raj AM A GEEK"; 
    printReverse(str); 
    return 0; 
} 
