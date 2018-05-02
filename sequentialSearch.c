#include<stdio.h>

int main(){

    int array[100], search, countCheckInArray, nInputFromUser;

    printf("Enter the number of elements in an array \n");
    scanf("%d", &nInputFromUser);

    printf("Enter %d integers \n", nInputFromUser);

    for(countCheckInArray = 0; countCheckInArray < nInputFromUser ; countCheckInArray++){
        scanf("%d", &array[countCheckInArray]);
    }

    printf("Enter a number to Search \n");
    scanf("%d", &search);

    for(countCheckInArray=0; countCheckInArray<nInputFromUser; countCheckInArray++){

        if(array[countCheckInArray] == search){

            printf("%d is present at location %d", search, countCheckInArray+1);
            countCheckInArray = nInputFromUser+1;
        }
    }

    if(countCheckInArray == nInputFromUser){

         printf("%d is not present in array", search);
    }

    return 0;
}
