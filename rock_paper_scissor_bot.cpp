#include <bits/stdc++.h> 
using namespace std;
int main()
{   
    int p,c,w,d,l,i;
    char x;
    w=d=l=0;
    while(i!=0)
    {
        cout<<"Enter the no. to Choose one:\n1-Rock\n2-Paper\n3-Scissor\n";    //here 1 represents rock 2 as paper and 3 as scissors
        cin>>p;
        c=rand()%3;
        if(c==p)
        {
            cout<<"\nIts a draw";
            d++;
        }
        else if((p==1&&c==2)||(p==2&&c==3)||(p==3)&&c==1)
        {
            cout<<"\nComputer wins !!!! :(";
            l++;
        }
        else
        {
            cout<<"\nYou won !!!!!! :)";
            w++;
        }
        cout<<"\nDo you wanna play again(y/n): ";
        cin>>x;
        if(x=='y'||x=='Y')
            i=1;
        else if(x=='n'||x=='N')
            i=0;
    }
    cout<<"\nWins: "<<w<<"\nLost: "<<l<<"\nDraws: "<<d;
    return 0;
}