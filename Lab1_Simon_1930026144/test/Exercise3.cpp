#include<stdio.h>
int main(){
    int num=128;//number which was converted
    int count=0;
    int sign='+';
    int str[17];

    if(num<0){
        num=-num;
        sign='-';
        //sign indicator
    }
    for(;num!=1;count++){
        str[count]=num%2;
        num/=2;
        //Take the remainder and divide it by two
    }
    str[count]=1;//add the first digit 1
    count++;
    for(;count<16;count++){
        str[count]=0;//complete 0 to the rest digit
        //use 16 digit to represent
    }

    if(sign=='-'){
        for(int f=0;f<16;f++){
            if(str[f]==0){
                str[f]=1;
            }else{
                str[f]=0;
            }//inverse the str
        }
        for(int f=0;1;f++){
            if(str[f]==0){
                str[f]=1;
                break;
            }else{
                str[f]=0;
            }//add 1
        }
    }

    for(int f=15;f>=0;f--){
        printf("%d",str[f]);
    }//inverse print
    
}