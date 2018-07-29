#include<stdio.h>
int d=0,score=0,c=0;
void correct(int n)
{
    if (n==1)
    {
        printf("answer is correct\n");
        c++;
        score += 2;
    }
}
void wrong(int n)
{
    if(n==0)
    {
        printf("answer is wrong\n");
        d++;
        score -= 1;
    }
}
int main()
{
int n,i;
printf("In this quiz you will get 2 points for each correct ans n -1 for each wrong ans\n");
{
printf("1.The World Largest desert is ?\n 1.Thar\t 2.Kalahari\n 3.Sahara\t 4.Sonoran\n");
scanf("%d",&n);
if (n==3)
    correct(1);
else
    wrong(0);
printf("2.Where did India play its 1st one day international match?\n 1.Lords\t 2.Headingley\n 3.Taunton\t 4.The Oval\n");
scanf("%d",&n);
if (n==2)
    correct(1);
else
    wrong(0);
printf("3.The only Indian cricketer of the country to feature in the top 10 of the ICC Player Ranking for ODIs on May 2017?\n 1.Virat Kohli\t 2.Amit Mishra\n 3.Shikhar Dhawan\t 4.Rohit Sharma\n");
scanf("%d",&n);
if (n==1)
    correct(1);
else
    wrong(0);
printf("4.Which crop is sown on the largest area in India?\n 1.Rice\t 2.Wheat\n 3.Sugarcane\t 4.Maize\n");
scanf("%d",&n);
if (n==1)
    correct(1);
else
    wrong(0);
printf("5. Name the largest planet in the solar system?\n 1.Jupitar\t 2.Earth\n 3.Neptune\t 4.Uranus\n");
scanf("%d",&n);
if ( n==1 )
    correct(1);
else
    wrong(0);
printf("6.Which is the Land of the Rising Sun?\n 1.Japan\t 2.Australia\n 3.China\t 4.Taiwan\n");
scanf("%d",&n);
if (n==1)
    correct(1);
else
    wrong(0);
printf("7.The mineral in which India depends largely on imports is \n 1.Iron Ore\t 2.Bauxite\n 3.Mica\t 4.Mercury\n");
scanf("%d",&n);
if (n==4)
    correct(1);
else
    wrong(0);
printf("8.Sea route to India was discovered by\n 1.Columbus\t 2.Amundsen\n 3.Vasco–da–Gama\t 4.William Bentinck\n");
scanf("%d",&n);
if (n==3)
    correct(1);
else
    wrong(0);
printf("9.Which is considered as the biggest port of India?\n 1.Kolkata\t 2.Cochin\n 3.Chennai\t 4.Mumbai\n");
scanf("%d",&n);
if (n==4)
    correct(1);
else
    wrong(0);
printf("10.The language spoken by the people by Pakistan is ?\n 1.Hindi\t 2.Palauan\n 3.Sindhi\t4.Nauruan\n");
scanf("%d",&n);
if (n==3)
    correct(1);
else
    wrong(0);
printf("Your score is %d\ntotal correct ans=%d \ntotal incorrect ans=%d\n",score,c,d);
}
return 0;
}
