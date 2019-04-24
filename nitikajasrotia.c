#include<stdio.h>
#include<conio.h>

void main()

{
  char p[10][5],temp[5];
  int i,j,pt[10],wt[10],totwt=0,pr[10],temp1,n;
  float avgwt;
  
clrscr();
 
 printf("enter no of processes:");
  
scanf("%d",&n);
 
 for(i=0;i<n;i++)
 
 {
  printf("enter process%d name:",i+1);
  
scanf("%s",&p[i]);
  printf("enter process time:");
  
scanf("%d",&pt[i]);
  printf("enter priority:");
 
 scanf("%d",&pr[i]);
  }
  
for(i=0;i<n-1;i++)
  
{
 for(j=i+1;j<n;j++)
  
{
   if(pr[i]>pr[j])
   
{
   temp1=pr[i];
   
pr[i]=pr[j];
  
 pr[j]=temp1;
  
 temp1=pt[i];
  
 pt[i]=pt[j];
  
 pt[j]=temp1;
   
strcpy(temp,p[i]);
   
strcpy(p[i],p[j]);
  
 strcpy(p[j],temp);
  
 }
  }
  }
  
wt[0]=0;
 
 for(i=1;i<n;i++)
 
 {
   wt[i]=wt[i-1]+et[i-1];
  
 totwt=totwt+wt[i];
   }
   
avgwt=(float)totwt/n;
   
printf("p_name\t p_time\t priority\t w_time\n");
    
for(i=0;i<n;i++)
    
{
   printf(" %s\t %d\t %d\t %d\n" ,p[i],pt[i],pr[i],wt[i]);
   }
  
 printf("total waiting time=%d\n avg waiting time=%f",tot,avg);
   
getch();
   }















#include<unistd.h>
	#include<stdio.h>
	int main()
	  {
	   int tn;
   int fs;
	   int cnt;
	         int i,j,k,s,ss,pg,zx,max,xc,cv,bn,t,x;
	   int pr[20];
   int fm[10];
	       int a[10];
	 
	  printf("Enter number of pages    :   ");
	  scanf("%d",&tn);
	 
	 printf("Enter size of frame  :   ");
	  scanf("%d",&fs);
	 
	 printf("Enter page name :\n");
	        for(i=0;i<tn;i++)
	  {
	   printf("\t");
	   scanf("%d",&pr[i]);
	  }	 
s=0;ss=0;
	 
	   for(i=0;i<fs;i++)
	  {
	     fm[i]=-1;
	 a[i]=0;
	  }
	 
	  for(i=0;i<tn;i++)
	   {
	      
	  printf("\n page :   %d",pr[i]);
	          for(bn=0;bn<fs;bn++) a[bn]=0;
	      if(i<fs)
	    {
	          pg=0;
	        for(j=0;j<fs;j++)
	     {
	         if(fm[j]==pr[i])  pg++;
	     }
	      if(pg==0)
	     {
	       fm[s]=pr[i]; s=(s+1)%fs; cnt++;
	     }
	    }
	    else
	    {
	          pg=0;
	           for(j=0;j<fs;j++)
	     {
	        if(fm[j]==pr[i])  pg++;
	     }
	     if(pg==0)
	     {
	  
	    for(j=0;j<fs;j++)
	      { x=0;
	    for(k=i+1;k<tn;k++)
	      {
	            if(fm[j]==pr[k])
	     {
	     a[j]=k;
	     k=1000; x++;
	     }
	     if(x==0)
	     { a[j]=40;}
	     
	     }
	                              }
	      
	 
	    max=a[0];
	    xc=0;
	    for(cv=0;cv<fs;cv++)
	      {
	  
	    if(a[cv]>max)
	{
	        max=a[cv];
	 xc=cv;
	  }
	  }
	 fm[xc]=pr[i];
	 cnt++;
	 ss=(ss+1)%fs;
	  }
	  }
	   printf("\n\t\t\t frame:");
	  for(j=0;j<fs;j++)
	  {
	 if(fm[j]>=0)
	   printf("\t%d",fm[j]);
	  }
	  }
	  printf("\n page fault :  %d\n",cnt);
	  }

