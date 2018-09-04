//Luis Ignacio Acosta Zamora A01411895
//Write a program that produces the first N numbers of the Fibonacci sequence,
//where N is a number given by the user.
//If the user says they want 25 numbers (N = 25),
//then your program must produce the first 25 numbers of the Fibonacci sequence.

#include <stdio.h>

int main() {
    //State variables
    int fibonacci;
    int newFibonacci = 1;
    int num1 = 0;
    int num2 = 1;


    //Ask the user for the amount of number they want from the fibonacci sequence
    printf("How many Fibonacci numbers do you want?: ");
    //Save the fibonacci amount in a variable
    scanf("%d", &fibonacci);

    printf("Here is your Fibonacci sequence: \n");

    //Start the "for" loop
    for(int count = 0; count < fibonacci ; count += 1){
        printf("%i\n", newFibonacci);
        newFibonacci = num1 + num2;
        num1 = num2;
        num2 = newFibonacci;
    }

    printf("The Fibonacci numbers that you asked for have been printed!\n");
    return 0;

}