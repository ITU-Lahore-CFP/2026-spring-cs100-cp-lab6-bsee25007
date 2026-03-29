#include "functions.h"


int sumOfSquares(int n) 
{

    int r;

if(n==1){

    r = 1;  // base case when n is 1

}

else {

    r = (n*n) + sumOfSquares(n-1);  //call function again for n-1

}

return r;  // return result
}

int findFactorial(int n)
{


    if(n<=1){

    return 1;  // factorial of 0 or 1 is 1

}

else{

    return n * findFactorial(n-1);  

}
}




