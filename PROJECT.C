#include <stdio.h>
#include <conio.h>
#include <string.h>
struct user{
	int id;
	char pname[30];
	char dname[30];
	char address[60];
	int age;
	int med1;
	int med2;
	int med3;
	int total;
};
struct meds{
	int medid;
	char mednm[20];
	char cmpnm[40];
	char type[30];
	int rate;
	int stock;
};
int searchunm();
int searchudoc();
void medshow(int a,int b);
int ucount();
int selmed(int a,int *p);
int medcount();
void createbox();
void login();
void mainmenu();
void medmenu();
void umenu();
void uadd();
void usearc();
void umod();
void udel();
void addmed();
void searchmed();
void modmed();
void delmed();
int searchtab();
int searchmednm();
int searchmedcmp();
void main(){
	clrscr();
	login();
}
void login(){
	char pass[20];
	int chk;
	createbox();
	gotoxy(34,1);
	printf(" Login Page ");
	gotoxy(10,5);
	printf("Please Enter Password to Continue: -");
	gotoxy(46,5);
	scanf("%s",&pass);
	if(strcmp(pass,"12345")==0){
		mainmenu();
	}else{
		gotoxy(40,7);
		printf("Password is Incorrect");
		getch();
	}
}
void mainmenu(){
	char ch;
	clrscr();
	createbox();
	gotoxy(22,1);
	printf(" Welcome to Durgesh Tiwari's Project ");
	gotoxy(4,3);
	printf("Welcome to Medical Shop Project made by Durgesh Tiwari");
	gotoxy(10,5);
	printf("A. Customer Data Management");
	gotoxy(50,5);
	printf("B. Medicine Data Management");
	gotoxy(10,7);
	printf("E. Exit The Application");
	gotoxy(5,9);
	printf("Please Enter Appropriate Term to go to your desired menu: -");
	ch=getch();
	switch(ch){
		case 'a':
		case 'A':
			umenu();
			break;
		case 'b':
		case 'B':
			medmenu();
			break;
		case 'e':
		case 'E':
			gotoxy(10,20);
			printf("The Program will exit  now--");
			delay(2000);
			break;
		default:
			printf("please Select appropriate terms");
	}
}
void createbox(){
	gotoxy(1,1);
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(1,2);
	printf("\xB2");
	gotoxy(1,3);
	printf("\xB2");
	gotoxy(1,4);
	printf("\xB2");
	gotoxy(1,5);
	printf("\xB2");
	gotoxy(1,6);
	printf("\xB2");
	gotoxy(1,7);
	printf("\xB2");
	gotoxy(1,8);
	printf("\xB2");
	gotoxy(1,9);
	printf("\xB2");
	gotoxy(1,10);
	printf("\xB2");
	gotoxy(1,11);
	printf("\xB2");
	gotoxy(1,12);
	printf("\xB2");
	gotoxy(1,13);
	printf("\xB2");
	gotoxy(1,14);
	printf("\xB2");
	gotoxy(1,15);
	printf("\xB2");
	gotoxy(1,16);
	printf("\xB2");
	gotoxy(1,17);
	printf("\xB2");
	gotoxy(1,18);
	printf("\xB2");
	gotoxy(1,19);
	printf("\xB2");
	gotoxy(1,20);
	printf("\xB2");
	gotoxy(1,21);
	printf("\xB2");
	gotoxy(1,22);
	printf("\xB2");
	gotoxy(1,23);
	printf("\xB2");
	gotoxy(1,24);
	printf("\xB2");
	gotoxy(1,24);
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(80,24);
	printf("\xB2");
	gotoxy(80,23);
	printf("\xB2");
	gotoxy(80,22);
	printf("\xB2");
	gotoxy(80,21);
	printf("\xB2");
	gotoxy(80,20);
	printf("\xB2");
	gotoxy(80,19);
	printf("\xB2");
	gotoxy(80,18);
	printf("\xB2");
	gotoxy(80,17);
	printf("\xB2");
	gotoxy(80,16);
	printf("\xB2");
	gotoxy(80,15);
	printf("\xB2");
	gotoxy(80,14);
	printf("\xB2");
	gotoxy(80,13);
	printf("\xB2");
	gotoxy(80,12);
	printf("\xB2");
	gotoxy(80,11);
	printf("\xB2");
	gotoxy(80,10);
	printf("\xB2");
	gotoxy(80,9);
	printf("\xB2");
	gotoxy(80,8);
	printf("\xB2");
	gotoxy(80,7);
	printf("\xB2");
	gotoxy(80,6);
	printf("\xB2");
	gotoxy(80,5);
	printf("\xB2");
	gotoxy(80,4);
	printf("\xB2");
	gotoxy(80,3);
	printf("\xB2");
	gotoxy(80,2);
	printf("\xB2");
	gotoxy(80,1);
	printf("\xB2");
}
void medmenu(){
	char ch;
	int a=1;
	clrscr();
	createbox();
	gotoxy(29,1);
	printf("-Medical Data Management-");
	gotoxy(3,3);
	printf(" Welcome to DataBase Management of Medicines");
	gotoxy(15,6);
	printf("Please Select appropriate From the Menu Below: -");
	gotoxy(10,8);
	printf("A. Add New Medicine");
	gotoxy(60,8);
	printf("B. Search Stock");
	gotoxy(10,10);
	printf("C. Modify Stock");
	gotoxy(60,10);
	printf("D. Delete Stock");
	gotoxy(30,12);
	printf("E. Exit to Previous Menu");
	do{
	gotoxy(10,20);
	printf("Enter Your Desired Option: -");
	gotoxy(38,20);
	ch=getch();
	{switch(ch){
		case 'a':
		case 'A':
				addmed();
				a=0;
				break;
		case 'b':
		case 'B':
				searchmed();
				a=0;
				break;
		case 'c':
		case 'C':
				modmed();
				a=0;
				break;
		case 'd':
		case 'D':
				delmed();
				a=0;
				break;
		case 'e':
		case 'E':
				mainmenu();
				a=0;
				break;
		default:
				gotoxy(4,22);
				printf("Enter appropriate Term or your soul will be Stuck here for all ETERNITY!!");
				a=1;
				break;
	}}}while(a==1);
}
void umenu(){
	char ch;
	int a=1;
	clrscr();
	createbox();
	gotoxy(30,1);
	printf("-Customer Data Management-");
	gotoxy(3,3);
	printf(" Welcome to DataBase Management of Patient");
	gotoxy(15,5);
	printf("Please Select appropriate From the Menu Below: -");
	gotoxy(10,8);
	printf("A. Add New Patient Bill");
	gotoxy(56,8);
	printf("B. Search Patient Data");
	gotoxy(10,10);
	printf("C. Edit Patient Data");
	gotoxy(56,10);
	printf("D. Delete Data");
	gotoxy(30,12);
	printf("E. Exit to Previous Menu");
	do{
		gotoxy(10,20);
		printf("Enter Your Desired Option: -");
		gotoxy(38,20);
		ch=getch();
		switch(ch){
			case 'a':
			case 'A':
					uadd();
					a=0;
					break;
			case 'b':
			case 'B':
					usearc();
					a=0;
					break;
			case 'c':
			case 'C':
					umod();
					a=0;
					break;
			case 'd':
			case 'D':
					udel();
					a=0;
					break;
			case 'e':
			case 'E':
					mainmenu();
					a=0;
					break;
			default:
					gotoxy(4,22);
					printf("Enter appropriate Term or your soul will be Stuck here for all ETERNITY!!");
					a=1;
					break;
	}
	}while(a==1);
}
void addmed(){
	int a=0,qun;
	struct meds obj;
	char ch,ms,r;
	FILE * fp;
	do{
	fp=fopen("meds.txt","a");
	clrscr();
	qun=medcount();
	obj.medid=qun+1;
	createbox();
	gotoxy(29,1);
	printf("-Medical Data Management-");
	gotoxy(26,3);
	printf("Enter New Medicines on the Stock");
	gotoxy(10,4);
	printf("Serial Number = %d",obj.medid);
	gotoxy(10,6);
	printf("Name: -");
	gotoxy(40,6);
	printf("Company's Name: -");
	gotoxy(10,8);
	printf("Type[Tablet/Capsule/Syrup]: -");
	gotoxy(10,10);
	printf("Price(Rs.): -");
	gotoxy(40,10);
	printf("Quantity: -");
	fflush(stdin);
	gotoxy(18,6);
	gets(obj.mednm);
	fflush(stdin);
	gotoxy(58,6);
	gets(obj.cmpnm);
	fflush(stdin);
	gotoxy(39,8);
	do{ch=getch();
	switch(ch){
			case 'T':
			case 't':
					a=0;
					strcpy(obj.type,"Tablet");
					printf("Tablet");
					break;
			case 'c':
			case 'C':
					a=0;
					strcpy(obj.type,"Capsule");
					printf("Capsule");
					break;
			case 's':
			case 'S':
					a=0;
					strcpy(obj.type,"Syrup");
					printf("Syrup");
					break;
			default:
					a=1;
		}}while(a==1);
	gotoxy(24,10);
	scanf("%d",&obj.rate);
	gotoxy(52,10);
	scanf("%d",&obj.stock);
	gotoxy(10,13);
	printf("You want to Save this information: -[y/n]: -");
	ms=getch();
	if(ms=='y'||ms=='Y'){
	fprintf(fp,"%d %s %s %s %d %d\n",obj.medid,obj.mednm,obj.cmpnm,obj.type,obj.rate,obj.stock);
	fflush(stdin);
	gotoxy(10,15);
	printf("Medicine Information Saved!!");
	gotoxy(10,17);
	printf("Name : %s",obj.mednm);
	gotoxy(40,17);
	printf("Name of Company: - %s",obj.cmpnm);
	gotoxy(10,18);
	printf("Type : %s",obj.type);
	gotoxy(40,18);
	printf("Price : - %d",obj.rate);
	gotoxy(10,19);
	printf("Stock: - %d",obj.stock);}
	fflush(stdin);
	gotoxy(10,20);
	fclose(fp);
	printf("Want to Enter another Record?[y/n]: -");
	r=getch();}while(r=='y'||r=='Y');
	medmenu();
	getch();
}
void searchmed(){
	int i,l=0,k=0,p=0,a=1;
	char s,ch,che,ser[40],chei;
	struct meds obj;
	FILE *fp;
	s='r';
	do{
		if(k==1){
			i=9;
			fp=fopen("meds.txt","r");
			clrscr();
			createbox();
			gotoxy(29,1);
			printf("-Medical Data Management-");
			gotoxy(24,3);
			printf("Currently Displaying Searched Data");
			gotoxy(4,4);
			printf("Search By: -");
			gotoxy(14,5);
			printf("A. Name");
			gotoxy(25,5);
			printf("B. Company Name");
			gotoxy(45,5);
			printf("C. Type");
			gotoxy(60,5);
			printf("E.Exit Search Mode");
			gotoxy(2,7);
			printf("------------------------------------------------------------------------------");
			gotoxy(2,9);
			printf("------------------------------------------------------------------------------");
			gotoxy(4,8);
			printf("Serial No |");
			gotoxy(15,8);
			printf(" Name of Medicine |");
			gotoxy(35,8);
			printf("  Name of Company  |");
			gotoxy(57,8);
			printf("Type |");
			gotoxy(65,8);
			printf("Rate |");
			gotoxy(73,8);
			printf("Stock");
			gotoxy(5,6);
			che=getch();
			switch(che){
				case 'a':
				case 'A':
					 do{
					p=searchmednm();
					}while(p==1);
						break;
				case 'b':
				case 'B':
						do{
							p=searchmedcmp();
							}while(p==1);
				
						break;
				case 'c':
				case 'C':
						do{
							p=searchtab();
						}while(p==1);
						break;
				case 'e':
				case 'E':
						 k=0;
					 	break;
			}

			fclose(fp);
		}else{
			fp=fopen("meds.txt","r");
			i=9;
			clrscr();
			createbox();
			gotoxy(29,1);
			printf("-Medical Data Management-");
			gotoxy(28,3);
			printf("Currently Displaying All Data");
			gotoxy(48,5);
			printf("To Search Data press \"s\" key");
			gotoxy(2,7);
			printf("------------------------------------------------------------------------------");
			gotoxy(2,9);
			printf("------------------------------------------------------------------------------");
			gotoxy(4,8);
			printf("Serial No |");
			gotoxy(15,8);
			printf(" Name of Medicine |");
			gotoxy(35,8);
			printf("  Name of Company  |");
			gotoxy(57,8);
			printf("Type |");
			gotoxy(65,8);
			printf("Rate |");
			gotoxy(73,8);
			printf("Stock");
			while( fscanf(fp,"%d %s %s %s %d %d\n",&obj.medid,obj.mednm,obj.cmpnm,obj.type,&obj.rate,&obj.stock) != EOF){
				i++;
				gotoxy(8,i);
				printf("%d",obj.medid);
				gotoxy(16,i);
				printf("%s",obj.mednm);
				gotoxy(36,i);
				printf("%s",obj.cmpnm);
				gotoxy(55,i);
				printf("%s",obj.type);
				gotoxy(66,i);
				printf("%d",obj.rate);
				gotoxy(75,i);
				printf("%d",obj.stock);
			}
		gotoxy(3,5);
		printf("Press \"m\" to go to previous Menu");
		ch=getch();
		switch(ch){
			case 's':
				k=1;
				break;
			case 'm':
				l=1;
				break;
			default:
				break;
			}
		}
		fclose(fp);
	}while(l==0);
	medmenu();
}
void modmed(){
	int a=1,id,b,s,t;
	char c,ch,che;
	struct meds obj;
	struct meds obj1;
	FILE *fp,*fp1;
	do{
		clrscr();
		createbox();
		gotoxy(29,1);
		printf("-Medical Data Management-");
		gotoxy(28,3);
		printf("Modify Data of Medicines");
		gotoxy(5,5);
		printf("Enter Serial No of Medicine to Modify: -");
		gotoxy(45,5);
		scanf("%d",&id);
		fp=fopen("meds.txt","a+");
		fp1=fopen("temp.txt","a+");
		while( fscanf(fp,"%d %s %s %s %d %d\n",&obj.medid,obj.mednm,obj.cmpnm,obj.type,&obj.rate,&obj.stock) != EOF){
			if(obj.medid==id){
				a=0;
				gotoxy(60,6);
				printf("Record Found!!");
				gotoxy(10,7);
				printf("Name: - %s",obj.mednm);
				gotoxy(40,7);
				printf("Company Name: - %s",obj.cmpnm);
				gotoxy(10,9);
				printf("Type: - %s",obj.type);
				gotoxy(40,9);
				printf("Price: - %d",obj.rate);
				gotoxy(10,11);
				printf("Stock: - %d",obj.stock);
				gotoxy(5,13);
				printf("Do you want to Modify This Data?[y/n]");
				gotoxy(42,13);
				c=getch();
				if(c=='y'||c=='Y'){
					obj1.medid=obj.medid;
					gotoxy(5,15);
					printf("New name: -");
					fflush(stdin);
					gets(obj1.mednm);
					gotoxy(40,15);
					printf("New Company Name: -");
					fflush(stdin);
					gets(obj1.cmpnm);
					gotoxy(5,17);
					printf("Type[Tablet/Capsule/Syrup]: -");
					do{
						che=getch();
						switch(che){
								case 'T':
								case 't':
										b=0;
										strcpy(obj1.type,"Tablet");
										printf("Tablet");
										break;
								case 'c':
								case 'C':
										b=0;
										strcpy(obj1.type,"Capsule");
										printf("Capsule");
										break;
								case 's':
								case 'S':
										b=0;
										strcpy(obj1.type,"Syrup");
										printf("Syrup");
										break;
								default:
										b=1;
								}
					}while(b==1);
					gotoxy(50,17);
					printf("Enter Price: -");
					scanf("%d",&obj1.rate);
					gotoxy(5,19);
					printf("Enter Stock");
					scanf("%d",&obj1.stock);
					fprintf(fp1,"%d %s %s %s %d %d\n",obj1.medid,obj1.mednm,obj1.cmpnm,obj1.type,obj1.rate,obj1.stock);
					fwrite(&obj1,sizeof(obj1),1,fp);
					gotoxy(5,23);
					printf("record Updated successfully");
				}else{
					fprintf(fp1,"%d %s %s %s %d %d\n",obj.medid,obj.mednm,obj.cmpnm,obj.type,obj.rate,obj.stock);
				}
			}else{
				fprintf(fp1,"%d %s %s %s %d %d\n",obj.medid,obj.mednm,obj.cmpnm,obj.type,obj.rate,obj.stock);
			}
		}
		fclose(fp);
		fclose(fp1);
		remove("meds.txt");
		s=rename("temp.txt","meds.txt");
		if (a!=0)
		{
			gotoxy(50,6);
			printf("No Records Found");
		}
		gotoxy(40,22);
		printf("You want to search again?[y/n]?");
		ch=getch();
	}while(ch=='y'||ch=='Y');
	medmenu();

}
void delmed(){
	int a=1,id,b,s,t;
	char c,ch,che;
	struct meds obj;
	FILE *fp,*fp1;
	do{
		clrscr();
		createbox();
		gotoxy(29,1);
		printf("-Medical Data Management-");
		gotoxy(29,3);
		printf("Delete Data of Medicines");
		gotoxy(5,5);
		printf("Enter Serial No of Medicine to Delete: -");
		gotoxy(45,5);
		scanf("%d",&id);
		fp=fopen("meds.txt","a+");
		fp1=fopen("temp.txt","a+");
		while( fscanf(fp,"%d %s %s %s %d %d\n",&obj.medid,obj.mednm,obj.cmpnm,obj.type,&obj.rate,&obj.stock) != EOF){
			if(obj.medid==id){
				a=0;
				gotoxy(60,6);
				printf("Record Found!!");
				gotoxy(10,7);
				printf("Name: - %s",obj.mednm);
				gotoxy(40,7);
				printf("Company Name: - %s",obj.cmpnm);
				gotoxy(10,9);
				printf("Type: - %s",obj.type);
				gotoxy(40,9);
				printf("Price: - %d",obj.rate);
				gotoxy(10,11);
				printf("Stock: - %d",obj.stock);
				gotoxy(5,13);
				printf("Do you want to Delete This Data?[y/n]");
				gotoxy(42,13);
				c=getch();
				if(c=='y'||c=='Y'){
					gotoxy(5,23);
					printf("Record Deleted successfully!!!");
				}else{
					fprintf(fp1,"%d %s %s %s %d %d\n",obj.medid,obj.mednm,obj.cmpnm,obj.type,obj.rate,obj.stock);
				}
			}else{
				fprintf(fp1,"%d %s %s %s %d %d\n",obj.medid,obj.mednm,obj.cmpnm,obj.type,obj.rate,obj.stock);
			}
		}
		fclose(fp);
		fclose(fp1);
		remove("meds.txt");
		s=rename("temp.txt","meds.txt");
		if (a!=0)
		{
			gotoxy(50,6);
			printf("No Records Found");
		}
		gotoxy(40,22);
		printf("You want to search again?[y/n]?");
		ch=getch();
	}while(ch=='y'||ch=='Y');
	medmenu();
}
int medcount(){
	struct meds obj;
	FILE *fp;
	fp=fopen("meds.txt","r");
	obj.medid=0;
	while( fscanf(fp,"%d %s %s %s %d %d\n",&obj.medid,obj.mednm,obj.cmpnm,obj.type,&obj.rate,&obj.stock) != EOF){

	}
	return obj.medid;
}
int searchtab(){
	char ch,copi[40],che;
	int a=1,i=9;
	struct meds obj;
	FILE *fp;
	fp=fopen("meds.txt","r");
			clrscr();
			createbox();
			gotoxy(29,1);
			printf("-Medical Data Management-");
			gotoxy(24,3);
			printf("Currently Displaying Searched Data");
			gotoxy(4,4);
			printf("Search By: -");
			gotoxy(14,5);
			printf("A. Name");
			gotoxy(25,5);
			printf("B. Company Name");
			gotoxy(45,5);
			printf("C. Type");
			gotoxy(60,5);
			printf("E.Exit Search Mode");
			gotoxy(2,7);
			printf("------------------------------------------------------------------------------");
			gotoxy(2,9);
			printf("------------------------------------------------------------------------------");
			gotoxy(4,8);
			printf("Serial No |");
			gotoxy(15,8);
			printf(" Name of Medicine |");
			gotoxy(35,8);
			printf("  Name of Company  |");
			gotoxy(57,8);
			printf("Type |");
			gotoxy(65,8);
			printf("Rate |");
			gotoxy(73,8);
			printf("Stock");
			gotoxy(5,6);
	gotoxy(5,6);
	printf("Search by Medicine type[T/S/C]: -");
	do{
		gotoxy(40,6);
		ch=getch();
		switch(ch){
				case 'T':
				case 't':
						strcpy(copi,"Tablet");
						a=0;
						gotoxy(40,6);
						printf("Tablet");
						break;
				case 'S':
				case 's':
						strcpy(copi,"Syrup");
						a=0;
						gotoxy(40,6);
						printf("Syrup");
						break;
				case 'c':
				case 'C':
						strcpy(copi,"Capsule");
						a=0;
						gotoxy(40,6);
						printf("Capsule");
						break;
				default:
						a=1;
			}
		while( fscanf(fp,"%d %s %s %s %d %d\n",&obj.medid,obj.mednm,obj.cmpnm,obj.type,&obj.rate,&obj.stock) != EOF){
				if(strcmp(obj.type,copi)==0){
					i++;
					gotoxy(8,i);
					printf("%d",obj.medid);
					gotoxy(16,i);
					printf("%s",obj.mednm);
					gotoxy(36,i);
					printf("%s",obj.cmpnm);
					gotoxy(55,i);
					printf("%s",obj.type);
					gotoxy(66,i);
					printf("%d",obj.rate);
					gotoxy(75,i);
					printf("%d",obj.stock);
				}
			}
	}while(a==1);
	gotoxy(55,6);
	printf("Another Search?[y/n]");
	che=getch();
	switch(che){
		case 'y':
		case 'Y':
			a=1;
			break;
		case 'n':
		case 'N':
			a=0;
			break;
		default:
			a=0;
			break;
	}
	return a;
}
int searchmednm(){
	char chan,che,n[200];
	int a=1,i=9,c=0,y,o=0;
	char s[200],ch;
	struct meds obj;
	FILE *fp;
	strcpy(s,"");
			clrscr();
			createbox();
			gotoxy(29,1);
			printf("-Medical Data Management-");
			gotoxy(24,3);
			printf("Currently Displaying Searched Data");
			gotoxy(4,4);
			printf("Search By: -");
			gotoxy(14,5);
			printf("A. Name");
			gotoxy(25,5);
			printf("B. Company Name");
			gotoxy(45,5);
			printf("C. Type");
			gotoxy(60,5);
			printf("E.Exit Search Mode");
			gotoxy(2,7);
			printf("------------------------------------------------------------------------------");
			gotoxy(2,9);
			printf("------------------------------------------------------------------------------");
			gotoxy(4,8);
			printf("Serial No |");
			gotoxy(15,8);
			printf(" Name of Medicine |");
			gotoxy(35,8);
			printf("  Name of Company  |");
			gotoxy(57,8);
			printf("Type |");
			gotoxy(65,8);
			printf("Rate |");
			gotoxy(73,8);
			printf("Stock");
			gotoxy(5,6);
			printf("Search By Name: -");
			gotoxy(55,6);
			printf("Press \"`\" to cancel");
			while(a==1){
				y=23+c;
				gotoxy(y,6);
				ch=getch();
				chan=ch;
				strncat(s,&ch,1);
				fflush(stdin);
				if(ch!='`'){
					clrscr();
					i=9;
					createbox();
					gotoxy(29,1);
					printf("-Medical Data Management-");
					gotoxy(24,3);
					printf("Currently Displaying Searched Data");
					gotoxy(4,4);
					printf("Search By: -");
					gotoxy(14,5);
					printf("A. Name");
					gotoxy(25,5);
					printf("B. Company Name");
					gotoxy(45,5);
					printf("C. Type");
					gotoxy(60,5);
					printf("E.Exit Search Mode");
					gotoxy(2,7);
					printf("------------------------------------------------------------------------------");
					gotoxy(2,9);
					printf("------------------------------------------------------------------------------");
					gotoxy(4,8);
					printf("Serial No |");
					gotoxy(15,8);
					printf(" Name of Medicine |");
					gotoxy(35,8);
					printf("  Name of Company  |");
					gotoxy(57,8);
					printf("Type |");
					gotoxy(65,8);
					printf("Rate |");
					gotoxy(73,8);
					printf("Stock");
					gotoxy(5,6);
					printf("Search By Name: -");
					gotoxy(55,6);
					printf("Press \"`\" to cancel");
					fp=fopen("meds.txt","r");
					gotoxy(23,6);
					printf("%s",s);
					o=c+1;
					while( fscanf(fp,"%d %s %s %s %d %d\n",&obj.medid,obj.mednm,obj.cmpnm,obj.type,&obj.rate,&obj.stock) != EOF){
						if(strncmp(s,obj.mednm,o)==0){
							i++;
							gotoxy(8,i);
							printf("%d",obj.medid);
							gotoxy(16,i);
							printf("%s",obj.mednm);
							gotoxy(36,i);
							printf("%s",obj.cmpnm);
							gotoxy(55,i);
							printf("%s",obj.type);
							gotoxy(66,i);
							printf("%d",obj.rate);
							gotoxy(75,i);
							printf("%d",obj.stock);
							}
						}
					c++;
				}else{
					a=0;
				}
		}
		strcpy(s,"");
	gotoxy(55,6);
	printf("Another Search?[y/n]");
	che=getch();
	switch(che){
		case 'y':
		case 'Y':
			a=1;
			break;
		case 'n':
		case 'N':
			a=0;
			break;
		default:
			a=0;
			break;
	}
	return a;
}
int searchmedcmp(){
	char chan,che,n[200];
	int a=1,i=9,c=0,y,o=0;
	char s[200],ch;
	struct meds obj;
	FILE *fp;
	strcpy(s,"");
			clrscr();
			createbox();
			gotoxy(29,1);
			printf("-Medical Data Management-");
			gotoxy(24,3);
			printf("Currently Displaying Searched Data");
			gotoxy(4,4);
			printf("Search By: -");
			gotoxy(14,5);
			printf("A. Name");
			gotoxy(25,5);
			printf("B. Company Name");
			gotoxy(45,5);
			printf("C. Type");
			gotoxy(60,5);
			printf("E.Exit Search Mode");
			gotoxy(2,7);
			printf("------------------------------------------------------------------------------");
			gotoxy(2,9);
			printf("------------------------------------------------------------------------------");
			gotoxy(4,8);
			printf("Serial No |");
			gotoxy(15,8);
			printf(" Name of Medicine |");
			gotoxy(35,8);
			printf("  Name of Company  |");
			gotoxy(57,8);
			printf("Type |");
			gotoxy(65,8);
			printf("Rate |");
			gotoxy(73,8);
			printf("Stock");
			gotoxy(5,6);
			printf("Search By Company Name: -");
			gotoxy(55,6);
			printf("Press \"`\" to cancel");
			while(a==1){
				y=30+c;
				gotoxy(y,6);
				ch=getch();
				chan=ch;
				strncat(s,&ch,1);
				fflush(stdin);
				if(ch!='`'){
					clrscr();
					i=9;
					createbox();
					gotoxy(29,1);
					printf("-Medical Data Management-");
					gotoxy(24,3);
					printf("Currently Displaying Searched Data");
					gotoxy(4,4);
					printf("Search By: -");
					gotoxy(14,5);
					printf("A. Name");
					gotoxy(25,5);
					printf("B. Company Name");
					gotoxy(45,5);
					printf("C. Type");
					gotoxy(60,5);
					printf("E.Exit Search Mode");
					gotoxy(2,7);
					printf("------------------------------------------------------------------------------");
					gotoxy(2,9);
					printf("------------------------------------------------------------------------------");
					gotoxy(4,8);
					printf("Serial No |");
					gotoxy(15,8);
					printf(" Name of Medicine |");
					gotoxy(35,8);
					printf("  Name of Company  |");
					gotoxy(57,8);
					printf("Type |");
					gotoxy(65,8);
					printf("Rate |");
					gotoxy(73,8);
					printf("Stock");
					gotoxy(5,6);
					printf("Search By Company Name: -");
					gotoxy(55,6);
					printf("Press \"`\" to cancel");
					fp=fopen("meds.txt","r");
					gotoxy(30,6);
					printf("%s",s);
					o=c+1;
					while( fscanf(fp,"%d %s %s %s %d %d\n",&obj.medid,obj.mednm,obj.cmpnm,obj.type,&obj.rate,&obj.stock) != EOF){
						if(strncmp(s,obj.cmpnm,o)==0){
							i++;
							gotoxy(8,i);
							printf("%d",obj.medid);
							gotoxy(16,i);
							printf("%s",obj.mednm);
							gotoxy(36,i);
							printf("%s",obj.cmpnm);
							gotoxy(55,i);
							printf("%s",obj.type);
							gotoxy(66,i);
							printf("%d",obj.rate);
							gotoxy(75,i);
							printf("%d",obj.stock);
							}
						}
					c++;
				}else{
					a=0;
				}
		}
		strcpy(s,"");
	gotoxy(55,6);
	printf("Another Search?[y/n]");
	che=getch();
	switch(che){
		case 'y':
		case 'Y':
			a=1;
			break;
		case 'n':
		case 'N':
			a=0;
			break;
		default:
			a=0;
			break;
	}
	return a;
}
void uadd(){
	int a,i,total,qun,p=1;
	FILE *fp;
	char ch,che,chec;
	struct user obj;
	do{
		fp=fopen("user.txt","a+");
		clrscr();
		qun=ucount();
		obj.id=qun+1;
		createbox();
		gotoxy(30,1);
		printf("-Customer Data Management-");
		gotoxy(31,3);
		printf("Add New Patients");
		gotoxy(5,5);
		printf("Serial Number: - %d",obj.id);
		gotoxy(5,6);
		printf("Patient's Name:-");
		gotoxy(50,6);
		printf("Under Doctor: -");
		gotoxy(5,7);
		printf("Area:-");
		gotoxy(50,7);
		printf("Age: -");
		gotoxy(2,9);
		printf("------------------------------------------------------------------------------");
		gotoxy(2,11);
		printf("------------------------------------------------------------------------------");
		gotoxy(10,10);
		printf("Medicines");
		gotoxy(65,10);
		printf("|  Price  |");
		gotoxy(65,12);
		printf("|");
		gotoxy(75,12);
		printf("|");
		gotoxy(65,13);
		printf("|");
		gotoxy(75,13);
		printf("|");
		gotoxy(65,14);
		printf("|");
		gotoxy(75,14);
		printf("|");
		gotoxy(65,15);
		printf("|");
		gotoxy(75,15);
		printf("|");
		gotoxy(65,16);
		printf("|");
		gotoxy(75,16);
		printf("|");
		gotoxy(65,17);
		printf("|");
		gotoxy(75,17);
		printf("|");
		gotoxy(65,18);
		printf("|");
		gotoxy(75,18);
		printf("|");
		gotoxy(65,19);
		printf("|");
		gotoxy(75,19);
		printf("|");
		/*gotoxy(65,20);
		printf("|");
		gotoxy(75,20);
		printf("|");
		gotoxy(65,21);
		printf("|");
		gotoxy(75,21);
		printf("|");*/
		gotoxy(22,6);
		fflush(stdin);
		gets(obj.pname);
		gotoxy(66,6);
		fflush(stdin);
		gets(obj.dname);
		gotoxy(12,7);
		fflush(stdin);
		gets(obj.address);
		gotoxy(58,7);
		fflush(stdin);
		scanf("%d",&obj.age);
		for(i=1;i<4;i++){
			gotoxy(3,11+i);
			printf("%d.-",i);
			switch(i){
				case 1:
						obj.med1=selmed(i,&total);
						obj.total=total;
						gotoxy(5,11+i);
						break;
				case 2:
						obj.med2=selmed(i,&total);
						obj.total=obj.total+total;
						break;
				case 3:
						obj.med3=selmed(i,&total);
						obj.total=obj.total+total;
			}
		}
		gotoxy(57,19);
		printf("Total: -");
		gotoxy(68,19);
		printf("%d",obj.total);
		gotoxy(10,21);
		printf("Do you want to save this record?[y/n]: -");
		che=getch();
		if(che=='y'||che=='Y'){
			fprintf(fp,"%d %s %s %s %d %d %d %d %d\n",obj.id,obj.pname,obj.dname,obj.address,obj.age,obj.med1,obj.med2,obj.med3,obj.total);
			gotoxy(10,22);
			printf("Record inserted successfully!!!");
		}
		fclose(fp);
		gotoxy(10,23);
		printf("Want to Enter another record?[y/n]: -");
		ch=getch();
	}while(ch=='y'||ch=='Y');
	
	getch();
}
void usearc(){
	
	int i,l=0,k=0,p=0,a=1;
	char s,ch,che,ser[40],chei;
	struct user obj;
	FILE *fp;
	s='r';
	do{
		if(k==1){
			i=9;
			fp=fopen("user.txt","r");
			clrscr();
			createbox();
			gotoxy(30,1);
			printf("-Customer Data Management-");
			gotoxy(24,3);
			printf("Currently Displaying Searched Data");
			gotoxy(4,4);
			printf("Search By: -");
			gotoxy(14,5);
			printf("A. Name");
			gotoxy(40,5);
			printf("B. Doctor");
			gotoxy(60,5);
			printf("E.Exit Search Mode");
			gotoxy(2,7);
			printf("------------------------------------------------------------------------------");
			gotoxy(2,9);
			printf("------------------------------------------------------------------------------");
			gotoxy(4,8);
			printf("Serial No |");
			gotoxy(15,8);
			printf(" Name of Patient |");
			gotoxy(35,8);
			printf("  Name of Doctor  |");
			gotoxy(57,8);
			printf("Area |");
			gotoxy(63,8);
			printf("Age |");
			gotoxy(69,8);
			printf("Total(Rs.)");
			gotoxy(5,6);
			che=getch();
			switch(che){
				case 'a':
				case 'A':
					 do{
					p=searchunm();
					}while(p==1);
						break;
				case 'b':
				case 'B':
						do{
							p=searchudoc();
							}while(p==1);

						break;
				case 'e':
				case 'E':
						 k=0;
						break;
			}

			fclose(fp);
		}else{
			fp=fopen("user.txt","r");
			i=9;
			clrscr();
			createbox();
			gotoxy(30,1);
			printf("-Customer Data Management-");
			gotoxy(28,3);
			printf("Currently Displaying All Data");
			gotoxy(48,5);
			printf("To Search Data press \"s\" key");
			gotoxy(2,7);
			printf("------------------------------------------------------------------------------");
			gotoxy(2,9);
			printf("------------------------------------------------------------------------------");
			gotoxy(4,8);
			printf("Serial No |");
			gotoxy(15,8);
			printf(" Name of Patient |");
			gotoxy(35,8);
			printf("  Name of Doctor  |");
			gotoxy(57,8);
			printf("Area |");
			gotoxy(63,8);
			printf("Age |");
			gotoxy(69,8);
			printf("Total(Rs.)");
			while( fscanf(fp,"%d %s %s %s %d %d %d %d %d\n",&obj.id,obj.pname,obj.dname,obj.address,&obj.age,&obj.med1,&obj.med2,&obj.med3,&obj.total) != EOF){
				i++;
				gotoxy(8,i);
				printf("%d",obj.id);
				gotoxy(16,i);
				printf("%s",obj.pname);
				gotoxy(36,i);
				printf("%s",obj.dname);
				gotoxy(55,i);
				printf("%s",obj.address);
				gotoxy(66,i);
				printf("%d",obj.age);
				gotoxy(75,i);
				printf("%d",obj.total);
			}
		gotoxy(3,5);
		printf("Press \"m\" to go to previous Menu");
		ch=getch();
		switch(ch){
			case 's':
				k=1;
				break;
			case 'm':
				l=1;
				break;
			default:
				break;
			}
		}
		fclose(fp);
	}while(l==0);
	medmenu();
}
void umod(){
	int id,f=1;
	struct user obj;
	FILE *fp;
	clrscr();
	createbox();
	gotoxy(30,1);
	printf("-Customer Data Management-");
	gotoxy(28,3);
	printf("Modify Data of Customers");
	gotoxy(5,5);
	printf("Enter Customer ID to Modify: -");
	scanf("%d",&id);
	while( fscanf(fp,"%d %s %s %s %d %d %d %d %d\n",&obj.id,obj.pname,obj.dname,obj.address,&obj.age,&obj.med1,&obj.med2,&obj.med3,&obj.total) != EOF){
		if(obj.id==id){
			a=0;
			gotoxy(5,7);
			printf("Name : - %s",obj.pname);
			gotoxy(45,7)
			printf("Doctor's Name: - %s",obj.dname);
			gotoxy(5,9);
			printf("Area : - %s",obj.address);
			gotoxy(45,9);
			printf("Age : - %d",obj.age);
			gotoxy(5,11);
			medshow(obj.med1);
			gotoxy(45,11);
			medshow(obj.med2);
			gotoxy(5,13);
			medshow(obj.med3);
			gotoxy(45,13);
			printf("Total: -",)
		}
	}
	if(a==1){
		gotoxy(10,15);
		printf("No Records Found!!");
	}else{
		gotoxy(10,15);
		printf("Do you Want to Modify this Data[y/n]?: -")
		ch=getch();
	}
	if(ch=='y'||ch=='Y'){

	}
}
void udel(){
	clrscr();
	createbox();
	gotoxy(30,1);
	printf("-Customer Data Management-");
	getch();
}
int ucount(){
	int i,a,s;
	char ch,chel;
	struct user obj;
	FILE *fp;
	fp=fopen("user.txt","r");
	obj.id=0;
	while( fscanf(fp,"%d %s %s %s %d %d %d %d %d\n",&obj.id,obj.pname,obj.dname,obj.address,&obj.age,&obj.med1,&obj.med2,&obj.med3,&obj.total) != EOF){

	}
	fclose(fp);
	return obj.id;

}
int selmed(int a,int *p){
	int q=0,t=0,l=0,k=0,v,g=7,x,e,z,kp=0,num,wh;
	int ar[5],arr[5];
	char ch,name[20],che,copi[20][20];
	struct meds obj;
	FILE *fp,*fp1;
	fp=fopen("meds.txt","a+");
	strcpy(name,"");
	for(v=a;v<6;v++){
				gotoxy(4,v+12);
				printf("                       ");
				gotoxy(69,v+12);
				printf("    ");
			}
	while(l==0){
		gotoxy(55,2);
		printf("Press \"`\" to Select");
		gotoxy(g,a+11);
		ch=getch();
		if(ch!='`'){
			t++;
			for(num=0;num<5;num++){
				ar[num]=0;
				arr[num]=0;
			}
			for(v=a;v<6;v++){
				gotoxy(4,v+12);
				printf("                       ");
				gotoxy(69,v+12);
				printf("    ");
			}
			x=1;
			strncat(name,&ch,1);
			gotoxy(7,a+11);
			printf("%s",name);
			k=a+12;
			fp1=fopen("meds.txt","a+");
			while(fscanf(fp1,"%d %s %s %s %d %d\n",&obj.medid,obj.mednm,obj.cmpnm,obj.type,&obj.rate,&obj.stock) != EOF){
				if(strncmp(name,obj.mednm,t)==0){
					gotoxy(7,k);
					printf("%d",x);
					gotoxy(9,k);
					printf("%s",obj.mednm);
					gotoxy(69,k);
					printf("%d",obj.rate);
					ar[x]=obj.medid;
					arr[x]=obj.rate;
					x++;
					k++;
					kp=1;
				}
			}
			fclose(fp1);
		}else{
			l=1;
		}
		g++;
	}
	wh=x+1;
	do{
		gotoxy(52,2);
		printf("Press Numbers to Navigate:-");
		gotoxy(30,a+11);
		scanf("%d",&e);
		gotoxy(28,a+11);
		printf("     ");
		gotoxy(4,a+11);
		printf("                  ");
		gotoxy(69,a+12);
		printf("     ");
		gotoxy(69,a+13);
		printf("     ");
		gotoxy(69,a+14);
		printf("     ");
		gotoxy(69,a+15);
		printf("     ");
		gotoxy(69,a+16);
		printf("     ");
		gotoxy(7,a+11);
		printf("          ");
		gotoxy(7,a+12);
		printf("          ");
		gotoxy(7,a+13);
		printf("          ");
		gotoxy(7,a+14);
		printf("          ");
		gotoxy(7,a+15);
		printf("          ");
		if(e<wh){
			while(fscanf(fp,"%d %s %s %s %d %d\n",&obj.medid,obj.mednm,obj.cmpnm,obj.type,&obj.rate,&obj.stock) != EOF){
				if(ar[e]==obj.medid){
					gotoxy(5,a+11);
					printf("%s",obj.mednm);
					gotoxy(69,a+11);
					*p=arr[e];
					printf("%d",*p);
					return ar[e];
				}
			}
		}else{
			q=1;
			gotoxy(22,5);
			printf("please Enter Appropriate Choices!");
		}
	}while(q==1);
}
void medshow(int i){
	int k;
	struct meds obj;
	FILE *fp;
	fp=fopen("meds.txt","a+");
	while( fscanf(fp,"%d %s %s %s %d %d\n",&obj.medid,obj.mednm,obj.cmpnm,obj.type,&obj.rate,&obj.stock) != EOF){
		if(obj.medid==i){
			printf("Medicine : - %s",obj.mednm);
		}
	}
}

int searchunm(){
	char chan,che,n[200];
	int a=1,i=9,c=0,y,o=0;
	char s[200],ch;
	struct user obj;
	FILE *fp;
	strcpy(s,"");
			clrscr();
			createbox();
			createbox();
			gotoxy(30,1);
			printf("-Customer Data Management-");
			gotoxy(24,3);
			printf("Currently Displaying Searched Data");
			gotoxy(4,4);
			printf("Search By: -");
			gotoxy(14,5);
			printf("A. Name");
			gotoxy(40,5);
			printf("B. Doctor");
			gotoxy(60,5);
			printf("E.Exit Search Mode");
			gotoxy(2,7);
			printf("------------------------------------------------------------------------------");
			gotoxy(2,9);
			printf("------------------------------------------------------------------------------");
			gotoxy(4,8);
			printf("Serial No |");
			gotoxy(15,8);
			printf(" Name of Patient |");
			gotoxy(35,8);
			printf("  Name of Doctor  |");
			gotoxy(57,8);
			printf("Area |");
			gotoxy(63,8);
			printf("Age |");
			gotoxy(69,8);
			printf("Total(Rs.)");
			gotoxy(5,6);
			printf("Search By Name: -");
			gotoxy(55,6);
			printf("Press \"`\" to cancel");
			while(a==1){
				y=23+c;
				gotoxy(y,6);
				ch=getch();
				chan=ch;
				strncat(s,&ch,1);
				fflush(stdin);
				if(ch!='`'){
					clrscr();
					i=9;
					createbox();
					gotoxy(30,1);
					printf("-Customer Data Management-");
					gotoxy(24,3);
					printf("Currently Displaying Searched Data");
					gotoxy(4,4);
					printf("Search By: -");
					gotoxy(14,5);
					printf("A. Name");
					gotoxy(40,5);
					printf("B. Doctor");
					gotoxy(60,5);
					printf("E.Exit Search Mode");
					gotoxy(2,7);
					printf("------------------------------------------------------------------------------");
					gotoxy(2,9);
					printf("------------------------------------------------------------------------------");
					gotoxy(4,8);
					printf("Serial No |");
					gotoxy(15,8);
					printf(" Name of Patient |");
					gotoxy(35,8);
					printf("  Name of Doctor  |");
					gotoxy(57,8);
					printf("Area |");
					gotoxy(63,8);
					printf("Age |");
					gotoxy(69,8);
					printf("Total(Rs.)");
					gotoxy(5,6);
					printf("Search By Name: -");
					gotoxy(55,6);
					printf("Press \"`\" to cancel");
					fp=fopen("user.txt","r");
					gotoxy(23,6);
					printf("%s",s);
					o=c+1;
					while( fscanf(fp,"%d %s %s %s %d %d %d %d %d\n",&obj.id,obj.pname,obj.dname,obj.address,&obj.age,&obj.med1,&obj.med2,&obj.med3,&obj.total) != EOF){
						if(strncmp(s,obj.pname,o)==0){
								i++;
								gotoxy(8,i);
								printf("%d",obj.id);
								gotoxy(16,i);
								printf("%s",obj.pname);
								gotoxy(36,i);
								printf("%s",obj.dname);
								gotoxy(55,i);
								printf("%s",obj.address);
								gotoxy(66,i);
								printf("%d",obj.age);
								gotoxy(75,i);
								printf("%d",obj.total);
							}
						}
					c++;
				}else{
					a=0;
				}
		}
		strcpy(s,"");
		fclose(fp);
	gotoxy(55,6);
	printf("Another Search?[y/n]");
	che=getch();
	switch(che){
		case 'y':
		case 'Y':
			a=1;
			break;
		case 'n':
		case 'N':
			a=0;
			break;
		default:
			a=0;
			break;
	}
	return a;
}
int searchudoc(){
	char chan,che,n[200];
	int a=1,i=9,c=0,y,o=0;
	char s[200],ch;
	struct user obj;
	FILE *fp;
	strcpy(s,"");
			clrscr();
			createbox();
			createbox();
			gotoxy(30,1);
			printf("-Customer Data Management-");
			gotoxy(24,3);
			printf("Currently Displaying Searched Data");
			gotoxy(4,4);
			printf("Search By: -");
			gotoxy(14,5);
			printf("A. Name");
			gotoxy(40,5);
			printf("B. Doctor");
			gotoxy(60,5);
			printf("E.Exit Search Mode");
			gotoxy(2,7);
			printf("------------------------------------------------------------------------------");
			gotoxy(2,9);
			printf("------------------------------------------------------------------------------");
			gotoxy(4,8);
			printf("Serial No |");
			gotoxy(15,8);
			printf(" Name of Patient |");
			gotoxy(35,8);
			printf("  Name of Doctor  |");
			gotoxy(57,8);
			printf("Area |");
			gotoxy(63,8);
			printf("Age |");
			gotoxy(69,8);
			printf("Total(Rs.)");
			gotoxy(5,6);
			printf("Search By Doctor Name: -");
			gotoxy(55,6);
			printf("Press \"`\" to cancel");
			while(a==1){
				y=23+c;
				gotoxy(y,6);
				ch=getch();
				chan=ch;
				strncat(s,&ch,1);
				fflush(stdin);
				if(ch!='`'){
					clrscr();
					i=9;
					createbox();
					gotoxy(30,1);
					printf("-Customer Data Management-");
					gotoxy(24,3);
					printf("Currently Displaying Searched Data");
					gotoxy(4,4);
					printf("Search By: -");
					gotoxy(14,5);
					printf("A. Name");
					gotoxy(40,5);
					printf("B. Doctor");
					gotoxy(60,5);
					printf("E.Exit Search Mode");
					gotoxy(2,7);
					printf("------------------------------------------------------------------------------");
					gotoxy(2,9);
					printf("------------------------------------------------------------------------------");
					gotoxy(4,8);
					printf("Serial No |");
					gotoxy(15,8);
					printf(" Name of Patient |");
					gotoxy(35,8);
					printf("  Name of Doctor  |");
					gotoxy(57,8);
					printf("Area |");
					gotoxy(63,8);
					printf("Age |");
					gotoxy(69,8);
					printf("Total(Rs.)");
					gotoxy(5,6);
					printf("Search By Doctor Name: -");
					gotoxy(55,6);
					printf("Press \"`\" to cancel");
					fp=fopen("user.txt","r");
					gotoxy(23,6);
					printf("%s",s);
					o=c+1;
					while( fscanf(fp,"%d %s %s %s %d %d %d %d %d\n",&obj.id,obj.pname,obj.dname,obj.address,&obj.age,&obj.med1,&obj.med2,&obj.med3,&obj.total) != EOF){
						if(strncmp(s,obj.dname,o)==0){
								i++;
								gotoxy(8,i);
								printf("%d",obj.id);
								gotoxy(16,i);
								printf("%s",obj.pname);
								gotoxy(36,i);
								printf("%s",obj.dname);
								gotoxy(55,i);
								printf("%s",obj.address);
								gotoxy(66,i);
								printf("%d",obj.age);
								gotoxy(75,i);
								printf("%d",obj.total);
							}
						}
					c++;
				}else{
					a=0;
				}
		}
		strcpy(s,"");
		fclose(fp);
	gotoxy(55,6);
	printf("Another Search?[y/n]");
	che=getch();
	switch(che){
		case 'y':
		case 'Y':
			a=1;
			break;
		case 'n':
		case 'N':
			a=0;
			break;
		default:
			a=0;
			break;
	}
	return a;
}