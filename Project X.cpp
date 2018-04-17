#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

	FILE *inp_main;
	int i=1;
	static int count=1;
	

void CreateTable();
void AddData();
void disp();
void dispteam();
void srchplyr();
void delt();
void dellall();
main()
{
	
	Sleep(500);
	system ("Color 1A");
	printf("\n\t\t\t\tWelcome To The\n\t\t\t    Premier League Database");
	Sleep(3000);
	
   	int n;
	do
	{		printf("\n\n\n\n\n\n\n\n\n\n\n\n============================\n");
			printf("Enter : \n 1 For Team Name \n 2 For Adding  Data To A Team \n 3 For Displaying Enlisted teams \n 4 For Displaying Data Of A Team \n 5 For Profile Of A Specific Player \n 6 For Deleting a Team\n 7 For Deleting All Database\n 8 To Exit\n");
			printf("============================\n\n\n\n\n\n\n\n\n\n\n\n");
			scanf("%d",&n);
			
			if(n==1)
			{
				CreateTable();
			}
			if(n==2)
			{
				AddData();	
			}
			if(n==3)
			{
				disp();
			}
			if(n==4)
			{
				dispteam();
			}
			if(n==5)
			{
				srchplyr();
			}
			if(n==6)
			{
				delt();
			}
			if(n==7)
			{
				dellall();
			}
		
	}while(n!=8);
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  Exiting...\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tCopyrights 2014");
	Sleep(3000);
}
void CreateTable()
{
	inp_main=fopen("main.txt","a");
	fflush(stdin);
	FILE *inp_1;
	char team[20];
	printf("\n\n\n\nEnter Team Name : ");
	gets(team);
	inp_1=fopen(team,"a");
	fprintf(inp_1,"%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,205,205,187);
	fprintf(inp_1,"\n%c  Name\t%c Position\t%c Age\t%c Nationality%c\n",186,186,186,186,186,186);
	fprintf(inp_1,"%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",186,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,186);
	fprintf(inp_main,"%s\n",team);
	fclose(inp_1);
	fflush(stdin);
	fclose(inp_main);
}
void AddData()
{
	disp();
	fflush(stdin);
	char ad[20];
	char name[20];
	printf("\n\nWhich Team Do You Want To Add Data To?\n");
	gets(ad);
	fflush(stdin);
	FILE *inp_2;
	inp_2=fopen(ad,"a");
	FILE *inp_4;
	printf("\nEnter Name : ");
	gets(name);
	inp_4=fopen(name,"a");
	fprintf(inp_2,"%c %s\t",186,name);
	fprintf(inp_4,"Name : %s",name);
	printf("\nEnter Position : ");
	char pos[10];
	gets(pos);
	fprintf(inp_2," %s\t",pos);
	fprintf(inp_4,"\nPosition : %s",pos);
	printf("\nEnter Age : ");
	int x;
	scanf("%d",&x);
	fflush(stdin);
	fprintf(inp_2,"\t %d\t",x);
	fprintf(inp_4,"\nAge : %d",x);
	printf("\nEnter Nationality : ");
	char nat[20];
	gets(nat);
	fprintf(inp_2," %s\t\t\n",nat);
	fprintf(inp_4,"\nNationality : %s",nat);
	printf("\nEnter Prefered Foot : ");
	char pf[10];
	gets(pf);
	fprintf(inp_4,"\nPrefered foot : %s",pf);
	printf("\nEnter Weight(KG) : ");
	int we;
	scanf("%d",&we);
	fprintf(inp_4,"\nWeight : %d",we);
	printf("\nEnter Height(Cm) : ");
	int he;
	scanf("%d",&he);
	fprintf(inp_4,"\nHeight : %d",he);
	fflush(stdin);
	printf("\nEnter Date Of Birth : ");
	char dob[10];
	gets(dob);
	fprintf(inp_4,"\nDate Of Birth : %s",dob);
	fclose(inp_2);
	fclose(inp_4);
	fclose(inp_main);
	i++;
	count++;
}
void disp()
{
	int fa=0,l,h1=0,h2=0,h3=0,h4=0,h5=0,h6=0,h7=0,h8=0;
	char ya[50],yb[50],yc[50],yd[50],ye[50],yf[50],yg[50],yh[50];
	inp_main=fopen("main.txt","r");
	printf("\nAvailable Teams Are : \n\n");
	fscanf(inp_main,"%s",ya);
	l=strlen(ya);
	for(fa=0;ya[fa]!='\0';fa++)
	{
		if((ya[fa]>=65 && ya[fa]<=90) || (ya[fa]>=97 && ya[fa]<=122))
		{
			h1++;
		}
	}
	if(h1==l)
	{
		printf("%s\t",ya);
	}
	fscanf(inp_main,"%s",yb);
	l=strlen(yb);
	for(fa=0;yb[fa]!='\0';fa++)
	{
		if((yb[fa]>=65 && yb[fa]<=90) || (yb[fa]>=97 && yb[fa]<=122))
		{
			h2++;
		}
	}
	if(h2==l)
	{
		printf("%s\t",yb);
	}
	fscanf(inp_main,"%s",yc);
	l=strlen(yc);
	for(fa=0;yc[fa]!='\0';fa++)
	{
		if((yc[fa]>=65 && yc[fa]<=90) || (yc[fa]>=97 && yc[fa]<=122))
		{
			h3++;
		}
	}
	if(h3==l)
	{
		printf("%s\t",yc);
	}
	fscanf(inp_main,"%s",yd);
	l=strlen(yd);
	for(fa=0;yd[fa]!='\0';fa++)
	{
		if((yd[fa]>=65 && yd[fa]<=90) || (yd[fa]>=97 && yd[fa]<=122))
		{
			h4++;
		}
	}
	if(h4==l)
	{
		printf("%s\t",yd);
	}
	fscanf(inp_main,"%s",ye);
	l=strlen(ye);
	for(fa=0;ye[fa]!='\0';fa++)
	{
		if((ye[fa]>=65 && ye[fa]<=90) || (ye[fa]>=97 && ye[fa]<=122))
		{
			h5++;
		}
	}
	if(h5==l)
	{
		printf("%s\t",ye);
	}
	fscanf(inp_main,"%s",yf);
	l=strlen(yf);
	for(fa=0;yf[fa]!='\0';fa++)
	{
		if((yf[fa]>=65 && yf[fa]<=90) || (yf[fa]>=97 && yf[fa]<=122))
		{
			h6++;
		}
	}
	if(h6==l)
	{
		printf("%s\t",yf);
	}
	fscanf(inp_main,"%s",yg);
	l=strlen(yg);
	for(fa=0;yg[fa]!='\0';fa++)
	{
		if((yg[fa]>=65 && yg[fa]<=90) || (yg[fa]>=97 && yg[fa]<=122))
		{
			h7++;
		}
	}
	if(h7==l)
	{
		printf("%s\t",yg);
	}
	fscanf(inp_main,"%s",yh);
	l=strlen(yh);
	for(fa=0;yh[fa]!='\0';fa++)
	{
		if((yh[fa]>=65 && yh[fa]<=90) || (yh[fa]>=97 && yh[fa]<=122))
		{
			h8++;
		}
	}
	if(h8==l)
	{
		printf("%s\t",yh);
	}
	fclose(inp_main);
}
void dispteam()
{
	int sa;
	fflush(stdin);
	printf("Enter The Team Name : ");
	char ap[20];
	gets(ap);
	FILE *inp_3;
	inp_3=fopen(ap,"r");
	if (inp_3)
	{
     	while ((sa = getc(inp_3)) != EOF)
        putchar(sa);
    
	}
	fclose(inp_3);
}
void srchplyr()
{
	fflush(stdin);
	printf("\nEnter Player Name :");
	char pl[50];
	gets(pl);
	int c;
    FILE *inp_srch;
    inp_srch = fopen(pl, "r");
    if (inp_srch)
	{
    	while ((c = getc(inp_srch)) != EOF)
    	putchar(c);
    	fclose(inp_srch);
    }
}
void delt()
{
	printf("\nEnter Team Name You Want To Delete : ");
	int st;
	char del[10];
	fflush(stdin);
	gets(del);
	st=remove(del);
 	if(st==0)
 	{
    printf("\n\n%s File Deleted.",del);
 	}
     else
	{
      printf("\n\nUnable To Delete The File\n");
	}
}
void dellall()
{
	fflush(stdin);
	char da[10],db[10],dc[10],dd[10],de[10],df[10],dg[10],dh[10];
	inp_main=fopen("main.txt","r");
	fscanf(inp_main,"%s %s %s %s %s %s %s %s",da,db,dc,dd,de,df,dg,dh);
	remove(da);
	remove(db);
	remove(dc);
	remove(de);
	remove(df);
	remove(dg);
	remove(dh);
	remove(dd);
	fclose(inp_main);
	remove("main.txt");
	fflush(stdin);
	printf("\n\n\n\t\t\t\tDatabase Deleted!");
	Sleep(2000);
	
}
