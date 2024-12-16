#include <stdio.h>
#include <stdlib.h>
void scan(int *arr,int length)
{
	for (int i=0; i<length; i++)
	{
		printf ("moi ban nhap phan tu thu %d : ",i+1);
		scanf ("%d",arr+i);
	}
}
void print(int *arr, int length)
{
	for (int i=0; i<length; i++)
	{
		printf ("%d ",*(arr+i));
	}
}
void total(int *arr,int length, int *sum)
{
	*sum=0;
	 for (int i=0; i<length; i++)
	{
        *sum += arr[i];	
	}
}
void maxbest(int *arr, int length, int *max)
{
	*max=0;
	for (int i=0; i<length; i++)
	{
        if (arr[i]>*max)
		{
			*max=arr[i];
		}	
	}
} 
int main()
{
	do
	{
		printf ("          MENU\n");
		printf ("1.Nh?p v�o s? ph?n t? v� t?ng ph?n t?\n");
		printf ("2.Hi?n th? c�c ph?n t? trong m?ng\n");
		printf ("3.T�nh d? d�i m?ng\n");
		printf ("4.T�nh t?ng c�c ph?n t? trong m?ng\n");
		printf ("5.Hi?n th? ph?n t? l?n nh?t\n");
		printf ("6.thoat\n");
		int value,length,sum,max;
		printf ("moi ban nhap lua chon:");
		scanf ("%d",&value);
		switch (value)
		{
			int *arr;
			case 1:
				printf ("moi ban nhap so luong phan tu co trong mang:");
				scanf ("%d",&length);
				arr=(int*)malloc(length*sizeof(int));
				scan(arr,length);
				printf ("\n");
				break;
			case 2:
				print(arr,length);
				printf ("\n");
				break;
			case 3:
				printf ("do dai mang : %d",length);
				printf ("\n");
				break;
			case 4:
				total(arr,length,&sum);
				printf ("tong cac phan tu b�ng %d",sum);
				printf ("\n");
				break; 
			case 5:
				maxbest(arr,length,&max);
				printf ("so lon nhat:%d",max);
				printf ("\n");
				break;
			case 6:
			    printf ("thoat\n");
			    free(arr);
			    return 1;
			    break;
			default :
				printf ("khong hop le\n");
				break; 
		}
		
	} while (1);
	return 0;
}
