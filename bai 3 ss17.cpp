#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void dao(char *arr,int *length)
{
	char *temp;
	temp=(char*)malloc((*length)*sizeof(char));
	for (int i=0; i<strlen(arr);i++)
	{
		temp[i]=arr[strlen(arr)-1-i];
	}
	printf ("chuoi cua ban la :%s",temp);
	printf ("\n");
}
void demsoluongtu(char *arr)
{
	int index=1;
	for (int i=0; i<strlen(arr);i++)
	{
		if (arr[i]==' ')
		{
			index++;
		}
	}
	printf ("chuoi co %d so tu",index);
	printf ("\n");
}
void sosanh(char *arr, int *length)
{
	char *arr2;
	arr2=(char*)malloc((*length)*sizeof(char));
	printf ("moi nhap chuoi 2:");
	fgets (arr2,*length,stdin);
	arr2[strcspn(arr2,"\n")]='\0';
	printf ("chuoi thu 2 cua ban: %s\n",arr2);
	int temp=strcmp(arr,arr2);
	if (temp==0)
	{
		printf ("hai chuoi bANG NHAU \n");
	} else if (temp>0)
	{
		printf ("chuoi 1 lon hown chuoi 2\n");
	} else
	{
		printf ("chuoi hai lon hon\n");
	}
}
void inhoa(char*arr)
{
	for (int i=0; i<strlen(arr); i++)
	{
		arr[i]=toupper(arr[i]);
	}
	printf ("chuoi cua bna sau khi in hoa:%s\n",arr);
}
void ghepchuoi(char *arr,int *length)
{
	char *arr2;
	arr2=(char*)malloc((*length)*sizeof(char));
	printf ("moi nhap chuoi 2:");
	fgets (arr2,*length,stdin);
	arr2[strcspn(arr2,"\n")]='\0';
	printf ("chuoi cua ban sau khi ghep :%s\n",strcat(arr,arr2));
}
int main()
{
	char *arr;
	int length=100;
	int value;
	arr=(char*)malloc(length*sizeof(char));
	do
	{
		printf(" MENU\n");
		printf("1. Nh?p vào chu?i\n"); 
		printf("2. In ra chu?i d?o ngu?c\n"); 
		printf("3. Ð?m s? lu?ng t? trong chu?i\n"); 
		printf("4. Nh?p vào chu?i khác, so sánh chu?i dó v?i chu?i ban d?u\n"); 
		printf("5. In hoa t?t c? ch? cái trong chu?i\n"); 
		printf("6. Nh?p vào chu?i khác và thêm chu?i dó vào chu?i ban d?u\n"); 
		printf("7. Thoát\n"); 
		printf("M?i b?n nh?p l?a ch?n: "); 
		scanf("%d",&value);
		getchar();
		switch(value)
		{
			case 1:
				printf ("moi nhap chuoi cua ban:");
				fgets(arr,length,stdin);
				arr[strcspn(arr,"\n")]='\0';
				break;
			case 2:
				dao(arr,&length);
				break;
			case 3:
				demsoluongtu(arr);
				break;
			case 4:
				sosanh(arr,&length);
				break;
			case 5:	
			    inhoa(arr);
			    break;
			case 6:  
			    ghepchuoi(arr,&length);
				break;
			case 7:
				printf ("thoat\n");
				return 1;
			default:
				printf ("khong hop le\n");
				break; 
		}
	} while(1);
	return 0;
}
