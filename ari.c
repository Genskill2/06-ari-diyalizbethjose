#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>

string ari (string s)
{
int words=0,sentence=0,character=0;
int ch;
for(int i=0;s[i]!='\0';i++)
{
if(s[i]=='\n'||s[i]=='?'||s[i]=='!')
{
sentence++;
words++;
}
else 
{
if(s[i]==' '||s[i]=='\t')
{
words++;
character++;
}
else
character++;
}

}
ch= (4.71*(character/words)) + (.5*(words/sentence)) - 21.43;
for(int j=0;j++)
{
if(ch>=j&&ch<(j+1))
{
ch=(j+1);
break;
}
}
if(ch==1)
return("Kindergarten");
else if(ch==2)
return("First/Second Grade");
else if(ch==3)
return("Third Grade");
else if(ch==4)
return("Fourth Grade");
else if(ch==5)
return("Fifth Grade");
else if(ch==6)
return("Sixth Grade");
else if(ch==7)
return("Seventh Grade");
else if(ch==8)
return("Eighth Grade");
else if(ch==9)
return("Ninth Grade");
else if(ch==10)
return("Tenth Grade");
else if(ch==11)
return("Eleventh Grade");
else if(ch==12)
return("Twelfth grade");
else if(ch==13)
return("College student");
else if(ch==14)
return("Professor");
}

