#include<stdio.h>
#include<stdlib.h>
int main()
{int i,j,n,s,c,count[100],m=0;
char a[100][100],b[100][100];
scanf("%d\t%d\n",&s,&n);
for(i=0;i<n;i++)
{scanf("%s\n",&a[i]);
}
scanf("%d\n",&c);
for(i=0;i<c;i++)
{scanf("%s\n",&b[i]);
}
for(i=0;i<n;i++)
{count[i]=0;
for(j=0;j<c;j++)
{if(strcmp(a[i],b[j])==0)
{count[i]++;
break;
}
}
if(count[i]==0)
{printf("%s\n",a[i]);
m++;
}
if(m==s)
{break;
}
}
return 0;
}
