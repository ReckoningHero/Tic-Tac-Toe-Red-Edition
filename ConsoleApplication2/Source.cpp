#include<iostream>
#include<cstdlib>
using namespace std;




char square[10]={'0','1','2','3','4','5','6','7','8','9'};
void gameboard();
int win();

void gameboard()
{


    cout<<"\t\tTic Tac Toe\t\t\n\n";
    cout<<"PLAYER 1(X)  ,  PLAYER 2(O)\n\n";
    cout<<square[1]<<"|"<<square[2]<<"|"<<square[3]<<endl;
    cout<<"-----"<<endl;
    cout<<square[4]<<"|"<<square[5]<<"|"<<square[6]<<endl;
    cout<<"-----"<<endl;
    cout<<square[7]<<"|"<<square[8]<<"|"<<square[9]<<endl;


}

int win()
{
    if(square[1]==square[2]&&square[2]==square[3])
    return 1;

    else if(square[4]==square[5]&&square[5]==square[6])
    return 1;

    else if(square[7]==square[8]&&square[8]==square[9])
    return 1;

    else if(square[1]==square[4]&&square[4]==square[7])
    return 1;

    else if(square[2]==square[5]&&square[5]==square[8])
    return 1;

    else if(square[3]==square[6]&&square[6]==square[9])
    return 1;

    else if(square[1]==square[5]&&square[5]==square[9])
    return 1;

    else if(square[3]==square[5]&&square[5]==square[7])
    return 1;

   else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4'&&square[5] != '5'
    && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
    return 0;
    

else
 return -1;

}

int main()
{
   system("color 4c");
   char playagain='y';
   while(playagain=='y')
   {
    cout<<"Welcome to Tic Tac Toe!!!\n\n\n"<<endl;
    int player=1;
    int i,choice;
    char mark;

    do
    {

     gameboard();
     player=(player%2)?1:2;
     cout<<"Player "<<player<<" enter a number: ";
     cin>>choice;
     mark=(player==1)?'X':'O';

     if(choice == 1 && square[1]=='1')
       square[1]=mark;

     else if (choice == 2 && square[2] == '2')

			square[2] = mark;
		else if (choice == 3 && square[3] == '3')

			square[3] = mark;
		else if (choice == 4 && square[4] == '4')

			square[4] = mark;
		else if (choice == 5 && square[5] == '5')

			square[5] = mark;
		else if (choice == 6 && square[6] == '6')

			square[6] = mark;
		else if (choice == 7 && square[7] == '7')

			square[7] = mark;
		else if (choice == 8 && square[8] == '8')

			square[8] = mark;
		else if (choice == 9 && square[9] == '9')

			square[9] = mark;
        else
        {
            cout<<"\nINVALID MOVE \n\n";
            player--;

        }
        i=win();
        player++;
    }while(i==-1);
    gameboard();
    if(i==1)
    cout<<"Player "<<--player<<" wins";
    if(i==0)
    cout<<"Game is a draw.";



cout<<"\n\nWanna play again(y/n)?:";
cin>>playagain;
cout<<endl;

if(playagain=='y')
  {
      cout<<"You choice to play again\n\n";
  }
  else if(playagain=='n')
  {
      cout<<"You choice not to play again\n\n";
      system("pause");
  }
else
{
    cout<<"You didnt put an valid character so i will take it like(n),so the program will close.\n\n";
    system("pause");
}

for(int c=0; c<50; c++)
{
        cout<<"****";
}
        cout<<endl;

    square[1] = '1';
    square[2] = '2';
    square[3] = '3';
    square[4] = '4';
    square[5] = '5';
    square[6] = '6';
    square[7] = '7';
    square[8] = '8';
    square[9] = '9';
}
}



