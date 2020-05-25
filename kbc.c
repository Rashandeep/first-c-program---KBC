#include<stdio.h>
int main()
{
 char b;
 int i=0;
 printf("welcome to game\n do you want start game.\nif yes ,plz input the options to ans the ques\n");
 printf("y or n\n");
 scanf("%c",&b);
 if(b=='y')
 {
  int a;
  printf("here the first ques\nwho is PM of india?\n");
  printf("1 Manmohan Singh\n2 Narendra Modi\n3 Jawaharlal Nehru\n4 None\n");
  scanf("%d",&a);
  if(a==2)
   {printf("the ans is correct\n");
   i=i+1000;
   printf("congo ! u have won Rs %d\n",i);}
   else
   {printf("oops the game is over\n");
   i=0;
   printf("oops! you have won Rs %d\n",i);}
   if (a==2)
  {
    printf("the second ques is\nwhat is capital of india?\n");
    printf("1 Chandigarh\n2 Mohali\n3 New Delhi\n4 None\n");
    scanf("%d",&a);
    if(a==3)
     {printf("the ans is correct\n");
     i=i+1000;
     printf("congo ! u have won Rs %d\n",i);}
     else
     {printf("oops!the game is over\n");
     i=i;
     printf("congo !u have won Rs %d\n",i);}
     if(a==3)
   {
      printf("the third ques is\nwho is captain of india?\n");
      printf("1 MS dhoni\n2 Virat Kholi\n3 Rohit Sharma\n4 None\n");
      scanf("%d",&a);
      if(a==2)
       {printf("the ans is corect\n");
       i=i+1000;
       printf("congo !u have won Rs %d\n",i);}
       else
       {printf("oops the game is over\n");
       i=i;
       printf("congo! u have won Rs %d\n",i);}
       if(a==2)
    {
	printf("the fourth ques is\nwho is president of india?\n");
	printf("1 Ram Nath Kovind\n2 Narendra Modi\n3 Deepak\n4 None\n");
	scanf("%d",&a);
	if(a==1)
         {printf("the ans is corect\n");
         i=i+2000;
         printf("congo ! u have won Rs %d\n",i);}
	 else
	 {printf("oops the game is over\n");
         i=i;
         printf("congo ! u have won Rs %d\n",i);}
	 if(a==1)
     {
	  printf("the fifth ques is\nwho is father of geometry?\n");
	  printf("1 Aristotle\n2 Euclid\n3 Kepler\n4 None\n");
	  scanf("%d",&a);
  	  if(a==2)
           {printf("the ans is correct\n");
           i=i+5000;
           printf("congo ! u have won Rs %d\n",i);}
	   else
	   {printf("oops the game is over\n");
           i=i;
           printf("congo ! u have won Rs %d\n",i);}
	   if(a==2)
       {
	    printf("the sixth ques is\nwho is edu minister of india?\n");
   	    printf("1 Prakash Javedekar\n2 Mamta\n3 Sushma\n4 Irani\n");
	    scanf("%d",&a);
	    if(a==1)
	     {printf("the ans is correct\n");
             i=i+10000;
             printf("congo ! u have won Rs %d\n",i);}
	     else
	     {printf("oops the game is over\n");
             i=i;
             printf("congo ! u have won Rs %d\n",i);}
	     if(a==1)
        {
 	      printf("the seventh ques is\nwhen was telephone invented?\n");
	      printf("1 1870\n2 1880\n3 1850\n4 1860\n");
    	      scanf("%d",&a);
              if(a==1)
               {printf("the ans is correct\n");
               i=i+30000;
               printf("congo ! u have won Rs %d\n",i);} 
               else
               {printf("oops the game is over\n");
               i=i;
               printf("congo ! u have won Rs %d\n",i);}
               if(a==1)
          {
		printf("the eigth ques is\nwhat is number of states in india?\n");
		printf("1 14\n2 16\n3 25\n4 29\n");
		scanf("%d",&a);
		if(a==4)
                 {printf("the ans is correct\n");
                 i=i+50000;
                 printf("congo ! u have won Rs %d\n",i);}
		 else
		 {printf("oops the game is over\n");
                 i=i;
                 printf("congo ! u have won Rs %d\n",i);}
		 if(a==4)
           {
		  printf("the ninth ques is\nwhen the india became republic?\n");
  		  printf("1 1948\n2 1901\n3 1950\n4 1961\n");
  		  scanf("%d",&a);
      		  if(a==3)
                   {printf("the ans is correct\n");
                   i=i+100000;
                   printf("congo ! u have won Rs %d\n",i);} 
   		   else
		   {printf("oops the game is over\n");
                   i=i;
                   printf("congo ! u have won Rs %d\n",i);}
   		   if(a==3)
            {
		    printf("the tenth ques is\nhow was tamil nadu known?\n");
		    printf("1 Mysore\n2 Madras\n3 Bombay\n4 Hydrabad\n");
		    scanf("%d",&a);
		    if(a==2)
                     {printf("the ans is correct\n");
                     i=i+120000;
                     printf("congo ! u have won Rs %d\n",i);}
		     else
		     {printf("oops the game is over\n");
                     i=i;
                     printf("congo ! u have won Rs %d\n",i);}
    		     if(a==2)
             {
		      printf("the eleventh ques is\nnagaland was sepreted from which state?\n");
		      printf("1 Orrisa\n2 Punjab\n3 West Bengal\n4 Assam\n");
		      scanf("%d",&a);
		      if(a==4)
                       {printf("the ans is correct\n");
                       i=i+400000;
                       printf("congo ! u have won Rs %d\n",i);}
		       else
		       {printf("oops the game is over\n");
                       i=i;
                       printf("congo ! u have won Rs %d\n",i);}
		       if(a==4)
              {
			printf("the twelth ques is\nwhich is smallest state in terms of area?\n");
			printf("1 Punjab\n2 Sikkim\n3 Goa\n4 Tripura\n");
			scanf("%d",&a);
			if(a==3)
                         {printf("the ans is correct\n");
                         i=i+480000;
                         printf("congo ! u have won Rs %d\n",i);}
			 else
			 {printf("oops the game is over\n");
                         i=i;
                         printf("congo ! u have won Rs %d\n",i);}
                         if(a==3)
                {
			  printf("the thirteenth ques is\nwhere is tomb of akbar?\n");
			  printf("1 Delhi\n2 Sikandra\n3 Lahore\n4 Fatepur\n");
			  scanf("%d",&a);
			  if(a==2)
                           {printf("the ans is correct\n");
                           i=i+1300000;
                           printf("congo ! u have won Rs %d\n",i);}
			   else
			   {printf("oops the game is over\n");
                           i=i;
                           printf("congo ! u have won Rs %d\n",i);} 
			   if(a==2)
		 {
			    printf("the fourthteen ques is\nwho founded indian national congress?\n");
			    printf("1 Banerjee\n2 Hume\n3 Annie\n4 Nehru\n");
			    scanf("%d",&a);
			    if(a==2)
                             {printf("the ans is correct\n");
                             i=i+2500000;
                             printf("congo ! u have won Rs %d\n",i);}
 			     else
			     {printf("oops the game is over\n");
                             i=i;
                             printf("congo ! u have won Rs %d\n",i);}
			     if(a==2)
   		  {
			      printf("the fifthteen and the last ques is\nwhich state or ut has french as an official lang?\n");
     			      printf("1 Goa\n2 Lakshadweep\n3 Pondicherry\n4 Daman and Diu\n");
			      scanf("%d",&a);
			      if(a==3)
			       {printf("the ans is correct\n");
                               i=i+5000000;
                               printf("congo ! u have won game and Rs %d\n",i);}
			       else 
			       {printf("u played really well");
                               i=i;
                               printf("congo ! u have won Rs %d\n",i);}
 }
  }
   }
    }
     }
      }
       }
        }
         }
          }
           }
            }
             }
              }
               }
if(b=='n')
printf("bye");


}

