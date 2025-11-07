#include "difference_of_squares.h"

unsigned int square_of_sum(unsigned int number)
{
    unsigned int sum = 0;
    sum = number * (number + 1) / 2;
    return (sum * sum);
}
unsigned int sum_of_squares(unsigned int number)
{
    unsigned int sum_squares = number * (number + 1) * (2*number + 1) / 6; 
    return (sum_squares);
}
unsigned int difference_of_squares(unsigned int number)
{
    unsigned int sum = sum_of_squares(number);
    unsigned int squeersum = square_of_sum(number);
    return (squeersum - sum);
}
