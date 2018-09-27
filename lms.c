/*Project Definition:
Members:
Abhishek Hingorani - 14
Archan Ranade      - 86
Start Date:9/12/2014
End Date:21/12/2014*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<conio.h>

void gotoxy(int x, int y)
{
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	//system("mode CON: COLS=128");
}

void book_unavailable();
void search();
void display_lib();
void add_book();
void rule_book();
void killer();
void dis_date();
void ret_book();
void check_ret();
void file_mgmt(int, int);
void loading();

int p=5,q=5,r=5,s=5,t=5;
int available_qty[50]={2,3,5,6,4,0,0,0,0,0,5,6,5,4,2,0,0,0,0,0,3,1,2,1,5,0,0,0,0,0,6,2,3,6,5,0,0,0,0,0,2,5,4,9,8,0,0,0,0,0};
char c_prog[10][30]={"ANSI C","INTRO TO C","ADVANCED C","GRAPHICS IN C","C++","  ","  ","  ","  ","  "};
char html[10][30]={"BLACK BOOK HTML","CSS AND JAVASCRIPT IN HTML","HTML5","XML & DHTML","ADVANCED JAVA IN WEB","  ","  ","  ","  ","  "};
char android[10][30]={"INTRO TO ANDROID OS","ANDROID OS DEVELOPMENT","ANDROID APPS","SECURITY IN ANDROID OS","ADVANCED APP DEVELOPMENT","  ","  ","  ","  ","  "};
char java[10][30]={"CORE JAVA","PROGRAMMING IN JAVA","INTRO TO JAVA","APPLIED JAVA","ADVANCED JAVA IN WEB","  ","  ","  ","  ","  "};
char dbms[10][30]={"INTRO TO MS ACCESS","INTRODUCTION TO  RDBMS","DATA ANALYSIS IN DBMS","ADVANCED RDBMS","APPLIED RDBMS","  ","  ","  ","  ","  "};

void main()
{
	loading();
	system("cls");
	system("mode CON: COLS=128");
	system("color 70");
	int i, n;
	do
	{
		system("cls");
		printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB LIBRARY MANAGEMENT SYSTEM \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
		printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 HLICA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n");
		printf("\n\n\t\t\t\t\t\t\t 1. ISSUE BOOK\n");
		printf("\t\t\t\t\t\t\t 2. VIEW LIBRARY\n");
		printf("\t\t\t\t\t\t\t 3. RETURN BOOK\n");
		printf("\t\t\t\t\t\t\t 4. ADD NEW BOOK\n");
		printf("\t\t\t\t\t\t\t 5. RULES OF LIBRARY\n");
		printf("\t\t\t\t\t\t\t 6. EXIT\n");
		
		printf("\n\t\t\t\t\t\t\t ENTER CHOICE  :  ");
		scanf("%d", &n);
		
		switch(n)
		{
			case 1:search();
					break;
					
			case 2:display_lib();
					getch();
					break;
					
			case 3: ret_book();
					break;
					
			case 4: add_book();
					break;
					
			case 5:rule_book();
					break;
					
			case 6: killer();
					break;
					
			default:system("cls");
					printf("Enter A Valid Choice");
					break;
		}
	}while(n != 6);
}

void display_lib()
{
	int i,choice;
	system("cls");
	for(i=0;i<60;i++)
		printf("\xB2");
	printf("LIBRARY");
	for(i=0;i<61;i++)
		printf("\xB2");
	printf("\n\n");
	
	printf("1. C PROGRAM      2. HTML                          3. ANDROID                   4. JAVA                  5. DBMS\n");
	printf("------------      -------                          ----------                   -------                  -------\n\n\n");
	printf("-%s          -%s                 -%s         -%s               -%s\n\n",c_prog[0],html[0],android[0],java[0],dbms[0]);
	printf("-%s      -%s      -%s      -%s     -%s\n\n",c_prog[1],html[1],android[1],java[1],dbms[1]);
	printf("-%s      -%s                           -%s                -%s           -%s\n\n",c_prog[2],html[2],android[2],java[2],dbms[2]);
	printf("-%s   -%s                     -%s      -%s            -%s\n\n",c_prog[3],html[3],android[3],java[3],dbms[3]);
	printf("-%s             -%s            -%s    -%s    -%s\n\n",c_prog[4],html[4],android[4],java[4],dbms[4]);
	printf("-%s              -%s                              -%s                          -%s                      -%s\n\n",c_prog[5],html[5],android[5],java[5],dbms[5]);
	printf("-%s              -%s                              -%s                          -%s                      -%s\n\n",c_prog[6],html[6],android[6],java[6],dbms[6]);
	printf("-%s              -%s                              -%s                          -%s                      -%s\n\n",c_prog[7],html[7],android[7],java[7],dbms[7]);
	printf("-%s              -%s                              -%s                          -%s                      -%s\n\n",c_prog[8],html[8],android[8],java[8],dbms[8]);
	printf("-%s              -%s                              -%s                          -%s                      -%s\n\n",c_prog[9],html[9],android[9],java[9],dbms[9]);
}

void search()
{
	display_lib();
	int category[5], choice[5], x, i, c;
	
	printf("\n\n\n\t\t\t\t\t\t\tENTER CATEGORY  :  ");
	scanf("%d", &x);

	switch(x)
	{
		case 1:
			{
				system("cls");
				printf("C PROGRAMING\n");
				printf("------------\n\n");
				printf("    BOOK                          AVAILABLE\n");
				printf("--------------------------------------------\n\n");
				printf("1. %s                             %d\n",c_prog[0],available_qty[0]);
				printf("2. %s                         %d\n",c_prog[1],available_qty[1]);
				printf("3. %s                         %d\n",c_prog[2],available_qty[2]);
				printf("4. %s                      %d\n",c_prog[3],available_qty[3]);
				printf("5. %s                       	      %d\n",c_prog[4],available_qty[4]);
				printf("6. %s                        	      %d\n",c_prog[5],available_qty[5]);
				printf("7. %s                        	      %d\n",c_prog[6],available_qty[6]);
				printf("8. %s                                 %d\n",c_prog[7],available_qty[7]);
				printf("9. %s                        	      %d\n",c_prog[8],available_qty[8]);
				printf("10.%s                                 %d\n",c_prog[9],available_qty[9]);
				printf("\nENTER BOOK CODE  :  ");
				scanf("%d", &c);
				system("cls");
				switch(c)
				{
					case 1:
						{
							if(available_qty[0]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE ISSUED ANSI C");
							printf("\n\nAUTHOR NAME  :  E. BALAGURSAMY");
							available_qty[0]--;

							dis_date();
							break;
						}
						
					case 2:
						{
							if(available_qty[1]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE ISSUED INTRODUCTION TO C");
							printf("\n\nAUTHOR NAME  :  DR. KUNTAL");
							available_qty[1]--;
							
							dis_date();
							break;
						}
						
					case 3:
						{
							if(available_qty[2]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE ISSUED ADVANCED C");
							printf("\n\nAUTHOR NAME  :  PROF. HINGORANI");
							available_qty[2]--;
							
							dis_date();
							break;
						}
						
					case 4:
						{
							if(available_qty[3]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE ISSUED GRAPHICS IN C");
							printf("\n\nAUTHOR NAME  :  DR. AYANI");
							available_qty[3]--;
							
							dis_date();
							break;
						}
						
					case 5:
						{
							if(available_qty[4]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE ISSUED INTRODUCTION TO C++");
							printf("\n\nAUTHOR NAME  :  DR. YADAV");
							available_qty[4]--;
							
							dis_date();
							break;
						}
						
				}
							break;
			}
			
		case 2:
			{
				system("cls");
				printf("HTML\n");
				printf("----\n\n");
				printf("    BOOK                          AVAILABLE\n");
				printf("--------------------------------------------\n\n");
				printf("1. %s                    %d\n",html[0],available_qty[10]);
				printf("2. %s         %d\n",html[1],available_qty[11]);
				printf("3. %s                      	      %d\n",html[2],available_qty[12]);
				printf("4. %s                        %d\n",html[3],available_qty[13]);
				printf("5. %s               %d\n",html[4],available_qty[14]);
				printf("6. %s                                 %d\n",html[5],available_qty[15]);
				printf("7. %s                                 %d\n",html[6],available_qty[16]);
				printf("8. %s                                 %d\n",html[7],available_qty[17]);
				printf("9. %s                                 %d\n",html[8],available_qty[18]);
				printf("10.%s                                 %d\n",html[9],available_qty[19]);
				printf("\nENTER BOOK CODE  :  ");
				scanf("%d", &c);
                system("cls");
				switch(c)
				{
					case 1:
						{
							if(available_qty[10]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE ISSUED BLACK BOOK HTML");
							printf("\n\nAUTHOR NAME  :  DR. PANDYA");
							available_qty[10]--;
							
							dis_date();
							break;
						}

					case 2:
						{
							if(available_qty[11]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE ISSUED CSS + JAVASCRIPT");
							printf("\n\nAUTHOR NAME  :  PROF. JAMBUDI");
							available_qty[11]--;
							
							dis_date();
							break;
						}

					case 3:
						{
							if(available_qty[12]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE ISSUED INTRO TO HTML5");
							printf("\n\nAUTHOR NAME  :  IVAN BAYROSS");
							available_qty[12]--;
							
							dis_date();
							break;
						}

					case 4:
						{
							if(available_qty[13]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE ISSUED XML & DHTML");
							printf("\n\nAUTHOR NAME  :  DR. FREEMAN");
							available_qty[13]--;
							
							dis_date();
							break;
						}

					case 5:
						{
							if(available_qty[14]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE ISSUED ADVANCED HTML");
							printf("\n\nAUTHOR NAME  :  DR. RITCHIE");
							available_qty[14]--;
							
							dis_date();
							break;
						}
				}
					break;
			}

		case 4:
			{
				system("cls");
				printf("JAVA\n");
				printf("----\n\n");
				printf("    BOOK                          AVAILABLE\n");
				printf("--------------------------------------------\n\n");
				printf("1. %s                        %d\n",java[0],available_qty[30]);
				printf("2. %s              %d\n",java[1],available_qty[31]);
				printf("3. %s                    %d\n",java[2],available_qty[32]);
				printf("4. %s                     %d\n",java[3],available_qty[33]);
				printf("5. %s             %d\n",java[4],available_qty[34]);
				printf("6. %s                               %d\n",java[5],available_qty[35]);
				printf("7. %s                               %d\n",java[6],available_qty[36]);
				printf("8. %s                               %d\n",java[7],available_qty[37]);
				printf("9. %s                               %d\n",java[8],available_qty[38]);
				printf("10.%s                               %d\n",java[9],available_qty[39]);
				printf("\nENTER BOOK CODE  :  ");
				scanf("%d", &c);

				system("cls");
				
				switch(c)
				{
					case 1:
						{
							if(available_qty[30]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE ISSUED CORE JAVA");
							printf("\n\nAUTHOR NAME  :  DR. PATEL");
							available_qty[30]--;
							
							dis_date();
							break;
						}

					case 2:
						{
							if(available_qty[31]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE ISSUED PROGRAMMING IN JAVA");
							printf("\n\nAUTHOR NAME  :  DR. HIMESH");
							available_qty[31]--;
							
							dis_date();
							break;
						}

					case 3:
						{
							if(available_qty[32]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE ISSUED INTRO TO JAVA");
							printf("\n\nAUTHOR NAME  :  PROF. SHAH");
							available_qty[32]--;
							
							dis_date();
							break;
						}

					case 4:
						{
							if(available_qty[33]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE ISSUED APPLIED JAVA");
							printf("\n\nAUTHOR NAME  :  DR. AYANI");
							available_qty[33]--;
							
							dis_date();
							break;
						}

					case 5:
						{
							if(available_qty[34]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE ISSUED ADVANCED JAVA IN WEB");
							printf("\n\nAUTHOR NAME  :  DR. PARMAR");
							available_qty[34]--;
							
							dis_date();
							break;
						}
							
				}
				break;
			}

		case 3:
			{
				system("cls");
				printf("ANDROID\n");
				printf("-------\n\n");
				printf("    BOOK                          AVAILABLE\n");
				printf("--------------------------------------------\n\n");
				printf("1. %s              %d\n",android[0],available_qty[20]);
				printf("2. %s           %d\n",android[1],available_qty[21]);
				printf("3. %s                     %d\n",android[2],available_qty[22]);
				printf("4. %s           %d\n",android[3],available_qty[23]);
				printf("5. %s         %d\n",android[4],available_qty[24]);
				printf("6. %s                               %d\n",android[5],available_qty[25]);
				printf("7. %s                               %d\n",android[6],available_qty[26]);
				printf("8. %s                               %d\n",android[7],available_qty[27]);
				printf("9. %s                               %d\n",android[8],available_qty[28]);
				printf("10.%s                               %d\n",android[9],available_qty[29]);
				printf("\nENTER BOOK CODE  :  ");
				scanf("%d", &c);

				system("cls");
				
				switch(c)
				{
					case 1:
						{
							if(available_qty[20]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE INTRO TO ANDROID OS");
							printf("\n\nAUTHOR NAME  :  PROF. JOBS");
							available_qty[20]--;
							
							dis_date();
							break;
						}

					case 2:
						{
							if(available_qty[21]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE ISSUED ANDROID OS DEVELOPMENT");
							printf("\n\nAUTHOR NAME  :  DR. RANADE");
							available_qty[21]--;
							
							dis_date();
							break;
						}

					case 3:
						{
							if(available_qty[22]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE ISSUED ANDROID APPS");
							printf("\n\nAUTHOR NAME  :  DR. RANADE");
							available_qty[22]--;
							
							dis_date();
							break;
						}

					case 4:
						{
							if(available_qty[23]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE ISSUED SECURITY IN ANDROID OS");
							printf("\n\nAUTHOR NAME  :  PROF. DASH");
							available_qty[23]--;
							
							dis_date();
							break;
						}

					case 5:
						{
							if(available_qty[24]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE ISSUED ADVANCED APP DEVELOPMENT");
							printf("\n\nAUTHOR NAME  :  PROF. MCGUIRE");
							available_qty[24]--;
							
							dis_date();
							break;
						}
				}
						break;
				
			}

		case 5:
			{
				system("cls");
				printf("DBMS\n");
				printf("----\n\n");
				printf("    BOOK                          AVAILABLE\n");
				printf("--------------------------------------------\n\n");
				printf("1. %s               %d\n",dbms[0],available_qty[40]);
				printf("2. %s           %d\n",dbms[1],available_qty[41]);
				printf("3. %s            %d\n",dbms[2],available_qty[42]);
				printf("4. %s                   %d\n",dbms[3],available_qty[43]);
				printf("5. %s                    %d\n",dbms[4],available_qty[44]);
				printf("6. %s                               %d\n",dbms[5],available_qty[45]);
				printf("7. %s                               %d\n",dbms[6],available_qty[46]);
				printf("8. %s                               %d\n",dbms[7],available_qty[47]);
				printf("9. %s                               %d\n",dbms[8],available_qty[48]);
				printf("10.%s                               %d\n",dbms[9],available_qty[49]);
				printf("\nENTER BOOK CODE  :  ");
				scanf("%d", &c);

				system("cls");
				
				switch(c)
				{
					case 1:
						{
							if(available_qty[40]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE ISSUED INTRO TO MS ACCESS");
							printf("\n\nAUTHOR NAME  :  PROF. GATES");
							available_qty[40]--;
							
							dis_date();
							break;
						}

					case 2:
						{
							if(available_qty[41]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE ISSUED INTRODUCTION TO  RDBMS");
							printf("\n\nAUTHOR NAME  :  DR. NAIK");
							available_qty[41]--;
							
							dis_date();
							break;
						}

					case 3:
						{
							if(available_qty[42]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE ISSUED DATA ANALYSIS IN DBMS");
							printf("\n\nAUTHOR NAME  :  DR. OZA");
							available_qty[42]--;
							
							dis_date();
							break;
						}

					case 4:
						{
							if(available_qty[43]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE ISSUED ADVANCED RDBMS");
							printf("\n\nAUTHOR NAME  :  DR. COLE");
							available_qty[43]--;
							
							dis_date();
							break;
						}

					case 5:
						{
							if(available_qty[44]==0)
							{
								book_unavailable();
								return;
							}
							
							printf("\nYOU HAVE ISSUED APPLIED RDBMS");
							printf("\n\nAUTHOR NAME  :  PROF. WAYNE");
							available_qty[44]--;
							
							dis_date();
							break;
						}
				
				}
							break;
			}

	}
}

void book_unavailable()
{
	system("cls");
	printf("\n\n\t\t\t\t\t\tTHIS BOOK IS CURRENTLY NOT IN OUR STOCK\n\n");
	getch();
	return;	
}

void killer()
{
	int i;
	for(i=3;i>0;i--)
	{
		system("cls");
		printf("THANK YOU\n");
		printf("PROGRAM WILL CLOSE IN %d ......", i);
		Sleep(1000);
	}
	system("cls");
	printf("GOODBYE.");
	exit(0);
}

void rule_book()
{
	system("cls");
	printf("ASASASASSA\n");
	printf("ASASASASSA\n");
	printf("ASASASASSA\n");
	printf("ASASASASSA\n");
	printf("ASASASASSA\n");
	getch();
}

void dis_date()
{
	SYSTEMTIME str_t;
	GetSystemTime(&str_t);
	int day = str_t.wDay;
	int month = str_t.wMonth;
	int year = str_t.wYear;
	
	int x = 31 - str_t.wDay;
	int flagx = x - 10;
	
	int y = 30 - str_t.wDay;
	int flagy = y - 10;
	
	int z = 28 - str_t.wDay;
	int flagz = z - 10;
	
	int leap = (str_t.wYear % 100);
	int leapl = 29 - str_t.wDay;
	int flag_leap = leapl - 10;
	
	printf("\n\nISSUE DATE    :  %d / %d / %d",str_t.wDay,str_t.wMonth,str_t.wYear);
	
	if(str_t.wDay==31 && str_t.wMonth<12)
	{
		day=0;day+=10;month=str_t.wMonth+1;
		printf("\nRETURN DATE    : %d / %d / %d",day,month,year);getch();return;
	}
	
	if(str_t.wDay+10 > 31)// && str_t.wMonth == 1 || str_t.wMonth == 3 || str_t.wMonth == 5 || str_t.wMonth == 7 || str_t.wMonth == 8 || str_t.wMonth == 10 || str_t.wMonth == 12)
	{
			//str_t.wMonth ++;
			month++;
			if(month > 12)
			{
				year++;
				day = flagx;
				month = 1;
				printf("\nRETURN DATE    : %d / %d / %d",day,month,year);getch();
				return;
			}
	}
	
	else
	{
		day += 10;
		printf("\nRETURN DATE    : %d / %d / %d",day,month,year);getch();
		return;
	}
	
	if(str_t.wDay+10 > 30 && str_t.wMonth == 4 || str_t.wMonth == 6 || str_t.wMonth == 9 || str_t.wMonth == 11)
	{
		month++;
		day = flagy;
		printf("\nRETURN DATE    : %d / %d / %d",day,month,year);getch();
		return;
	}
	
	if(str_t.wMonth == 2 && (leap % 4) == 0 && str_t.wDay > 29)
	{	
		month++;
		day = flag_leap;
		printf("\nRETURN DATE    : %d / %d / %d",day,month,year);getch();
		return;
	}
	
	if(str_t.wMonth == 2 && (leap % 4) != 0 && str_t.wDay > 28)
	{	
		month++;
		day = flagz;
		printf("\nRETURN DATE    : %d / %d / %d",day,month,year);getch();
		return;
	}
}

void ret_book()
{
	display_lib();
	int category[5], choice[5], x, i, c;

	printf("\n\n\n\t\t\t\t\t\t\tENTER CATEGORY  :  ");
	scanf("%d", &x);

	switch(x)
	{
		case 1:
			{
				system("cls");
				printf("C PROGRAMING\n");
				printf("------------\n\n");
				printf("    BOOK                          AVAILABLE\n");
				printf("--------------------------------------------\n\n");
				printf("1. %s                             %d\n",c_prog[0],available_qty[0]);
				printf("2. %s                         %d\n",c_prog[1],available_qty[1]);
				printf("3. %s                         %d\n",c_prog[2],available_qty[2]);
				printf("4. %s                      %d\n",c_prog[3],available_qty[3]);
				printf("5. %s                       	      %d\n",c_prog[4],available_qty[4]);
				printf("6. %s                        	      %d\n",c_prog[5],available_qty[5]);
				printf("7. %s                        	      %d\n",c_prog[6],available_qty[6]);
				printf("8. %s                                 %d\n",c_prog[7],available_qty[7]);
				printf("9. %s                        	      %d\n",c_prog[8],available_qty[8]);
				printf("10.%s                                 %d\n",c_prog[9],available_qty[9]);
				printf("\nENTER BOOK CODE  :  ");
				scanf("%d", &c);
				system("cls");
				switch(c)
				{
					case 1:
						{
							

							printf("\nYOU HAVE RETURNED ANSI C");
							printf("\n\nAUTHOR NAME  :  E. BALAGURSAMY");
							available_qty[0]++;
							
							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							getch();
							return;
							break;
						}

					case 2:
						{
							

							printf("\nYOU HAVE RETURNED INTRODUCTION TO C");
							printf("\n\nAUTHOR NAME  :  DR. KUNTAL");
							available_qty[1]++;
							
							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							getch();
							return;
							break;
						}

					case 3:
						{
							

							printf("\nYOU HAVE RETURNED ADVANCED C");
							printf("\n\nAUTHOR NAME  :  PROF. HINGORANI");
							available_qty[2]++;
							
							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							getch();
							return;
							break;
						}

					case 4:
						{
							

							printf("\nYOU HAVE RETURNED GRAPHICS IN C");
							printf("\n\nAUTHOR NAME  :  DR. AYANI");
							available_qty[3]++;
							
							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							getch();
							return;
							break;
						}

					case 5:
						{
							

							printf("\nYOU HAVE RETURNED INTRODUCTION TO C++");
							printf("\n\nAUTHOR NAME  :  DR. YADAV");
							available_qty[4]++;
							
							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							getch();
							return;
							break;
						}

				}
							break;
			}

		case 2:
			{
				system("cls");
				printf("HTML\n");
				printf("----\n\n");
				printf("    BOOK                          AVAILABLE\n");
				printf("--------------------------------------------\n\n");
				printf("1. %s                    %d\n",html[0],available_qty[10]);
				printf("2. %s         %d\n",html[1],available_qty[11]);
				printf("3. %s                      	      %d\n",html[2],available_qty[12]);
				printf("4. %s                        %d\n",html[3],available_qty[13]);
				printf("5. %s               %d\n",html[4],available_qty[14]);
				printf("6. %s                                 %d\n",html[5],available_qty[15]);
				printf("7. %s                                 %d\n",html[6],available_qty[16]);
				printf("8. %s                                 %d\n",html[7],available_qty[17]);
				printf("9. %s                                 %d\n",html[8],available_qty[18]);
				printf("10.%s                                 %d\n",html[9],available_qty[19]);
				printf("\nENTER BOOK CODE  :  ");
				scanf("%d", &c);
                system("cls");
				switch(c)
				{
					case 1:
						{
							

							printf("\nYOU HAVE RETURNED BLACK BOOK HTML");
							printf("\n\nAUTHOR NAME  :  DR. PANDYA");
							available_qty[10]++;
							
							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							getch();
							return;
							break;
						}

					case 2:
						{
							

							printf("\nYOU HAVE RETURNED CSS + JAVASCRIPT");
							printf("\n\nAUTHOR NAME  :  PROF. JAMBUDI");
							available_qty[11]++;
							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							
							getch();
							return;
							break;
						}

					case 3:
						{
							

							printf("\nYOU HAVE RETURNED INTRO TO HTML5");
							printf("\n\nAUTHOR NAME  :  IVAN BAYROSS");
							available_qty[12]++;
							
							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							getch();
							return;
							break;
						}

					case 4:
						{
							

							printf("\nYOU HAVE RETURNED XML & DHTML");
							printf("\n\nAUTHOR NAME  :  DR. FREEMAN");
							available_qty[13]++;
							
							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							getch();
							return;
							break;
						}

					case 5:
						{
							

							printf("\nYOU HAVE RETURNED ADVANCED HTML");
							printf("\n\nAUTHOR NAME  :  DR. RITCHIE");
							available_qty[14]++;
							
							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							getch();
							return;
							break;
						}
				}
					break;
			}

		case 4:
			{
				system("cls");
				printf("JAVA\n");
				printf("----\n\n");
				printf("    BOOK                          AVAILABLE\n");
				printf("--------------------------------------------\n\n");
				printf("1. %s                        %d\n",java[0],available_qty[30]);
				printf("2. %s              %d\n",java[1],available_qty[31]);
				printf("3. %s                    %d\n",java[2],available_qty[32]);
				printf("4. %s                     %d\n",java[3],available_qty[33]);
				printf("5. %s             %d\n",java[4],available_qty[34]);
				printf("6. %s                               %d\n",java[5],available_qty[35]);
				printf("7. %s                               %d\n",java[6],available_qty[36]);
				printf("8. %s                               %d\n",java[7],available_qty[37]);
				printf("9. %s                               %d\n",java[8],available_qty[38]);
				printf("10.%s                               %d\n",java[9],available_qty[39]);
				printf("\nENTER BOOK CODE  :  ");
				scanf("%d", &c);

				system("cls");

				switch(c)
				{
					case 1:
						{
							

							printf("\nYOU HAVE RETURNED CORE JAVA");
							printf("\n\nAUTHOR NAME  :  DR. PATEL");
							available_qty[30]++;

							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							getch();
							return;
							break;
						}

					case 2:
						{
							

							printf("\nYOU HAVE RETURNED PROGRAMMING IN JAVA");
							printf("\n\nAUTHOR NAME  :  DR. HIMESH");
							available_qty[31]++;
							
							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							getch();
							return;
							break;
						}

					case 3:
						{
							

							printf("\nYOU HAVE RETURNED INTRO TO JAVA");
							printf("\n\nAUTHOR NAME  :  PROF. SHAH");
							available_qty[32]++;
							
							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							getch();
							return;
							break;
						}

					case 4:
						{
							

							printf("\nYOU HAVE RETURNED APPLIED JAVA");
							printf("\n\nAUTHOR NAME  :  DR. AYANI");
							available_qty[33]++;
							
							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							getch();
							return;
							break;
						}

					case 5:
						{
							

							printf("\nYOU HAVE RETURNED ADVANCED JAVA IN WEB");
							printf("\n\nAUTHOR NAME  :  DR. PARMAR");
							available_qty[34]++;
							
							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							getch();
							return;
							break;
						}

				}
				break;
			}

		case 3:
			{
				system("cls");
				printf("ANDROID\n");
				printf("-------\n\n");
				printf("    BOOK                          AVAILABLE\n");
				printf("--------------------------------------------\n\n");
				printf("1. %s              %d\n",android[0],available_qty[20]);
				printf("2. %s           %d\n",android[1],available_qty[21]);
				printf("3. %s                     %d\n",android[2],available_qty[22]);
				printf("4. %s           %d\n",android[3],available_qty[23]);
				printf("5. %s         %d\n",android[4],available_qty[24]);
				printf("6. %s                               %d\n",android[5],available_qty[25]);
				printf("7. %s                               %d\n",android[6],available_qty[26]);
				printf("8. %s                               %d\n",android[7],available_qty[27]);
				printf("9. %s                               %d\n",android[8],available_qty[28]);
				printf("10.%s                               %d\n",android[9],available_qty[29]);
				printf("\nENTER BOOK CODE  :  ");
				scanf("%d", &c);

				system("cls");

				switch(c)
				{
					case 1:
						{
							

							printf("\nYOU HAVE RETURNED INTRO TO ANDROID OS");
							printf("\n\nAUTHOR NAME  :  PROF. JOBS");
							available_qty[20]++;
							
							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							getch();
							return;
							break;
						}

					case 2:
						{
							

							printf("\nYOU HAVE RETURNED ANDROID OS DEVELOPMENT");
							printf("\n\nAUTHOR NAME  :  DR. RANADE");
							available_qty[21]++;
							
							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							getch();
							return;
							break;
						}

					case 3:
						{
							

							printf("\nYOU HAVE RETURNED ANDROID APPS");
							printf("\n\nAUTHOR NAME  :  DR. RANADE");
							available_qty[22]++;
							
							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							getch();
							return;
							break;
						}

					case 4:
						{
							

							printf("\nYOU HAVE RETURNED SECURITY IN ANDROID OS");
							printf("\n\nAUTHOR NAME  :  PROF. DASH");
							available_qty[23]++;
							
							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							getch();
							return;
							break;
						}

					case 5:
						{
							

							printf("\nYOU HAVE RETURNED ADVANCED APP DEVELOPMENT");
							printf("\n\nAUTHOR NAME  :  PROF. MCGUIRE");
							available_qty[24]++;
							
							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							getch();
							return;
							break;
						}
				}
						break;

			}

		case 5:
			{
				system("cls");
				printf("DBMS\n");
				printf("----\n\n");
				printf("    BOOK                          AVAILABLE\n");
				printf("--------------------------------------------\n\n");
				printf("1. %s               %d\n",dbms[0],available_qty[40]);
				printf("2. %s           %d\n",dbms[1],available_qty[41]);
				printf("3. %s            %d\n",dbms[2],available_qty[42]);
				printf("4. %s                   %d\n",dbms[3],available_qty[43]);
				printf("5. %s                    %d\n",dbms[4],available_qty[44]);
				printf("6. %s                               %d\n",dbms[5],available_qty[45]);
				printf("7. %s                               %d\n",dbms[6],available_qty[46]);
				printf("8. %s                               %d\n",dbms[7],available_qty[47]);
				printf("9. %s                               %d\n",dbms[8],available_qty[48]);
				printf("10.%s                               %d\n",dbms[9],available_qty[49]);
				printf("\nENTER BOOK CODE  :  ");
				scanf("%d", &c);

				system("cls");

				switch(c)
				{
					case 1:
						{
							

							printf("\nYOU HAVE RETURNED INTRO TO MS ACCESS");
							printf("\n\nAUTHOR NAME  :  PROF. GATES");
							available_qty[40]++;
							
							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							getch();
							return;
							break;
						}

					case 2:
						{
							

							printf("\nYOU HAVE RETURNED INTRODUCTION TO  RDBMS");
							printf("\n\nAUTHOR NAME  :  DR. NAIK");
							available_qty[41]++;
							
							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							getch();
							return;
							break;
						}

					case 3:
						{
							

							printf("\nYOU HAVE RETURNED DATA ANALYSIS IN DBMS");
							printf("\n\nAUTHOR NAME  :  DR. OZA");
							available_qty[42]++;
							
							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							getch();
							return;
							break;
						}

					case 4:
						{
							

							printf("\nYOU HAVE RETURNED ADVANCED RDBMS");
							printf("\n\nAUTHOR NAME  :  DR. COLE");
							available_qty[43]++;
							
							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							getch();
							return;
							break;
						}

					case 5:
						{
							

							printf("\nYOU HAVE RETURNED APPLIED RDBMS");
							printf("\n\nAUTHOR NAME  :  PROF. WAYNE");
							available_qty[44]++;
							
							printf("\n\nTHANK YOU FOR USING OUR SERVICE !");
							getch();
							return;
							break;
						}

				}
							break;
			}
		
	}
}

void add_book()
{
	int choice,i;
	
	system("cls");
	
	printf("GENRE : \n");
	printf("-------\n\n\n");
	printf("1. C PROGRAM\n");
	printf("2. HTML \n");
	printf("3. ANDROID\n");
	printf("4. JAVA\n");
	printf("5. DBMS\n\n");
	printf("SELECT THE GENRE OF THE BOOK : ");
	scanf("%d",&choice);
	
	int P=5,Q=15,R=25,S=35,T=45;
	
	switch(choice)
	{
		case 1 : {
			printf("ENTER THE BOOK NAME : ");
			scanf("%s",c_prog[p]);
			printf("ENTER BOOK'S QUANTITY : ");
			scanf("%d",&available_qty[P]);
			p++;P++;
			break;
		}
		
		case 2 : {
			printf("ENTER THE BOOK NAME : ");
			scanf("%s",html[q]);
			printf("ENTER BOOK'S QUANTITY : ");
			scanf("%d",&available_qty[Q]);
			q++;Q++;
			break;
		}
		
		case 3 : {
			printf("ENTER THE BOOK NAME : ");
			scanf("%s",android[r]);
			printf("ENTER BOOK'S QUANTITY : ");
			scanf("%d",&available_qty[R]);
			r++;R++;
			break;
		}
		
		case 4 : {
			printf("ENTER THE BOOK NAME : ");
			scanf("%s",java[s]);
			printf("ENTER BOOK'S QUANTITY : ");
			scanf("%d",&available_qty[S]);
			s++;S++;
			break;
		}
		
		case 5 : {
			printf("ENTER THE BOOK NAME : ");
			scanf("%s",dbms[t]);
			printf("ENTER BOOK'S QUANTITY : ");
			scanf("%d",&available_qty[T]);
			t++;T++;
			break;
		}
	}
	
}

void loading()
{
	int i, j, flag=0;
	system("mode CON: COLS=128");
	system("color 70");
	//gotoxy(50,10);
	for(i=1;i<=52;i++)
	{
		gotoxy(20,10);
		if(i!=52)
		{
			system("cls");
			printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB LIBRARY MANAGEMENT SYSTEM \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
			printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 HLICA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n");
			printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t      LOADING...    \n\n\n");
		}
		if(i==52)
		{
				Sleep(1000);
				system("cls");
				printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB LIBRARY MANAGEMENT SYSTEM \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
				printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 HLICA \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n");
				printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t     DONE !   \n\n\n");
				break;
		}
		printf("\t\t\t\t\t");
		for(j=0;j<i;j++)
			printf("\xDB");
		gotoxy(63,15);
		printf(" %3d %%",flag);
		flag+=2;
		Sleep(10);
	}
	Sleep(1500);
}
