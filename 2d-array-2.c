#include<stdio.h>

int main()
{
    int row , column ;

    printf("Enter row length please : ");
    scanf("%d" , &row);

    printf("\nEnter column length please : ");
    scanf("%d" , &column);

    int arr[row][column] , k , r  ;
    for(k = 0 ; k < row ; k++)
    {
        for(r = 0 ; r < column ; r++)
        {
            printf("Enter elements of row %d column %d\n" , k+1 , r+1);
            scanf("%d" , &arr[k][r]);

        }
    }

    system ("cls") ;

    printf("\nThe given Matrix is : \n\n");
    for(k = 0 ; k < row ; k++)
    {
        for(r = 0 ; r < column ; r++)
        {
            printf("\t%d   " , arr[k][r]);
        }
        printf("\n");
    }

    for(r = 0 ; r < column ; r++)
    {
       int max = arr[0][r] ;
       for(k = 1 ; k < row ; k++)
       {
            if(arr[k][r] > max)
            {
                max = arr[k][r] ;
            }
       }
      printf("\nMinimum element of Column %d  is : %d\n", k + 1, max);
    }
   return 0 ;
}
    //This the END of this program.
    //Thank you.
