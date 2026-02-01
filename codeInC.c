#include <stdio.h>

#define size 7
int mid = size/2;
int i=0, j=0;
int canvas[size][size] = {0}; int given =4;

void paintXAxis()  
{
     for( j=0; j<size; j++ )
         canvas[mid][j] = 1;
}

void paintYAxis()
{
     for( i=0; i<size; i++ )
         canvas[i][mid] = 1;
}

void paintQuadOne()
{
     for( i=0 ; i<mid; i++ )
     {     
          for( j=size-1 ; j>mid; j-- )
          {
               canvas[i][j] = 1;
          }      
     }
}

void paintQuadTwo()
{
  for( i=0 ; i<mid; i++ )
     {     
          for( j=0 ; j<mid; j++ )
          {
               canvas[i][j] = 1;
          }      
     }
}

void paintQuadThree()
{
     for( i=size-1 ; i>mid; i-- )
     {     
          for( j=0 ; j<mid; j++ )
          {
               canvas[i][j] = 1;
          }      
     } 
}

void paintQuadFour()
{
     for( i=size-1 ; i>mid; i-- )
     {     
          for( j=size-1 ; j>mid; j-- )
          {
               canvas[i][j] = 1;
          }      
     }
}

void printMat()
{
    for( i=0; i<size; i++ )
    {
         printf("\t");
        for( j=0; j<size; j++ )
        {
            if( canvas[i][j] == 1 ) printf("*");
            else if( canvas[i][j] == 0 ) printf(" ");
        }
        printf("\n");
    }
}

void initMat()
{
    for( i=0; i<size; i++ )
    {
        for( j=0; j<size; j++ )
        {
            canvas[i][j] = 0;
        }
    }
}


void paintMat()
{
    switch(given)
    {
        case 1 : paintQuadOne(); break;
        case 2 : paintQuadTwo(); break;
        case 3 : paintQuadThree(); break;
        case 4 : paintQuadFour(); break;
         
     }
}

int main()
{
    initMat();
    paintXAxis(); paintYAxis();
    
    do{
        if( given>4 || given<1 )
        {
            printf("\n");
            printf("invalid input! please try again !"); printf("\n");
        }
        printf("Enter a number 1-4 : ");
        scanf( "%d", &given ); printf("\n");
    }
    while( given>4 || given<1 );
    
    paintMat();
    printMat(); 
    
    
}
