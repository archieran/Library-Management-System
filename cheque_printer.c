/*DEFINITION :
NAME :  ABHISHEK HINGORANI - 14
	    ARCHAN RANADE - 86
CLASS 	   : FYIMCA
START DATE : 28/2/15
END DATE   : 1/3/15*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

	//Defines gotoxy() for ANSI C compilers.
	void gotoxy(int x, int y) 
	{
		COORD pos = {x, y};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}

void word_num(int );
void pos_num_word(int , int , int,int );
void cheque(char *ptr,int);

int main()
{
	system("color 0A");
	int i,num;	
	
	printf("ENTER THE NUMBER : ");
	scanf("%d",&num);
	
	printf("  ");
	
	if(num > 65535 || num < 0)
	{
		system("cls");
		printf("PLEASE ENTER A NUMBER BETWEEN 0 AND 65535 !");
		exit(0);
	}

	else
		word_num(num);
	
	return 0;
}


void word_num(int num)
{
	int n,i,rem=0,rev=0,degree=0,flag=0,num2;
	num2=num;
	while(num!=0)
	{
		degree++;
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	
	
	n=rev;
	rem=0;

	if(n==0)
	{
		system("cls");
		//printf("THE NUMBER IN WORDS IS : \n\n");
		printf("ZERO");
	}

	if(n > 0)
		pos_num_word(degree,n,rem,num2);
}

void pos_num_word(int degree, int n, int rem, int num2)
{
	int i,flag=0;
	system("cls");
	char name[50],*ptr;
	
	printf("ENTER NAME : ");
	scanf("\n");
	gets(name);
	
	system("cls");
	
	ptr=name;
	printf("\n\n\n\n\n\n\n\n\t\t");
	
	while(n!=0)
	{
		rem=n%10;
		n=n/10;

		switch(degree)
		{
			case 5 :
				{
					switch(rem)
					{
						case 1 :{
							rem=n%10;
							//n=0;

							switch(rem)
							{
								case 1 :{
									printf("ELEVEN THOUSAND ");
									break;
								}
								case 2 :{
									printf("TWELVE THOUSAND ");
									break;
								}
								case 3 :{
									printf("THIRTEEN THOUSAND ");
									break;
								}
								case 4 :{
									printf("FOURTEEN THOUSAND ");
									break;
								}
								case 5 :{
									printf("FIFTEEN THOUSAND ");
									break;
								}
								case 6 :{
									printf("SIXTEEN THOUSAND ");
									break;
								}
								case 7 :{
									printf("SEVENTEEN THOUSAND ");
									break;
								}
								case 8 :{
									printf("EIGHTEEN THOUSAND ");
									break;
								}
								case 9 :{
									printf("NINETEEN THOUSAND ");
									break;
								}
								case 0 :{
									printf("TEN THOUSAND ");
									break;
								}
							}
							break;
						}
						case 2 :{
							rem=n%10;
							//n=0;

							switch(rem)
							{
								case 1 :{
									printf("TWENTY ONE THOUSAND ");
									break;
								}
								case 2 :{
									printf("TWENTY TWO THOUSAND ");
									break;
								}
								case 3 :{
									printf("TWENTY THREE THOUSAND ");
									break;
								}
								case 4 :{
									printf("TWENTY FOUR THOUSAND ");
									break;
								}
								case 5 :{
									printf("TWENTY FIVE THOUSAND ");
									break;
								}
								case 6 :{
									printf("TWENTY SIX THOUSAND ");
									break;
								}
								case 7 :{
									printf("TWENTY SEVEN THOUSAND ");
									break;
								}
								case 8 :{
									printf("TWENTY EIGHT THOUSAND ");
									break;
								}
								case 9 :{
									printf("TWENTY NINE THOUSAND ");
									break;
								}
								case 0 :{
									printf("TWENTY THOUSAND ");
									break;
								}
							}
								break;
						}
						case 3 :{
							rem=n%10;
							//n=0;

							switch(rem)
							{
								case 1 :{
									printf("THIRTY ONE THOUSAND ");
									break;
								}
								case 2 :{
									printf("THIRTY TWO THOUSAND ");
									break;
								}
								case 3 :{
									printf("THIRTY THREE THOUSAND ");
									break;
								}
								case 4 :{
									printf("THIRTY FOUR THOUSAND ");
									break;
								}
								case 5 :{
									printf("THIRTY FIVE THOUSAND ");
									break;
								}
								case 6 :{
									printf("THIRTY SIX THOUSAND ");
									break;
								}
								case 7 :{
									printf("THIRTY SEVEN THOUSAND ");
									break;
								}
								case 8 :{
									printf("THIRTY EIGHT THOUSAND ");
									break;
								}
								case 9 :{
									printf("THIRTY NINE THOUSAND ");
									break;
								}
								case 0 :{
									printf("THIRTY THOUSAND ");
									break;
								}
							}
								break;
						}
						case 4 :{
							rem=n%10;
							//n=0;

							switch(rem)
							{
								case 1 :{
									printf("FOURTY ONE THOUSAND ");
									break;
								}
								case 2 :{
									printf("FOURTY TWO THOUSAND ");
									break;
								}
								case 3 :{
									printf("FOURTY THREE THOUSAND ");
									break;
								}
								case 4 :{
									printf("FOURTY FOUR THOUSAND ");
									break;
								}
								case 5 :{
									printf("FOURTY FIVE THOUSAND ");
									break;
								}
								case 6 :{
									printf("FOURTY SIX THOUSAND ");
									break;
								}
								case 7 :{
									printf("FOURTY SEVEN THOUSAND ");
									break;
								}
								case 8 :{
									printf("FOURTY EIGHT THOUSAND ");
									break;
								}
								case 9 :{
									printf("FOURTY NINE THOUSAND ");
									break;
								}
								case 0 :{
									printf("FOURTY THOUSAND ");
									break;
								}
							}
								break;
						}
						case 5 :{
							rem=n%10;
							//n=0;

							switch(rem)
							{
								case 1 :{
									printf("FIFTY ONE THOUSAND ");
									break;
								}
								case 2 :{
									printf("FIFTY TWO THOUSAND ");
									break;
								}
								case 3 :{
									printf("FIFTY THREE THOUSAND ");
									break;
								}
								case 4 :{
									printf("FIFTY FOUR THOUSAND ");
									break;
								}
								case 5 :{
									printf("FIFTY FIVE THOUSAND ");
									break;
								}
								case 6 :{
									printf("FIFTY SIX THOUSAND ");
									break;
								}
								case 7 :{
									printf("FIFTY SEVEN THOUSAND ");
									break;
								}
								case 8 :{
									printf("FIFTY EIGHT THOUSAND ");
									break;
								}
								case 9 :{
									printf("FIFTY NINE THOUSAND ");
									break;
								}
								case 0 :{
									printf("FIFTY THOUSAND ");
									break;
								}
							}
								break;
						}
						case 6 :{
							rem=n%10;
							//n=0;

							switch(rem)
							{
								case 1 :{
									printf("SIXTY ONE THOUSAND ");
									break;
								}
								case 2 :{
									printf("SIXTY TWO THOUSAND ");
									break;
								}
								case 3 :{
									printf("SIXTY THREE THOUSAND ");
									break;
								}
								case 4 :{
									printf("SIXTY FOUR THOUSAND ");
									break;
								}
								case 5 :{
									printf("SIXTY FIVE THOUSAND ");
									break;
								}
								case 6 :{
									printf("SIXTY SIX THOUSAND ");
									break;
								}
								case 7 :{
									printf("SIXTY SEVEN THOUSAND ");
									break;
								}
								case 8 :{
									printf("SIXTY EIGHT THOUSAND ");
									break;
								}
								case 9 :{
									printf("SIXTY NINE THOUSAND ");
									break;
								}
								case 0 :{
									printf("SIXTY THOUSAND ");
									break;
								}
							}
								break;
						}
					}
					break;
				}
			case 4 :
				{
					if(degree==4 && flag==1)
						break;
					switch(rem)
					{

						case 1 :{
							printf("ONE THOUSAND ");
							break;
						}
						case 2 :{
							printf("TWO THOUSAND ");
							break;
						}
						case 3 :{
							printf("THREE THOUSAND ");
							break;
						}
						case 4 :{
							printf("FOUR THOUSAND ");
							break;
						}
						case 5 :{
							printf("FIVE THOUSAND ");
							break;
						}
						case 6 :{
							printf("SIX THOUSAND ");
							break;
						}
						case 7 :{
							printf("SEVEN THOUSAND ");
							break;
						}
						case 8 :{
							printf("EIGHT THOUSAND ");
							break;
						}
						case 9 :{
							printf("NINE THOUSAND ");
							break;
						}

					}
					break;
				}

			case 3 :
				{
					switch(rem)
					{
						case 1 :{
							printf("ONE HUNDRED ");
							break;
						}
						case 2 :{
							printf("TWO HUNDRED ");
							break;
						}
						case 3 :{
							printf("THREE HUNDRED ");
							break;
						}
						case 4 :{
							printf("FOUR HUNDRED ");
							break;
						}
						case 5 :{
							printf("FIVE HUNDRED ");
							break;
						}
						case 6 :{
							printf("SIX HUNDRED ");
							break;
						}
						case 7 :{
							printf("SEVEN HUNDRED ");
							break;
						}
						case 8 :{
							printf("EIGHT HUNDRED ");
							break;
						}
						case 9 :{
							printf("NINE HUNDRED ");
							break;
						}

					}
					break;
				}

				case 2 :
				{
					switch(rem)
					{
						case 1 :{
							rem=n%10;
							n=0;

							switch(rem)
							{
								case 1 :{
									printf("ELEVEN");
									break;
								}
								case 2 :{
									printf("TWELVE");
									break;
								}
								case 3 :{
									printf("THIRTEEN");
									break;
								}
								case 4 :{
									printf("FOURTEEN");
									break;
								}
								case 5 :{
									printf("FIFTEEN");
									break;
								}
								case 6 :{
									printf("SIXTEEN");
									break;
								}
								case 7 :{
									printf("SEVENTEEN");
									break;
								}
								case 8 :{
									printf("EIGHTEEN");
									break;
								}
								case 9 :{
									printf("NINETEEN");
									break;
								}
							}
							break;
						}
						case 2 :{
							printf("TWENTY ");
							break;
						}
						case 3 :{
							printf("THIRTY ");
							break;
						}
						case 4 :{
							printf("FOURTY ");
							break;
						}
						case 5 :{
							printf("FIFTY ");
							break;
						}
						case 6 :{
							printf("SIXTY ");
							break;
						}
						case 7 :{
							printf("SEVENTY ");
							break;
						}
						case 8 :{
							printf("EIGHTY ");
							break;
						}
						case 9 :{
							printf("NINETY ");
							break;
						}
					}
					break;
				}

				case 1 :
				{
					switch(rem)
					{
						case 1 :{
							printf("ONE ");
							break;
						}
						case 2 :{
							printf("TWO ");
							break;
						}
						case 3 :{
							printf("THREE ");
							break;
						}
						case 4 :{
							printf("FOUR ");
							break;
						}
						case 5 :{
							printf("FIVE ");
							break;
						}
						case 6 :{
							printf("SIX ");
							break;
						}
						case 7 :{
							printf("SEVEN ");
							break;
						}
						case 8 :{
							printf("EIGHT ");
							break;
						}
						case 9 :{
							printf("NINE ");
							break;
						}
					}
					break;
				}
				
				default : {
					system("cls");
							printf("ENTER A VALID VALUE !");
							break;
				}
		}

		degree--;
		flag++;
	}
	
	cheque(ptr,num2);
}

void cheque(char *ptr,int num2)
{
	int i,j=0;
	
	SYSTEMTIME str_t;
	GetSystemTime(&str_t);
	
	printf(" ");
	for(i=3;i<74;i++)
	{
		gotoxy(i,0);
		printf("-");
	}
	
	gotoxy(6,1);
	printf("HDFC BANK");
	gotoxy(6,2);
	printf("---------");	
	
	gotoxy(55,1);
	printf("DATE %d/%d/%d",str_t.wDay,str_t.wMonth,str_t.wYear);
	gotoxy(55,2);
	printf("     --------");	
	
	for(i=3;i<74;i++)
	{
		gotoxy(i,3);
		printf("-");
	}
	
	for(i=3;i<74;i++)
	{
		gotoxy(i,15);
		printf("-");
	}
	printf("\n");
	
	for(i=1;i<15;i++)
	{
		gotoxy(3,i);
		printf("|");
	}
	
	for(i=1;i<15;i++)
	{
		gotoxy(74,i);
		printf("|");
	}
	
	gotoxy(7,5);
	printf("PAY");
	
	for(i=12;*(ptr+j)!='\0';i++)
	{	
		if(*(ptr+j)!='\0')
		{
			gotoxy(i,5);
			printf("%c",*(ptr+j));
			j++;
		}
	}
	
	gotoxy(62,5);
	printf("OR BEARER");
	
	for(i=12;i<60;i++)
	{
		gotoxy(i,6);
		printf("-");
	}
	
	gotoxy(7,8);
	printf("RUPEES");
	
	for(i=15;i<68;i++)
	{
		gotoxy(i,9);
		printf("-");
	}
	
	gotoxy(50,11);
	printf("|");
	
	for(i=50;i<65;i++)
	{
		gotoxy(i,10);
		printf("-");
	}
	
	gotoxy(64,11);
	printf("|");
	
	for(i=50;i<65;i++)
	{
		gotoxy(i,12);
		printf("-");
	}
	
	gotoxy(52,11);
	printf("RS. |");
	gotoxy(57,11);
	printf("%d",num2);
	
	for(i=10;i<35;i++)
	{
		gotoxy(i,11);
		printf("-");
	}
	
	for(i=10;i<35;i++)
	{
		gotoxy(i,13);
		printf("-");
	}
	
	gotoxy(10,12);
	printf("| A/C NO | 326584326532");
	gotoxy(34,12);
	printf("|");
	printf("\n\n\n\n");
	getch();
}
