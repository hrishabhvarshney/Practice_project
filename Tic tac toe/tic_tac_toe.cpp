#include<iostream>
#include<cstdio>
#include<string.h>
#include<cstdlib>
#include<conio.h>
using namespace std;

int row;
int col;
bool draw;
char turn = 'X';
void display_board();
void player_chance();
bool game_over();
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};

int main()
{
    while (game_over())
    {
    display_board();
    player_chance();
    display_board();
    game_over();
    }
    if(turn == 'O' && draw == false)
       cout << "Player 1 win. Game over.";
    else if(turn == 'X'&& draw == false)
       cout << "Player 2 win. Game over.";
    else
       cout << "Game draw. it is over."<<endl;
    return 0;
}
bool game_over()
{
    int i, j;
    //either player win vertical
    for(int i = 0; i <3; i++)
    if (board[i][0] == board[i][1] && board[i][0] == board[i][2])
    return false;
    //either player win horizontal
    for(int i = 0; i <3; i++)
    if (board[0][i] == board[1][i] && board[0][i] == board[2][i])
    return false;
    //diagonal match
    if(board[0][0] == board [1][1] && board[1][1] == board[2][2] || board[0][2] == board [1][1] && board[1][1] == board[2][0])
    return false;
    // game continue.....
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
            if(board[i][j] != 'X' && board[i][j] != 'O') 
            {
                return true;
            }
        }
    }
    //draw conditon
    draw = true;
    return false;
}
void player_chance()
{   
    int choice;
    if(turn == 'X')
    cout<<"Player 1 Chance [X]";
    if(turn == 'O')
    cout<<"Player 2 Chance [O]";
    cin>>choice;
    switch (choice)
    {
    case 1:
        row=0; 
        col=0; 
        break;
    case 2:
        row=0; 
        col=1; 
        break;
    case 3:
        row=0; 
        col=2; 
        break;
    case 4:
        row=1; 
        col=0; 
        break;
    case 5:
        row=1; 
        col=1; 
        break;
    case 6:
        row=1; 
        col=2; 
        break;
    case 7:
        row=2; 
        col=0; 
        break;
    case 8:
        row=2; 
        col=1; 
        break;
    case 9:
        row=2; 
        col=2; 
        break;
    default:
        cout<<"Wrong choice";
        break;
    }
    if (turn == 'X')
    {
        board[row][col] = 'X';
        turn = 'O';
    }
    else if(turn == 'O')
    {
        board[row][col] = 'O';
        turn = 'X';
    }
}
void display_board()
{
cout<<"\n\n tic tac toe \n\n";
cout<<"Player 1[x]  vs  Player 2[o]"<<endl <<endl;
cout<<endl;
cout<<"    |    |    "<<endl;
cout<<" "<<board[0] [0]<<"  | "<<board[0] [1]<<"  |  "<<board[0] [2]  <<endl;
cout<<"____|____|____"<<endl;
cout<<"    |    |    "<<endl;
cout<<" "<<board[1] [0]<<"  | "<<board[1] [1]<<"  |  "<<board[1] [2]  <<endl;
cout<<"____|____|____"<<endl;
cout<<"    |    |    "<<endl;
cout<<" "<<board[2] [0]<<"  | "<<board[2] [1]<<"  |  "<<board[2] [2]  <<endl;
cout<<"    |    |    "<<endl;
}
