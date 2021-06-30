

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>



string ari(string s)
{
float n=strlen(s);
                                                                    /*printf("no of elements is %f\n",n);*/

    float c=0;
    for(int i=0;i<n;i++)
    {
        if(isalnum(s[i])!=0)
        {
            c=c+1;
        }
    }

                                                                    /* printf("mo of characters is %f",c);*/
    float a=0;
    for(int i=0;i<n;i++)
    {
        if (s[i]==' ')
        {
            a=a+1;
        }
    }
                                                                     /*printf("no of words is %f\n",a);*/
    float b=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='?'||s[i]=='.')
        {
            b=b+1;
        }
        else if(s[i]=='!')
        {
            b=b+1;
        }
    }
                                                                   /* printf("no of sentences is %f\n",b);*/


float k;
k=(4.71*c/a)+(0.5*a/b)-21.43;
                                                                    /*printf("k is %f\n",k);*/

string x;
if(k>13)
{x="Professor";}
if(k>12&&k<=13)
{x="College student";}
if(k>11&&k<=12)
{x="Twelfth grade";}
if(k>10&&k<=11)
{x="Eleventh Grade";}
if(k>9&&k<=10)
{x="Tenth Grade";}
if(k>8&&k<=9)
{x="Ninth Grade";}
if(k>7&&k<=8)
{x="Eighth Grade";}
if(k>6&&k<=7)
{x="Seventh Grade";}
if(k>5&&k<=6)
{x="Sixth Grade";}
if(k>4&&k<=5)
{x="Fifth Grade";}
if(k>3&&k<=4)
{x="Fourth Grade";}
if(k>2&&k<=3)
{x="Third Grade";}
if(k>1&&k<=2)
{x="First/Second Grade";}
if(k>0&&k<=1)
{x="Kindergarten";}
return x;
}
