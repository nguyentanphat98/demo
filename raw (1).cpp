#include<stdio.h>
#include<conio.h>
#define MAX 100
int nhapmang(int a[], int &n)
{
	 do
	 {
	 	  printf(" nhap so luong luong phan tu n :");
	 	  scanf("%d", &n);
	 	  if(n<0 || n>MAX)
	 	  printf(" yeu cau nhap lai ");
	 }while(n<0 || n>MAX);
	 for(int i=0;i<n;i++)
	   {
	   printf("\n nhap a[%d] = ",i);
	   scanf("%d",&a[i]);}
}
int xuatmang(int a[], int n)
{
	for(int i=0;i<n;i++)
	printf(" %d",a[i]);
}
bool ktnt(int n)
{
	if(n<2)
	return false;
	 else 
	 {
	 	 if(n==2)
	 	  { return true;
		   }
	else
     	{    
		  for(int i=2;i<n;i++)
		  {
		  	  if(n%i==0)
		  	    return false;
		  }
		return true;
	    }
	}
}
bool kiemtrasonguyento(int a[],int n)
{  
       for(int i=0;i<n;i++)
       {
       	  if(ktnt(a[i])==true)
       	   return true;
	   }

}
int main()
{
	int  a[MAX], n;
	nhapmang(a,n);
	xuatmang(a,n);
	int ktra= kiemtrasonguyento(a,n);
	if(ktra==true)
	{
		  //printf("\n so nguyen %d",ktra);
		  return true;
	}
	else
	{
			  //printf("\n so nguyen to %d", ktra);
			  return false;
	}
}

