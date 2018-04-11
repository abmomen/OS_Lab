#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x;
    char s[110],s1[110];
    gets(s);
    n=strlen(s);
    for(int i=0;i<n;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            if(i%3==0)
                x=int(s[i])+3;
            else if(i%3==1)
                x=int(s[i])+7;
            else if(i%3==2)
                x=int(s[i])+10;
            while(x>122)
            {
                x=x-122+97-1;
            }
            s[i]=char(x);
        }
        else if(s[i]>='A'&&s[i]<='Z')
        {
            if(i%3==0)
                x=int(s[i])+3;
            else if(i%3==1)
                x=int(s[i])+7;
            else if(i%3==2)
                x=int(s[i])+10;
            while(x>90)
            {
                x=x-90+65-1;
            }
            s[i]=char(x);
        }
    }
    cout<<"The encrypted text: "<<s<<endl;
    for(int i=0;i<n;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            if(i%3==0)
                x=int(s[i])-3;
            else if(i%3==1)
                x=int(s[i])-7;
            else if(i%3==2)
                x=int(s[i])-10;
            while(x<97)
            {
                x=x+122-97+1;
            }
            s[i]=char(x);
        }
        else if(s[i]>='A'&&s[i]<='Z')
        {
            //x=int(s[i])+k;
            if(i%3==0)
                x=int(s[i])-3;
            else if(i%3==1)
                x=int(s[i])-7;
            else if(i%3==2)
                x=int(s[i])-10;
            while(x<65)
            {
                x=x+90-65+1;
            }
            s[i]=char(x);
        }
    }
    cout<<"The decrypted text: "<<s<<endl;
    return 0;
}

