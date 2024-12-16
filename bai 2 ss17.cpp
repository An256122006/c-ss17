#include <stdio.h>
#include <string.h>
void print(char *arr)
{
	printf ("chuoi cua ban : %s\n",arr);
}
void demchucai(char *arr,char *chucai, int *index)
{
	*index=0;
	for (int i=0;i<strlen(arr);i++)
	{
		for (int j=0; j<strlen(chucai);j++)
		{
			if (arr[i]==chucai[j])
			{
				(*index)++;
			}
		}
	}
}
void demchuso(char *arr,char *chuso, int *index)
{
	*index=0;
	for (int i=0;i<strlen(arr);i++)
	{
		for (int j=0; j<strlen(chuso);j++)
		{
			if (arr[i]==chuso[j])
			{
				(*index)++;
			}
		}
	}
}
void demkytu(char *arr,char *chuso, int *index,char *chucai)
{
	int temp;
	*index=0;
	 for (int i=0;i<strlen(arr);i++)
	{
		for (int j=0; j<strlen(chucai);j++)
		{
			temp=0;
			if (arr[i]==chucai[j])
			{
				temp=1;
				break;
			}
		}
		if(temp==0)
		{
			for (int j=0; j<strlen(chuso);j++)
		 {
			if (arr[i]==chuso[j])
			{
				temp=1;
				break;
			}
		 }
		}
		if(temp==0) 
	  {
		(*index)++;
	  }
	} 
	
}
int main()
{
	int value,index;
    char arr[100];
    char chucai[]="qwertyuiopasdfghjklzxcvbnm";
    char chuso[]="1234567890";
	do
	{
		printf ("          MENU\n");
		printf ("1.Nh?p chuoi\n");
		printf ("2.in chuoi\n");
		printf ("3.Ð?m s? lu?ng ch? cái trong chu?i và in ra\n");
		printf ("4.Ð?m s? lu?ng ch? s? trong chu?i và in ra\n");
		printf ("5.Ð?m s? lu?ng ký t? d?c bi?t trong chu?i và in ra\n");
		printf ("6.thoat\n");
		printf ("moi ban nhap lua chon:");
		scanf ("%d",&value);
		getchar();
		switch (value)
		{
			case 1:
				printf("M?i nh?p chu?i c?a b?n: ");
				fgets(arr, sizeof(arr), stdin);
			    arr[strcspn(arr, "\n")] = '\0';
				break; 
			case 2:
				print(arr);
				break;
			case 3:
				demchucai(arr,chucai,&index);
				printf ("co %d chu cai",index);
				printf ("\n");
				break;
			case 4:
				demchuso(arr,chuso,&index);
				printf ("co %d chu so",index);
				printf ("\n");
				break;
			case 5:
			 	demkytu(arr,chuso,&index,chucai);
			 	printf ("co %d ky tu",index);
				printf ("\n");
				break;
		}
	}while (1);
}
