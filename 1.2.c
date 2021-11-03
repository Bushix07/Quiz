/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
printf("Hi, my name is Bushix and this is a test!\n");
sleep(1);
printf("I need to gather information about you before we start the test.\n");
sleep(1);
char name[100];
printf("Please enter your name:");
scanf("%s",name);
char lname[100];
printf("Please enter your last name:");
scanf("%s",lname);
char phone[100];
printf("Please enter your phone number:");
scanf("%s",phone);
sleep(1);
printf("Good job, now lets begin the test!\n");
sleep(1);
printf("This test is about math so be ready!\n");
sleep(1);
int first;
printf("First question!\n");
printf("What is 5x4\n");
do
{
printf("5x4=");
scanf("%d",&first);
if (first==20){
printf("Congratulations! you are correct.\n");
printf("next question!\n");
}
else{
printf("You were wrong! Try again!\n");
sleep(1);
}

}
while(first!=20);
sleep(1);
int second;
printf("Second question!\n");
printf("What is 8x7\n");
do
{
printf("8x7=");
scanf("%d",&second);
if (second==56){
printf("Congratulations! you are correct.\n");
printf("next question!\n");
}
else{
printf("You were wrong! Try again!\n");
sleep(1);
}

}
while(second!=56);
sleep(1);
int third;
printf("Third question!\n");
printf("What is 7x5\n");
do
{
printf("7x5=");
scanf("%d",&third);
if (third==35){
printf("Congratulations! you are correct.\n");
}
else{
printf("You were wrong!");
sleep(1);
}

}
while(third!=35);
sleep(1);
printf("We are done!\n");
sleep(1);
printf("Time to see your information!\n");
sleep(1);
printf("Your name is:");
printf("%s\n",name);
sleep(1);
printf("Your last name is:");
printf("%s\n",lname);
sleep(1);
printf("Your name is:");
printf("%s\n",phone);
    return 0;
}