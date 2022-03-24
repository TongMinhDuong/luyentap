#include <stdio.h>
#include <stdlib.h>

void main()

{
	int a=0;
	int sd=10000000;
	int tien,pin,i,noptien;
	int mypin = 123;
	char lc;
	
	printf("nhao ma pin: ");
	do
	{
		scanf("%d", &pin);
		a++;
	}
	while(pin!=mypin);
		if(pin == mypin)
		{
			printf("login thanh cong.\n\n");
			do
			{
				printf("Lua chon giao dich:\nRut tien an phim 1:\nXem so du an phim 2:\nNop tien an phim 3:\n\n");
				scanf("%d", &i);
				switch (i)
				{
					case 1 :
						printf("nhap so tien muon rut : ");
						scanf("%d", &tien);
						if(tien<=sd)
						{
							printf("Rut thanh cong %d vnd\n\n", tien);
							sd-=tien;
						}
						else
							printf("So du khong du. Vui long kiem tra so du.\n\n");
							break;
							
					case 2 :
						printf("So du hien tai la %d vnd\n\n", sd);
						break;
				
					case 3 :
						printf("nhap so tien muon nop: ");
						scanf("%d",&noptien);
						sd+=noptien;
						printf("Nop thanh cong %d vnd vao tai khoan, So du hien tai la %d vnd\n\n", noptien,sd);
						break;
					
				}
			printf("Ban co muon tiep tuc giao dich Y\\N\n");
			fflush(stdin); 
			scanf("%c", &lc);					
			}
			while(lc=='Y');
				if(lc!='Y')
					printf("Ket thuc giao dich.\n");
		}	
	
}
