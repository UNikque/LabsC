#include<stdio.h>
//#include<cstdlib.h>
#include<stdlib.h>
#include<string.h> 
  	void overkill(void);
  	void halfdel(void);
	void newone(void);
	void showmesomeshit(void);
	void found (void);
	void seeall(void);
typedef struct card {
	char name[20];
	char district[20];
	char adres[20];
	long unsigned int number ;
	long unsigned int number2 ;
	long unsigned int lastpay ;
	long unsigned int order ;
	struct card *next; }
	card;
	
	
	
	struct card *start;
	struct card *work;
	struct card *focus;
	struct card *last;
	char pole,mode;
	int sizz;
void main(void){
	pole= 255;
	start = NULL;
	sizz= sizeof(struct card); 
	last = focus = start = malloc(sizz);
	work =  malloc(sizz);
	mode ='s';
	char what;
	(*start).next = NULL;
	while(what != 'q' && what != 'Q'){
		puts("\n nazhmite r dlia sbrosa vsego, d dlia udalenia polovini  elementov, a dlia dobavlenia novih elementov, s dlia vibrannogo elementa, + dlia peremeshenia vyberite sledushiy element, f dlia poiska, 0 dlia peremeshenia vibiraite po pervomu elementu, j dlia prosmotra vsego spiska, q dlia vihoda");
	//	scanf("%c",&what);
		what=getch();
		printf(" you enter sumbol %c  ", what);
		puts("");
		switch(what){
			
			case 'r':
			case 'R':
				overkill();
					break;
			
			case 'a':
			case 'A':
				newone();
			
					break;
			
			case 's':
			case 'S':
				if (focus != start){
				
				showmesomeshit();}
				else{
					puts("\n 0st element is empty ");
				}
					break;
			
			case '+':
					if((*focus).next != NULL){
			    	focus = (*focus).next;
			    }
			    else{
			    	puts("\n it's last element'");
				}
					break;
			
			case 'f':
			case 'F':
						work = malloc(sizz);
//						puts("\n enter the name");
						char input[20] = " ";
		//(*last).name = ;
		//gets((*last).name);
						
//						scanf("%s",input);
//						strncpy((*work).name, input, 19);
						puts("\n Tb| c kakoro pauoHa?");
						scanf("%s",input);
						//input[19]=  '/0';
						strncpy((*work).district, input, 19);
//						puts("\n peas leave adress here");
//						scanf("%s",input);
						//input[19]=  '/0';
//						strncpy((*work).adres, input, 19);
//						puts("enter the phone number");
						unsigned long int s;
//						scanf("%u",&s);
//						(*work).number = s;
						puts("enter the order number");
						scanf("%u",&s);
						(*work).number2 = s;
						puts("time of last pay");
						scanf("%u",&s);
						(*work).lastpay = s;
//						puts("time of order begins");
//						scanf("%u",&s);
//						(*work).order = s;
						 found();
					break;
			
			case '0':
					focus = start;
					break;
			case 'q':
			case 'Q':
				puts("press any key");
			
					break;
			case 'j':
			case 'J':
				seeall();
			
					break;			
			case 'd':
			case 'D':
				halfdel();
			
					break;
		    default:
			
				puts("pls press another key");
				break;
				  	
		}
	//System.Threading.Thread.Sleep(100);	
		
	}
	getch();
	overkill();
	free(work);
	free(start);
}


    void overkill(void){
    struct card *enemy, *ss;
	enemy = (*start).next;
	(*start).next = NULL;
	while(enemy != NULL){
		ss= enemy;
		enemy= (*enemy).next;
		free(ss);
	}	
	focus = start;
	}
	void newone(void) 
	{
		(*last).next = malloc(sizz);
		last = (*last).next;
		puts("\n enter the name");
		char input[20]= " ";
		//(*last).name = ;
		//gets((*last).name);
		scanf("%s",input);
						strncpy((*last).name, input, 19);
						puts("\n Tb| c kakoro pauoHa?");
						scanf("%s",input);
						//input[19]=  '/0';
						strncpy((*last).district, input, 19);
						puts("\n peas leave adress here");
						scanf("%s",input);
						//input[19]=  '/0';
						strncpy((*last).adres, input, 19);
						puts("enter the phone number");
						unsigned long int s;
						scanf("%u",&s);
						(*last).number = s;
						puts("enter the order number");
						scanf("%u",&s);
						(*last).number2 = s;
						puts("time of last pay");
						scanf("%u",&s);
						(*last).lastpay = s;
						puts("time of order begins");
						scanf("%u",&s);
						(*last).order = s;	
						(*last).next = NULL;
}
void   found (void){
	struct card *anus, *i;
	anus = NULL;
	i = (*start).next;
	while( i != NULL & anus == NULL){
		if (!(memcmp ((*work).district, (*i).district, 19) )/*(*work).name == (*i).name*/ || (*work).number2 == (*i).number2  || (*work).lastpay == (*i).lastpay){
			anus= i;
		}
		else i = (*i).next;
	}
	if(anus != NULL){
		 focus = anus;
		 puts("we found it");
	}
	else	{puts("no coincidence");}
	

}
	void showmesomeshit(void){
		printf("\n name is [%s]", (*focus).name);
		printf("\n district is [%s]", (*focus).district);
		printf("\n adres is [%s]", (*focus).adres);
		printf("\n phone nomber is [%u]", (*focus).number);
		printf("\n order nomber [%u]", (*focus).number2);
		printf("\n last pay time is [%u]", (*focus).lastpay);
		printf("\n time of order [%u]", (*focus).order);						
	}
	void seeall(void){
		struct card *wtf;
		wtf = (*start).next;
		while( wtf != NULL){
			puts(" ");
			if (wtf == focus){
				printf(">>>");
			}
			else{
				printf("   ");
			}
			printf("<%s> <%s> <%s>[%d][%d][%d][%d]", (*wtf).name, (*wtf).district, (*wtf).adres, (*wtf).number, (*wtf).number2, (*wtf).order, (*wtf).lastpay);
			wtf = (*wtf).next;
		}
	}
	void halfdel(void){
		struct card *stat, *target;
		target = (*start).next;
		while(target != NULL){
			if((*target).next!= NULL){
				stat=(*target).next;
				target = (*target).next= (*stat).next;
				free(stat);
			}
		}
	}
 
