#include <stdio.h>
#include <stdlib.h>

char Cells[10]={'0','1','2','3','4','5','6','7','8','9'};       //made it of 10 cells not 9 to be more user friendly
int Player=1,Choice=0;
void DrawBoard(void);
void MarkBoard(char mark);
int CheckWinner(void);

int main(void)
{
    char mark;
    int check=-1;
    do
    {
        DrawBoard();
        Player=(Player%2)?1:2;
        mark=(Player==1)? 'X':'O';
        printf("\n\tPlayer %d: Choose the place for %c\t",Player,mark);
        scanf("%i",&Choice);
        MarkBoard(mark);
        DrawBoard();
        check=CheckWinner();
        Player++;
    }while (check==-1);

    if (check==0)
        printf("\n\tCongratulations! It's DRAW");
    else
        printf("\n\tHEY, Player %i is the winner\n\n",--Player);
    
    printf("\n\nPress any button to terminate");
    getch();    
    return 0;
}

/****Draw the board***/
void DrawBoard(void)
{
    system("cls");
    printf("\t\t TIC TAC TOE\n\n");
    printf("\nPlayer 1 takes X and Player 2 with O\n\n");
    int i;
    for (i=1;i<=3;i++)
        printf("\t%c\t|", Cells[i]);
    printf("\n-------------------------------------------------\n");
    for (i=4;i<=6;i++)
        printf("\t%c\t|",Cells[i]);
    printf("\n-------------------------------------------------\n");
    for (i=7;i<=9;i++)
        printf("\t%c\t|",Cells[i]);
    printf("\n-------------------------------------------------\n");
}

/*********
Check for winner
Match=1,Draw=0,NotYet=-1
********/
int CheckWinner(void)
{
    int ReturnValue =-1;
    if (Cells[1]==Cells[5]&&Cells[5]==Cells[9])
        ReturnValue =1;
    else if (Cells[3]==Cells[5]&&Cells[5]==Cells[7])
        ReturnValue =1;
    else if (Cells[1]==Cells[2]&&Cells[2]==Cells[3])
        ReturnValue =1;
    else if (Cells[4]==Cells[5]&&Cells[5]==Cells[6])
        ReturnValue =1;
    else if (Cells[7]==Cells[8]&&Cells[8]==Cells[9])
        ReturnValue =1;
    else if (Cells[1]==Cells[4]&&Cells[4]==Cells[7])
        ReturnValue =1;
    else if (Cells[2]==Cells[5]&&Cells[5]==Cells[8])
        ReturnValue =1;
    else if (Cells[3]==Cells[6]&&Cells[6]==Cells[9])
        ReturnValue =1;
    else if (Cells[1]!='1'&&Cells[2]!='2'&&Cells[3]!='3'&&Cells[4]!='4'&&Cells[5]!='5'&&Cells[6]!='6'&&Cells[7]!='7'&&Cells[8]!='8'&&Cells[9]!='9')
        ReturnValue=0;
    else
        ReturnValue=-1;
    return ReturnValue;
}

/*******
Mark the Board
******/
void MarkBoard(char mark)
{
    if (Choice==1&&Cells[1]=='1')
        Cells[1]=mark;
    else if (Choice==2&&Cells[2]=='2')
        Cells[2]=mark;
    else if (Choice==3&&Cells[3]=='3')
        Cells[3]=mark;
    else if (Choice==4&&Cells[4]=='4')
        Cells[4]=mark;
    else if (Choice==5&&Cells[5]=='5')
        Cells[5]=mark;
    else if (Choice==6&&Cells[6]=='6')
        Cells[6]=mark;
    else if (Choice==7&&Cells[7]=='7')
        Cells[7]=mark;
    else if (Choice==8&&Cells[8]=='8')
        Cells[8]=mark;
    else if (Choice==9&&Cells[9]=='9')
        Cells[9]=mark;
    else
        {
            printf("\nInvalid Move\n\nHit ENTER & Try again");
            Player--;
            getch();
        }
}
