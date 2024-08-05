#include <iostream>
using namespace std;
string spaces[9]= {" "," "," "
                  ," "," "," "
                  ," "," "," "};
bool check();
void check_X();
void check_O();
void board();
void enter_x();
void enter_o();

int x,o;
int main()
{
	//tic tac toe game.

	board();
	for(int i=1; i<=9; i++)
	{
		enter_x();
		check_X();
		if(check())
		{
			exit(1);
		}
		board();
		
		enter_o();
		check_O();
        if(check())
		{
			exit(1);
		}
		board();
        
	}




}

void board()
{
	cout<<" "<<spaces[0]<<" | "<<spaces[1]<<" | "<< spaces[2]<<"\n";
	cout<<" --------- \n";
	cout<<" "<<spaces[3]<<" | "<<spaces[4]<<" | "<< spaces[5]<<"\n";
	cout<<" --------- \n";
	cout<<" "<<spaces[6]<<" | "<<spaces[7]<<" | "<< spaces[8]<<"\n";

}
bool check()
{
	while((spaces[0]=="O" && spaces[1]=="O" && spaces[2]=="O") || (spaces[0]=="O" && spaces[4]=="O" && spaces[8]=="O") || (spaces[0]=="O" && spaces[3]=="O" && spaces[6]=="O") || (spaces[1]=="O"  && spaces[4]=="O" && spaces[7]=="O") || (spaces[2]=="O" && spaces[5]=="O" && spaces[8]=="O") || (spaces[2]=="O" && spaces[4]=="O" && spaces[6]=="O") || (spaces[3]=="O" && spaces[4]=="O" && spaces[5]=="O") || (spaces[6]=="O" && spaces[7]=="O" && spaces[8]=="O"))
    {
        cout<<"O wins!!\n";
		break;
		return 1;
    }
    while((spaces[0]=="X" && spaces[1]=="X" && spaces[2]=="X") || (spaces[0]=="X" && spaces[4]=="X" && spaces[8]=="X") || (spaces[0]=="X" && spaces[3]=="X" && spaces[6]=="X") || (spaces[1]=="X"  && spaces[4]=="X" && spaces[7]=="X") || (spaces[2]=="X" && spaces[5]=="X" && spaces[8]=="X") || (spaces[2]=="X" && spaces[4]=="X" && spaces[6]=="X") || (spaces[3]=="X" && spaces[4]=="X" && spaces[5]=="X") || (spaces[6]=="X" && spaces[7]=="X" && spaces[8]=="X"))
    {
        cout<<"X wins!!\n";
		break;
		return 1;
    }
    
}
void check_X()
{
	
	if(spaces[x-1]!=" ")
	{
		cout<<"Enter again..\n";
        enter_x();
		spaces[x-1]="X";


	}
	else
	{
		spaces[x-1]="X";
	}

}
void check_O()
{

	if(spaces[o-1]!=" ")
	{
		cout<<"Enter again..\n";
        enter_o();
		spaces[o-1]="O";
	}
	else
	{
	    spaces[o-1]="O";
	}   
    
}
void enter_x()
{
    cout<<"Enter location for X: ";
	cin>>x;
    
}
void enter_o()
{
    cout<<"Enter location for O: ";
	cin>>o;
    
}