#include"NumClass.h"

int isPalindrone(int a){
    int length=length(a,1)
int [] array = new int [length];
array=fillArray(a,array,length);
int ans= check(array,length,0);
retuurn ans;

}

int check(int [] array, int length,int c){
    int p=1;
    if(length<c){break;}
    if(array[length]!=array[c]){
        p=0 ;
        return p ;}
    else check(array,length-1,c+1);
    return p;
}




int [] fillArray(int a, int[] array, int length){
    array[length]=a%10;
    a=a/10;
    length=length-1;
    if(length<1){
        return array;
    }
    fillArray(a,array.length);
}



int length(int a, int c){

    if(a>10){
        c++
        length(a/10, c+1)
    }

}

int isAmstrong(int a){
int b= length(a);
int[] array=new int[b];
array=fillArray[a, array, b];
int ans=checkAmstring(array,length,0);
if(ans==a){return 1;}
else return 0;
}

int checkAmstring(int[]array, int length,int c){
    if(length<1){return c;}
    int s=array[length];
    c=c+s!;
    length--;
    checkAmstring(array,length,c);
}