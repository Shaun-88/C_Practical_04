/* 
Shaun Dsilva, Roll No: 04, UID No: 2605004, FYBsc - IT C Practical.

PRACTICAL 04 - Number Statisitcs


SCENARIO: A mathematics teacher wants to analyze a set of numbers entered bu students during
a classroom activity. Instead of performing calculations manually, the teacher wants a software
application that summarizes the data.

You have been asked to develop this application.

*/






#include <stdio.h>

int main() {

// To Store the 10 numbers entered by the user
    int entered_nums[10];

// To store the sum of the entered numbers and to display it later
    int sum = 0;

// To store the even and odd numbers separately and to display them later
    int even_nums[10];
    int odd_nums[10];
    int even_count = 0; 
    int odd_count = 0;  
// 0 is required so that c knows to start the increment from 0 and not from some random number

    

// Loop to take input from the user and store it in the array
    for (int i=0; i < 10; i++) {
        printf("Please enter number %d: ", i+1);
        scanf("%d", &entered_nums[i]);
    }

// Display the entered numbers (added it first to test if input is correct)
    printf("The Entered numbers are:");

    for (int i=0; i < 10; i++) {
        printf("%d ", entered_nums[i]);
    }

// To find the largest and smallest number in the array
    int largest_num = entered_nums[0];
    int smallest_num = entered_nums[0];
/* Delaring these variables here and not before if because we want the values inputed by the user
and not a blank array. Indexing with 0 in order to start the comparison of the largest and smallest
number from the very first element in the array*/


// Loop to calculate the sum of the entered numbers
    for (int i=0; i < 10; i++) {
        sum += entered_nums[i];
    }



// Loop and if/else condition to separate the even and odd numbers into their respective arrays using mod 2 method
    for (int i = 0; i < 10; i++) {
        if (entered_nums[i] % 2 == 0) {
            even_nums[even_count] = entered_nums[i];
            even_count++;
        } else {
            odd_nums[odd_count] = entered_nums[i];
            odd_count++;
        }
    }



// Loop to find the largest number in the array
    for (int i = 0; i < 10; i++) {
        if (entered_nums[i] > largest_num) {
            largest_num = entered_nums[i];
        }
    }

// Loop to find the smallest number in the array
    for (int i = 0; i < 10; i++) {
        if (entered_nums[i] < smallest_num) {
            smallest_num = entered_nums[i];
        }
    }



// To display the sum, even and odd numbers, largest and smallest number

    printf("\nThe sum of the entered numbers is: %d", sum);
    
    printf("\nThere are a total of %d even numbers and they are: ", even_count);
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even_nums[i]);
    }



    printf("\nThere are a total of %d odd numbers and they are: ", odd_count);
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd_nums[i]); 
    }



    printf("\nThe Largest number here is: %d", largest_num);
    printf("\nThe Smallest number here is: %d", smallest_num);

    
// End of the program :-)
    return 0;
}