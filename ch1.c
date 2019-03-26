#include<stdio.h>
int main()
{
    char ch;
    int a,b,ans;
    scanf("%c",&ch);
    scanf("%d %d",&a,&b);
    if(ch=='+')
    {
      ans=a+b;  
      printf("%d",ans);
    }
    else if(ch=='-')
    {
        ans=a-b;
        printf("%d",ans);
    }
    else if(ch=='*')
    {
        ans=a*b;
        printf("%d",ans);
    }
    else if(ch=='/')
    {
        ans=a/b;
        printf("%d",ans);
    }
    else 
    {
        ans=a%b;
        printf("%d",ans);
    }
}
