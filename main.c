#include "NumClass.h"
#include <stdio>
void main ( int a, int b){
    int e=b-a+1;
    String Amstrong="The Armstrong numbers are: ";
    String Palindromes="The Palindromes are:";
    String Prime= "The Prime numbers are: ";
    String Strong="The Strong numbers are: ";

int [] numbers=new int [e];
numbers=array(a,b);
for(int i=0; i<=e; i++){
if(isAmstrong(number[i])==1){
    Amstrong=Amstrong+number[i];
}
}

for(int i=0; i<=e; i++){
if(isPalindromes(number[i])==1){
    Palindromes =Palindromes+number[i];
}
}

for(int i=0; i<=e; i++){
if(isPrime(number[i])==1){
    Prime=Prime+number[i];
}
}

for(int i=0; i<=e; i++){
if(isStrong(number[i])==1){
    Strong=Strong+number[i];
}
}
printf(Amstrong \n  +  Palindromes  /n +    Prime \n + Strong     );

}





int[] array( int a, int b){
    int c = b-a;
    int g=0;
    int [] ans= new int[c+1];
    for(int i=a; i<b+1; a++){
        ans[g]=a;
        g++
    }
    return ans;
}