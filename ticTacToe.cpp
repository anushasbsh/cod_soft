#include<iostream>
using namespace std;

void print(char gboard[3][3])
{
    cout<<"  0  1  2"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<i<<"  ";
        for(int j=0;j<3;j++)
        {
            cout<<gboard[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool iswin(char gboard[3][3],char first)
{
    for(int i=0;i<3;i++)
    {
    if((gboard[i][0]==first && gboard[i][1]==first && gboard[i][2]==first) ||(gboard[0][i]==first && gboard[1][i]==first && gboard[2][i]==first))
    {
        return true;
    }
    }

    return(gboard[0][0]==first && gboard[1][1]==first && gboard[2][2]==first) || (gboard[0][2]==first && gboard[1][1]==first && gboard[2][0]==first);
}

bool isdraw(char gboard[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(gboard[i][j]==' ')
            {
                return false;
            }
        }
    }

    return true;
}

char player(char first)
{
    return (first=='X')?'O':'X';
}

int main()
{
    char gboard[3][3]= {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    char first = 'X';

    cout<<"Hello! Welcome to TIC-TAC-TOE Game -_-\n";

    while(true)
    {
        print(gboard);

        int r,c;

        cout<<first<<" , enter your move  ";
        cin>>r>>c;


        if(r<0 ||r>=3 || c<0 || c>=3 || gboard[r][c]!=' ')
        {
            cout<<"Invalid move!"<<endl;
        }
        gboard[r][c]=first;

        if(iswin(gboard,first))
        {
            print(gboard);
            cout<<first<<" wins!"<<endl;
            break;
        }

        if(isdraw(gboard))
        {
            print(gboard);
            cout<<"Match is Draw!"<<endl;
        }

        first = player(first);
    


    }

    return 0;


}