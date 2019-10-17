
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
