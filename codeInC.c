#define size 7
int mid = size/2;
int i=0, j=0;
int canvas[size][size] = {0};

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
               arr[i][j] = 1;
          }      
     }
}

void paintQuadTwo()
{
  for( i=0 ; i<mid; i++ )
     {     
          for( j=0 ; j<mid; j++ )
          {
               arr[i][j] = 1;
          }      
     }
}

void paintQuadThree()
{
     for( i=mid ; i<size-1; i++ )
     {     
          for( j=0 ; j<mid; j++ )
          {
               arr[i][j] = 1;
          }      
     } 
}

void paintQuadFour()
{
     for( i=mid ; i<size-1; i++ )
     {     
          for( j=mid ; j<size-1; j++ )
          {
               arr[i][j] = 1;
          }      
     }
}

int main()
{
  
}


