/** lab33main.c
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Lab 33
* ===========================================================  */

#include "lab33functs.h"

int main() {

    // Example usage of the print_bits() function, use this function
    // to help you debug your solution to the questions below
    uint8_t x = 65;
    char y = 'A';
    double z = 8.53677197180176092605993700916E304;

    printf("x = ");
    print_bits(&x, sizeof(x));

    printf("y = ");
    print_bits(&y, sizeof(y));

    printf("z = ");
    print_bits(&z, sizeof(z));


    // Exercise 1
    printf("\nExercise 1: check_bit()\n\n");
    // Write a function check_bit(), which checks whether a specific bit
    // in the input is a 1. The function accepts 2 integer parameters, the
    // first is the integer variable being checked, and the second is the
    // bit number to check. Bits are numbered from 0 to 31, where bit 0 is
    // the least significant bit. The function should return an int value
    // of 1 if the chosen bit is a 1, and 0 if it is a 0.
    //
    // Create some integer variables and use the print_bits() function to
    // test your check_bit() function.



    // Exercise 2
    printf("\nExercise 2: count_bits()\n\n");
    // Write a function count_bits(), which counts the number of bits 
    // with value 1 (the true bits) in the input variable. The function 
    // accepts 1 integer parameter, the variable whose 1 bits will be 
    // counted. The function should return an int value with the total 
    // number of bits with value of 1 in the variable.
    //
    // Create some integer variables and use the print_bits() function to
    // test your count_bits() function.



    // Exercise 3
    printf("\nExercise 3: bit_parity()\n\n");
    // Write a function bit_parity(), which determines if the number of true
    // bits in a variable is even or odd. The function accepts 1 integer parameter,
    // the variable whose parity is being checked. The function should return
    // an int value. If the number of true bits is even, return 0, if the number
    // of true bits is odd, return 1.
    //
    // Create some integer variables and use the print_bits() function to test
    // your bit_parity() function.
    //
    // Extra: can you think of a way to tell if an integer is even or odd, using
    // a bit operation rather than using the mod operator?



    // Exercise 4
    printf("\nExercise 4: flip_bit()\n\n");
    // Write a function flip_bit(), which negates a specific bit in a variable.
    // The function accepts 2 integer parameters, the first is the variable who
    // bit will be changed, the second is the number of the bit to be flipped.
    // Bits are numbered from 0 to 31, where bit 0 is the least significant bit.
    // The function should return the modified variable.
    //
    // Create some integer variables and use the print_bits() function to test
    // your flip_bit() function.



    // Exercise 5
    printf("\nExercise 5: simple_checksum()\n\n");
    // Write a function simple_checksum(), which calculates a very simple data
    // integrity check. The function accepts a character array as input and returns
    // the exclusive or combination of each character in the array. As in starting
    // at 0, keep a running combination of each character in the array using the
    // bitwise exclusive or operator. Return the final checksum as a uint8_t type.
    //
    // Call your function a few times with different character array inputs to test
    // that it works. Note that for many reasons, including the commutative property of
    // the exclusive or operator, this is not a valid data integrity check.


    
    return 0;
}
