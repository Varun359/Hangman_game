#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<strings.h>
#include<time.h>
#include<conio.h>
#include<windows.h>
void create(int t)
{  
   Beep(3200,500);
   switch(t)
   {
      case 1:printf("\n\t\t\t\t\t\t\t\t\t-----");
	     break;
      case 2:printf("\n\t\t\t\t\t\t\t\t\t-----");
	     printf("\n\t\t\t\t\t\t\t\t\t     |");
	     break; 
      case 3:printf("\n\t\t\t\t\t\t\t\t\t-----");
	     printf("\n\t\t\t\t\t\t\t\t\t     |");
	     printf("\n\t\t\t\t\t\t\t\t\t    (0)");
	     break;
      case 4:printf("\n\t\t\t\t\t\t\t\t\t-----");
	     printf("\n\t\t\t\t\t\t\t\t\t     |");
	     printf("\n\t\t\t\t\t\t\t\t\t    (0)");
	     printf("\n\t\t\t\t\t\t\t\t\t    /");
	     break;
      case 5:printf("\n\t\t\t\t\t\t\t\t\t-----");
	     printf("\n\t\t\t\t\t\t\t\t\t     |");
	     printf("\n\t\t\t\t\t\t\t\t\t    (0)");
	     printf("\n\t\t\t\t\t\t\t\t\t    /");
             printf("|");
	     break;
      case 6:printf("\n\t\t\t\t\t\t\t\t\t-----");
	     printf("\n\t\t\t\t\t\t\t\t\t    |");
	     printf("\n\t\t\t\t\t\t\t\t\t   (0)");
	     printf("\n\t\t\t\t\t\t\t\t\t   /");
	     printf("|");
	     printf("\\");
	     break;
      case 7:printf("\n\t\t\t\t\t\t\t\t\t-----");
	     printf("\n\t\t\t\t\t\t\t\t\t     |");
	     printf("\n\t\t\t\t\t\t\t\t\t    (0)");
	     printf("\n\t\t\t\t\t\t\t\t\t    /");
	     printf("|");
	     printf("\\");
	     printf("\n\t\t\t\t\t\t\t\t\t    /");
	     break;
      case 8:printf("\n\t\t\t\t\t\t\t\t\t-----");
	     printf("\n\t\t\t\t\t\t\t\t\t     |");
	     printf("\n\t\t\t\t\t\t\t\t\t    (0)");
	     printf("\n\t\t\t\t\t\t\t\t\t    /");
	     printf("|");
	     printf("\\");
	     printf("\n\t\t\t\t\t\t\t\t\t    /");
	     printf(" \\");		    
	     break;
   }    
}
void instru()
{  
    system("cls");
    printf("                        /@@      /@@ / @@@@@@@ / @@        /@@@@@@   /@@@@@@  /@@      /@@ /@@@@@@@@\n");
    printf("                        | @@  /@ | @@| @@_____/| @@       /@@__  @@ /@@__  @@| @@@    /@@@| @@_____/\n");
    printf("                        | @@ /@@@| @@| @@      | @@      | @@  \\__/| @@  \\ @@| @@@@  /@@@@| @@\n");
    printf("                        | @@/@@ @@ @@| @@@@@   | @@      | @@      | @@  | @@| @@ @@/@@ @@| @@@@@@\n");
    printf("                        | @@@@_  @@@@| @@__/   | @@      | @@      | @@  | @@| @@  @@@| @@| @@__/\n");
    printf("                        | @@@/ \\  @@@| @@      | @@      | @@    @@| @@  | @@| @@\\  @ | @@| @@\n");
    printf("                        | @@/   \\  @@| @@@@@@@@| @@@@@@@@|  @@@@@@/|  @@@@@@/| @@ \\/  | @@| @@@@@@@@\n");       
    printf("                        |__/     \\__/|________/|________/ \\______/  \\______/ |__/     |__/|________/\n");
    
   printf("****Here are the Instructions of the game****\n--->Select the type of mode you want to play\n--->Enter a letter or digit accordingly to the mode which you have selected\n--->If its correct then you will be displayed in which position it is present\n--->If its wrong a part of hangman will be created\n--->You will have atmost eight chances(in eight chances hangman will be created)\nALL the best!!!!!");
}

void fun(char x[],char a,int i)
{       
	x[i]=a;
	printf("\n");
	puts(x);
}
void choose(int l,char str[200][20],int j)
{	
      int i=0,n=20,o=0,h=0,ch,c,k,e=0,g=0,length=0,rand1=-1,rand2=-2,rand3=-3;
      char a,x[40],s[200];
      int d[20]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
      dd:
      printf("\nwhat is the level you want to play\n1.easy\n2.medium\n3.hard\n");
      scanf("%d",&ch);
             switch(ch)
             {	      
		     case 1:  for(k=0;k<(l-1);k++)
	                       x[k]='-';
                               do{
			          rand1=rand()%(l-1);
			          srand(time(0));           
				  rand2=rand()%(l-1);             
				  rand3=rand()%(l-1);
     			       }while((rand1==rand2)||(rand1==rand3)||(rand2==rand3));
	                       x[rand1]=str[j][rand1];
	                       x[rand2]=str[j][rand2];
			       x[rand3]=str[j][rand3];
		               d[e++]=rand1;
			       d[e++]=rand2;
			       d[e++]=rand3;
			       printf("\n");
                               printf("%d %d %d\n",rand1,rand2,rand3);
                               strncpy(s,x,l-1);
			       s[l-1]='\0';
			       puts(s);
			       c=4;
                               break;			       
		     case 2:   for(k=0;k<(l-1);k++)
		                x[k]='-';
			       do{
			          rand1=rand()%(l-1);
		                  srand(time(0));
			          rand2=rand()%(l-1);
			       }while(rand1==rand2);
			       x[rand1]=str[j][rand1];
			       x[rand2]=str[j][rand2];
			       d[e++]=rand1;
			       d[e++]=rand2;
			       printf("\n");
	       		       printf("%d %d\n",rand1,rand2);
			       strncpy(s,x,l-1);
			       s[l-1]='\0';
			       puts(s);
		               c=3;
			       break;
		     case 3:   for(k=0;k<(l-1);k++)
			       x[k]='-';
			       srand(time(0));
			       rand1=rand()%(l-1);
			       x[rand1]=str[j][rand1];
			       d[e++]=rand1;
			       printf("\n");
			       printf("%d\n",rand1);
			       strncpy(s,x,l-1);
			       s[l-1]='\0';
			       puts(s);
			       c=2;
			       break;
	            default:   Beep(3200,100);
			       printf("\nInvalid choice!!!!!!!!!");
                               goto dd;
       }
      bb:
      fflush(stdin);
      printf("\nenter a letter");
      fflush(stdin);
      scanf("%c",&a);
      if(a=='\n'||a=='\0'||a=='\r')
      goto bb;
      for(i=0;i<l;i++)
      {     
	    if(i==rand1||i==rand2||i==rand3)
	    continue;
	    if(a==str[j][i])
	    { 
	     puts(s);
             for(k=0;k<e;k++)
	     {  
	       if(d[k]==i)
                { g++;			
	          break;
		}
	     }
	    if(g!=0)
	    { 
	      g=0; 
	      continue;
	    }
	    printf("\nits present at");
	    length++;
	    d[e]=i;
	    e=e+1;
	    for(k=0;k<e;k++)
            printf("\n%d",d[k]);
  	    fun(s,a,i);
	    g=0;
	    if(length>=l-c)
	    {
	     printf("you won");
	     return;
	    }
	    goto bb;
	   }
	   else
	   h++; 
      }
      if(h>=(l-c))
      {    
	   o++;
	   if(o<=8)
	   {  printf("\nsorry you have entered wrong");
	      create(o);
	      if(o!=8)
	      goto bb;
	   }
	   if(o==8)
	   { 
	      printf("\noooops!!!!!you lost....Better luck next time\n");
              printf("The correct answer is ------------> ");
	      puts(str[j]);
           }
      } 
  }
void get()
{
    FILE *fp;
    char str[40][20];
    int n=20,i=0,j,l;
    fp=fopen("names.txt","r");
    while(!feof(fp))
    {
      fgets(str[i],n,fp);
      i++;
    }
    srand(time(0));
    j=rand()%30;
    fclose(fp);
    l=strlen(str[j]);
    choose(l,str,j);
}
void toughchal()
{
    FILE *f;
    char str[200][20];
    int n=20,i=0,j,l;
    f=fopen("text.txt","r");
    while(!feof(f))
    {
      fgets(str[i],n,f);
      i++;
    }
     srand(time(0));
     j=rand()%130;
     fclose(f);
     l=strlen(str[j]);
     choose(l,str,j);
}
void guesstheno()
{  
     int s[100];
     int d[20]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
     int l,i,len,k,e=0,h,g=0,length=0,o=0,a;
     srand(time(0));
     printf("enter the lenght a number that you want to guess\n");
     scanf("%d",&l);
     for(i=0;i<l;i++)
     {
           s[i]=(rand()%10);
     }    
     s[i]='\0';
     ww:
     fflush(stdin);
     printf("\nenter a digit");
     scanf("%d",&a);
      if(a=='\n'||a=='\0'||a=='\r')
      goto ww;
      for(i=0;i<l;i++)
      {   
            if(a==s[i])
            {
             // puts(s);
              for(k=0;k<e;k++)
             {
                 if(d[k]==i)
               { 
		 g++;
                 break;
	       }
             }
            if(g!=0)
            {
	       g=0;
               continue;
	    }
           printf("\nits present at");
           length++;
           d[e]=i;
           e=e+1;
           for(k=0;k<e;k++)
            printf("\n%d",d[k]);
           s[i]=a;
           g=0;
           if(length>=l)
           {
	     printf("you won");
	     for(i=0;i<l;i++)
		 printf("%d",s[i]);
             return;
	   }
           goto ww;
	  }
           else
           h++;
      }
      if(h>=(l))
      {    o++;
           if(o<=8)
           { 
	      printf("\nsorry you have entered wrong");
              create(o);
              if(o!=8)
              goto ww;
           }
           if(o==8)
           { 
	     printf("\noooops!!!!!you lost....Better luck next time\n");
             printf("The correct answer is -------------> ");
             for(i=0;i<l;i++)
		 printf("%d",s[i]);
           }
      } 
 }  
int main()
{  
  int ch;
 do
 {
  printf("\nenter your choice\n1.Instruction\n2.Play game\n3.challenge\n4.random\n5.exit");
  scanf("%d",&ch);
  switch(ch) 
  {
	  case 1:instru();break;
	  case 2:get();break;
	  case 3:toughchal();break;
	  case 4:guesstheno();break;
	  case 5:exit(1);break;
          default:printf("invalid input");
  }
  }while(ch!=5);
  return 0;
 }



