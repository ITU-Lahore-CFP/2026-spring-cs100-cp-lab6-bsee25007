#include "functions.h"


int main() {




    int c;   // making menu

cout<<"Enter : "<<endl;
cout<<"1 for Sum Of Squares "<<endl;
cout<<"2 for Factorial "<<endl;
cout<<"Enter : ";
cin>>c;

if(c==1){
    int n;
    cout<<"Enter number :"<<endl;
    cin>>n;

    cout<<"Sum Of Squares : "<<sumOfSquares(n)<<endl;  // shows result 
}

else if (c==2){

    int n;
    cout<<"Enter number :"<<endl;
    cin>>n;

    cout<<"Factorial = "<< findFactorial(n)<<endl;  // shows factorial result
}

else{

    cout<<"Invalid input "<<endl;  // if user enters wrong choice
}
   
}