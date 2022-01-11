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
        c=rand()%3;                 //here for computer 0 represents rock, 1 paper and 2 scissor
        if(c==0)
         cout<<"\nComputer choose Rock.\n";
        else if(c==1)
        cout<<"\nComputer choose Paper.\n";
        else
        cout<<"\nComputer choose Scissor.\n";

        if((c==0&&p==1)||(c==1&&p==2)||(c==2&&p==3))
        {
            cout<<"\nIts a draw\n";
            d++;
        }
        else if((p==1&&c==1)||(p==2&&c==2)||(p==3)&&c==0)
        {
            cout<<"\nComputer wins !!!! :(\n";
            l++;
        }
        else
        {
            cout<<"\nYou won !!!!!! :)\n";
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
