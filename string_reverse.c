#include<stdio.h>
#include<string.h>
main()
{
char arr[]={'R','a','j','e','n','d','r','a'};
int len=strlen(arr)-1;
int i=0;
char *p=arr;
char temp;
while(i<len)
{
temp=*(p+i);
*(p+i)=*(p+len);
*(p+len)=temp;

/*temp=arr[i];
arr[i]=arr[len];
arr[len]=temp;*/
i++;len--;
}
printf("%s",arr);
}
