#include<stdio.h>
int main()
{
    int r,a,b,c,count=0;
    scanf("%d%d%d%d",&r,&a,&b,&c);
    while(r>0)
    {
        if(a==25)
        {
            r=r+20;
        }
        r--;
        count++;
        if(r==0)
        break;
       
        if(b==120)
        {
            r=r+80;
        }
        r--;
        count++;
        if(r==0)
        break;
        
        if(c==12)
        {
            r=r+8;
        }
        r--;
        count++;
        if(r==0)
        break;
        a++,b++,c++;
        
    }
    
    printf("Peter plays %d times before going broke",count);
    return 0;
    
    
}