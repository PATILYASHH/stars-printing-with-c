// star printing with option
#include<stdio.h>
int star();
int invercestar();
int exit();
int buttons();

int main()
{
  int input;
  retry:

  printf("Choose One Option : \n");
  printf("1] Stars \n");
  printf("2] Inverce stars \n");
  printf("3] Exit \n");
  scanf("%d",&input);

switch (input)
  {
    case 1 :

      // satrs prnting streat
       star();

      // extra options 

      int option;
      retryo:

      printf("Goto main manu [0/1]");
      scanf("%d",&option);
      switch(option)
        {
          case 1:
          goto retry;
          break;

          case 0:
          goto exit;
          break;

          default:
          printf("No such option , Retry\n");
          goto retryo;

        }
      break;

     case 2:
    // inverce printng stars
        invercestar();
       // extra options 

       int optionn;
       retryoo:

       printf("Goto main manu [0/1]");
       scanf("%d",&optionn);
       switch(optionn)
         {
           case 1:
           goto retry;
           break;

           case 0:
           goto exit;
           break;

           default:
           printf("No such option , Retry\n");
           goto retryoo;

         }

    break;

    case 3:
    // exit
        printf("Exiting program ......\n");

      printf("Exited. \nHave a nice Day\t:-) ");
      goto exit;

    break;
    default:
      printf("\v\v\vNo such a option , Try again ...\n\v\v");
  goto retry;    
    break;
  }
exit:
    return 0;
    }

int star(){

int num;
  
  printf("Enter how much stars do you want to print \n");
  scanf("%d",&num);
  for(int i=0; i<=num; ++i)
    {
for(int j=0; j<= i; ++j)
  {
    printf("*");
  }
      printf("\n");
    }
  
  return 0;
}


int invercestar(){

int num;

  printf("Enter how much inverce stars do you want to print \n");
  scanf("%d",&num);
  for(int i=num; i>=0; --i)
    {
for(int j=i; j>= 0; --j)
  {
    printf("*");
  }
      printf("\n");
    }

  
  return 0;
}

