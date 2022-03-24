#include <stdio.h>
#include <stdlib.h>

void main()
{
	int nauda,bacxiu,nuocep,sl,lc;
	int tongtien=0;
	int t1=0,t2=0,t3=0;
	
	printf("\t\t\t\t\tMeNu:\n");
	printf("Nau da 40k. an phim 1 de oder.\nBac xiu 35k. an phim 2 de oder.\nSinh to hoa qua 50k. an phim 3 de oder.\n\n");
	do
	{
		printf("\tNhap lua chon : ");
		scanf("%d",&lc);
		switch(lc)
		{
			case 1 :
				printf("Nhap so luong : ");
				scanf("%d",&sl);
				t1=sl*40000;
				printf("%d Nau da het %d vnd.\n", sl,t1);
				break;
				
			case 2 :
				printf("Nhap so luong : ");
				scanf("%d",&sl);
				t2=sl*35000;
				printf("%d Bac xiu het %d vnd.\n",sl,t2);
				break;
				
			case 3 :
				printf("Nhap so luong : ");
				scanf("%d",&sl);
				t3=sl*50000;
				printf("%d Sinh to het %d vnd.\n",sl,t3);
				break;
		}
		printf("Ban co muon tiep tuc oder ( Y\\N ) : ");
		fflush(stdin);  
		scanf("%c", &lc);
		
	}while(lc=='Y');
		if(lc!='Y')
		{
			tongtien=t1+t2+t3;
			printf("Tong tien can thanh toan la %d\n", tongtien);
			printf("Chuc quy khach ngon mieng.\n");
		}
}
