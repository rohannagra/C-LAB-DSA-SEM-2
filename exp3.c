#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char expr[20];
    printf("Enter a expression consisting brackets: ");
    gets(expr);
    char stack[20];
    int len = strlen(expr);
    int top=-1;


    for(int i=0;i<len;i++)
    {
        if(expr[i]=='('||expr[i]=='{'||expr[i]=='[')
        {
            top++;
            stack[top]=expr[i];
            
        }    
        else if((stack[top]=='('&&expr[i]==')')||(stack[top]=='{'&&expr[i]=='}')||(stack[top]=='['&&expr[i]==']'))
             {
                 top--;
                 
             }
        else if((!(stack[top]=='('&&expr[i]==')')||(stack[top]=='{'&&expr[i]=='}')||(stack[top]=='['&&expr[i]==']'))&&(expr[i]=='('||expr[i]=='{'||expr[i]=='['||expr[i]==')'||expr[i]=='}'||expr[i]==']')){
             {
                printf("Expression Invalid");
                return;
             }
        } 
    }
    if(top==-1)
    {
        printf("Expression is Valid!!!");
    }
    else
    {
        printf("Expression is Invalid!!!");
    }
}