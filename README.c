// this is a program to sort an array using merge sort 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int t=0;
int concat(char *str1,char *str2)
{
    int a=strlen(str1),b=strlen(str2),c;
    char *str3=(char*)malloc((a+b)*sizeof(char));       //creating another one so to put both the strings in one
    for(c=0;c<a;c++)
    {
        str3[c]=str1[c];                              //inputing the first string
    }
    for(c=0;c<b;c++)
    {
        str3[c+a]=str2[c];                            //inputing the second string
    }
    printf("%s",str3);                       //printing the third string
    return 0;
}
int merge(long long a[],int b,int m,int c)    //to merge the two arrays
{
	int e,f,g;
	int llen=m-b+1;        //length of the left array
	int rlen=c-m;          //length of the right array
	long long l[llen];
	long long r[rlen];
	for(e=0;e<llen;e++)     //inserting into the left and right array
	{
		l[e]=a[b+e];
	}
	for(f=0;f<rlen;f++)
	{
		r[f]=a[m+1+f];
	}
	e=0;
	f=0;
	g=b;
	while(e<llen && f<rlen)  //condition for inserting the elements in two arrays into the unsorted array
	{
		if(l[e]<=r[f])
		{
			a[g]=l[e];
			e++;
			g++;
		}
		else
		{
			a[g]=r[f];
			f++;
			g++;
		}
	}
	while(e<llen)    //if some elements are left in any of the two array then this is the condition to insert
	{
		a[g]=l[e];
		e++;
		g++;
	}
	while(f<rlen)
	{
		a[g]=r[f];
		g++;
		f++;
	}
	t+=1;    //count will increase for every time merge is used
	return 0;
}
int stringcmp(char *str1,char *str2)    //Funtion for comparing two strings
{
         if(strlen(str1)==strlen(str2))   //First condition so that when string lenghts are not equal we can directly conclude as different strings
         {
                 int a=0,b=0,c,d;
                 for(a=0;a<strlen(str1);a++)    //loop to check each element of string 1 and string 2
                 {
                         c=str1[a];
                         d=str2[a];
                         if(c==d)       //every time the elements of string 1 and string 2 match the value of b increases
                         {
                               b++;
                         }
                 }
                 if(b==strlen(str1))    //if the value of b is equal to string length that means both strings are equal
                 {
                        printf("%d",0);
                 } 
                 else                        //if not this the condition
                 {
                        printf("%d",1);
                 }
         }
         else
         {
                 printf("%d",1);
         }
         return 0;
}
int main()
{
         char *str1=(char*)malloc(255*sizeof(char));    
         char *str2=(char*)malloc(255*sizeof(char));
         scanf("%s",str1);                                 //taking the inputs in
         scanf("%s",str2);
         stringcmp(str1,str2);
         return 0;
}
