#include <stdio.h>
#include <string.h>
typedef struct
{  
	char nation[5];
	char temp;
	float result[4];
	int id; 
	char name[30];
} info;

void nhapthongtin(info inf[], int contestant_order)
{
	fflush(stdin);
	printf("nhap id cua van dong vien thu %d: ",contestant_order+1);
	scanf("%d",&inf[contestant_order].id);
	fflush(stdin);
	printf("nhap quoc tich cua van dong vien thu %d: ",contestant_order+1);
	scanf("%s",&inf[contestant_order].nation);
	fflush(stdin);
	printf("nhap ten cua van dong vien thu %d: ",contestant_order+1);
	scanf("%[^\n]%*c",&inf[contestant_order].name);
	fflush(stdin);
}
void main()
{
	char doneinput=0, doneplay=0, input=0,i=1,j;
	int contestant_amount=0;
	char search[20];
	info inf[20];
	info temp;
	do
	{	
		if (!doneinput)
		{
			printf("1. Nhap thong tin truoc khi thi dau\n");
			printf("Nhap so luong van dong vien (lon hon 0) và lan luot thong tin ID, Nation va Name cua tung van dong vien. SO luong van dong vien tham gia chung ket khong qua 20\n");
		}
		if (doneinput) printf("\n2. In thong tin\n");
		printf("3. Thi dau\n");
		printf("Nhap ket qua cua tung van dong vien theo moi luot thi dau. Sau moi luot thi dau in ra ket qua cua luot do\n");
		if (doneplay)
		{
			printf("\n4. TIm kiem\n");
			printf("- Tim kiem theo quoc gia: Nhap ten va quoc gia sau do tra lai ket qua\n");
			printf("- Tim kiem theo ten van dong vien: Nhap ten van dong vien va tra lai ket qua\n");
			printf("\n- 5. In ket qua\n");
		}
		printf("6. ket thuc\n");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
			{
				do
				{
					fflush(stdin);
					printf("Nhap so luong van dong vien: ");
					scanf("%d",&contestant_amount);
				}
				while (contestant_amount>20);
				for (i=0; i<contestant_amount ; i++)
				{
					nhapthongtin(inf, i);
				}
				doneinput=1;
				break;
			};
			case 2:
			 {
				printf("ID   Nation   Name            R1     R2     R3     FR\n");
				for (i=0; i<contestant_amount ; i++)
					printf("%2d   %s      %-15s %.2f   %.2f   %.2f   %.2f\n",inf[i].id,inf[i].nation,inf[i].name, inf[i].result[0], inf[i].result[1], inf[i].result[2], inf[i].result[3]);
			}
			break;
			case 4:
			{
				printf("nhap ten van dong vien can tim kiem: ");
				scanf("%s",search);
				printf("ID   Nation   Name            R1     R2     R3     FR\n");
				for (i=0; i<contestant_amount ; i++)
					if (strstr(inf[i].name,search)!=NULL) printf("%2d   %s      %-15s %.2f   %.2f   %.2f   %.2f\n",inf[i].id,inf[i].nation,inf[i].name, inf[i].result[0], inf[i].result[1], inf[i].result[1], inf[i].result[2], inf[i].result[3] );
				break;
			}
			case 3: 
			{
				for (i=0; i<contestant_amount ; i++)
				{
					printf("nhap ket qua thi dau luot 1 cua van dong vien thu %d: ",i+1);
					scanf("%f",&inf[i].result[0]);
					if ((inf[i].result[0])>(inf[i].result[3])) inf[i].result[3]=inf[i].result[0];
				}
				for (i=0; i<contestant_amount ; i++)
				{
					printf("nhap ket qua thi dau luot 2 cua van dong vien thu %d: ",i+1);
					scanf("%f",&inf[i].result[1]);
					if ((inf[i].result[1])>(inf[i].result[3])) inf[i].result[3]=inf[i].result[1];
				}
				for (i=0; i<contestant_amount ; i++)
				{
					printf("nhap ket qua thi dau luot 3 cua van dong vien thu %d: ",i+1);
					scanf("%f",&inf[i].result[2]);
					if ((inf[i].result[2])>(inf[i].result[3])) inf[i].result[3]=inf[i].result[2];
				}
				doneplay = 1;
				break;
			}
			case 5:
			{
				for (i=0; i<contestant_amount-1; i++)
					for (j=0; j< contestant_amount-i-1; j++)
					{
						if (inf[j].result[3] < inf[j+1].result[3])
						{
							temp = inf[j];
							inf[j] = inf[j+1];
							inf[j+1] = temp;
						}
					}		
				printf("ID   Nation   Name            R1     R2     R3     FR\n");
				for (i=0; i<contestant_amount ; i++)
					printf("%2d   %s      %-15s %.2f   %.2f   %.2f   %.2f\n",inf[i].id,inf[i].nation,inf[i].name, inf[i].result[0], inf[i].result[1], inf[i].result[2], inf[i].result[3]);			
			}
		}
	}
	while (input!=6);
}
