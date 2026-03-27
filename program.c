/*program 1
// program to calculate area of triangle using heron's formula
#include<stdio.h>

int  main()
{
    int a,b,c,S,A;
    printf("enter the three sides of triangle:");
    scanf("%d %d %d",&a,&b,&c);
    S=a+b+c/3;
    printf("value of S :");
    scanf("%d",&S);
    A=S*(S-a)*(S-b)*(S-c);
    printf("area of the triangle is %d",A)
    return 0;
}/

program 2
// WAP TAKING A INTTEGER INPUT AND TELL IF IT IS EVEN OR ODD
#include<stdio.h>
int main(){
int a;
printf("enter a number:);
scanf("%d",&a);
if(a%2=0)
{
    printf("%d is a even number",a);
}
else
    printf("%d is odd number",a);
    return0;}/
    Program 3  WAP TO CONVERT FAHRENEIT SCALE TO CELSIUS SCALE AND VICE VERSA

    PROGRAM 4 WAP TO CHECK WHETHER THE ENTERED YEAR IS LEAP YEAR OR NOT
    if(year%4==0;year%100!=0;year%400==0)

    PROGRAM 5 WAP TO SWAP TWO NUMBERS WITHOUT USING THIRD VARIABLE*/
    /*#include<stdio.h>
    int main(){
    int a,b;
    printf("enter two numbers :");
    scanf("%d %d", a,b);
    a=a+b;
    b=a-b ;
    printf(the swapped numbers are%d %d",a,b);
    return0;
    }

    PROGRAM 6 WAP TO SWAP TWO NUMBERS USING THIRD VARIABLE
    #include<stdio.h>
    int main(){
    int a,b ;
    printf("enter two numbers :");
    scanf("%d %d", &a,&b);
    int c =6 ;
    b=c;
    a=b;
    c=a;
    printf("swapped values are %d %d",a ,b);
    return0;

    PROGRAM 7 WAP TO FIND THE GREATEST OF 3 NUMBERS USING NESTED IF ELSE

#include <stdio.h>

int main()
{
int a,b,c;
printf("enter three numbers:");
scanf("%d %d %d",&a,&b,&c);
if(a>b){
    if(a>c){
        printf("%d is the greatest number",a);
    }
        else{
        printf("%d is the greatest number",c);
        }

}
else {
printf("%d is the greatest number",b);

}
return 0;
}
PROGRAM 8 WAP TO CREATE A SIMPLE CALCULATOR USING SWITCH CASE STATEMENT

PROGRAM 9 WAP TO FIND SUM OF ALL NATURAL NUMBERS FROM 1 TO N
#include<stdio.h>
int main(){
int n;
printf("enter a number");
scanf("%d",n);
int sum=0;
for(int i=0;i<=n;i++)
{
sum=sum+i;}
printf("%d\n",sum);
return0;}

PROGRAM 10 wap to print a table of user entered number

#include <stdio.h>

int main()
{
    int n;
     printf("enter a number");
     scanf("%d",&n);
     for(int i=1;i<=10;i++){
         printf("%d\n",n*i);
     }

    return 0;
}





















