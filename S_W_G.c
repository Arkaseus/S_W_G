#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int f2(char,char);
char f1();
void main()
{   
    char you,com;
    int result,i=0;
    int w=0,l=0,d=0;
char temp='y';
 while(temp=='y')
 {
    for(i=1;i<=5;i++)
   { 
     printf("\nEnter 's' for snake/'w' for water/'g' for gun:");
     fflush(stdin);
     scanf("%c",&you);
     system("cls");
      com=f1();
     result=f2(you,com);
     if(result==-1)
     {printf("You lose '-' (cpu choose %c ,you choose %c) ",com,you);
     l+=20;
     }
     else 
     if(result==0)
      {printf("draw (cpu choose %c ,you choose %c)",com,you);
      d++;
      }
     else
      if(result==1)
     {printf("you win ! (cpu choose %c ,you choose %c)",com,you);
      w+=20;
      }
    }
      printf("\nFinal score! cpu score=%d ,your score=%d (draw=%d)\n",l,w,d);
 
  printf("\nPress 'Y' to play again: ") ;
  fflush(stdin);
   scanf("%c",&temp);
 }
 getch();

}
//function for cpu turn
char f1()
   {  int no; 
     srand(time(0));
     no=rand()%10;
     if(no<3) 
     return 's';
     else if(no>3&&no<=6)
     return 'w';
     else 
     return 'g';
    }
//function for checking result
int f2(char you,char com)
{  if(you==com)
  return 0;
   else if (you=='s'&&com=='w')
  return 1;
   else if (you=='s'&&com=='g')
  return -1;
   else if (you=='w'&&com=='s')
  return -1;
   else if (you=='w'&&com=='g')
  return 1;
   else if (you=='g'&&com=='s')
  return 1;
   else if (you=='g'&&com=='w')
  return -1;

}
 



