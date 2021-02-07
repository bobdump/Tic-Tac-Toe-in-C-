#include <iostream>
using namespace std;
char matrix[3][3]= {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char player= 'X';
int n=0;

void Draw ()
{   
        
    cout << "Tic Tac Toe  new_edition 2.7.21  " << endl;
    for(int i =0; i < 3; i++)
    {
            
        for(int j =0 ; j < 3 ; j++)
        {
            cout << matrix[i][j] << " ";
        }
        
        cout << endl;
    }


}


void Input ()

{
    int a ;
    cout << " Press the number: ";
    cin >> a;

    
    if (a==1)

    {
        if(matrix[0][0]== '1')
        
            {
                 matrix[0][0] = player;
            }        
        
        else 
            cout << "Field is already in use  try again!" << endl;

    }   
    else if (a == 2)
    {    
        if( matrix[0][1] =='2')
        
        {
            matrix[0][1] = player;
        }

        else 
            cout << "Field is already in use  try again!" << endl;

    }
    
    else if (a == 3)
    {
        if (matrix[0][2] == '3')    
            {
                matrix[0][2] = player;
            }

        else 
              cout << "Field is already in use  try again!" << endl;
    }
    else if (a == 4)
    { 
        if (matrix[1][0] =='4' )  
        {
            matrix[1][0] = player;
        }
        else
        {
              cout << "Field is already in use  try again!" << endl;
        }
        
    }
    else if (a == 5)

    {   if (matrix[1][1] =='5')   
        {
              matrix[1][1] = player;
        }
        else
        {
              cout << "Field is already in use  try again!" << endl;
        }
        
    }
    else if (a == 6)
    {
        if ( matrix[1][2] == '6' )
        
        {
            matrix[1][2] = player;
    
        }
        else
        {
            cout << "Field is already in use  try again!" << endl;

        }
        

    }
    else if (a == 7)
    {
        if (matrix[2][0] == '7')    
        {
            matrix[2][0] = player;
        }

        else
        {
            cout << "Field is already in use  try again!" << endl;
        }
        
    }
    else if (a == 8)
    {
        if (matrix[2][1]=='8')
            matrix[2][1] = player;

        else
        {
            cout << "Field is already in use  try again!" << endl;
        }
        
    }
    else if (a == 9)
    {
        if( matrix[2][2] == '9')
            matrix[2][2] = player;   

        else
        {
            cout << "Field is already in use  try again!" << endl;        }
        
        }
    }

void Changeplayer()
{
    if (player == 'X')

        player = 'O';
    
    else
        player ='X';
}


char Win()
{
    // First Player

    if (matrix[0][0] =='X' && matrix[0][1] == 'X' && matrix [0][2] == 'X')
            return 0;
        
    
    else if (matrix[1][0] =='X' && matrix[1][1] == 'X' && matrix [1][2] == 'X')
            return 'X';

    else if (matrix[2][0] =='X' && matrix[2][1] == 'X' && matrix [2][2] == 'X')
           return 'X';
    
    else if (matrix[0][0] =='X' && matrix[1][0] == 'X' && matrix [2][0] == 'X')
           return 'X';

    else if (matrix[0][1] =='X' && matrix[1][1] == 'X' && matrix [2][1] == 'X')
           return 'X';
    
    else if (matrix[0][2] =='X' && matrix[1][2] == 'X' && matrix [2][2] == 'X')
           return 'X';
        
    else if (matrix[0][0] =='X' && matrix[1][1] == 'X' && matrix [2][2] == 'X')
           return 'X';

    else if (matrix[2][0] =='X' && matrix[1][1] == 'X' && matrix [0][2] == 'X')
           return 'X';

//Second Player

    if (matrix[0][0] =='O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
            return 'O';
    
    else if (matrix[1][0] =='O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
            return 'O';

    else if (matrix[2][0] =='O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
            return 'O';
    
    else if (matrix[0][0] =='O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
            return 'O';

    else if (matrix[0][1] =='O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
            return 'O';
    
    else if (matrix[0][2] =='O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
            return 'O';
        
    else if (matrix[0][0] =='O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
            return 'O';

    else if (matrix[2][0] =='O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
            return 'O';

return 0;

}

int main ()
{
  

    while(1)
    {
        n++;      
        Draw();
        
        Input();
        
        Changeplayer();
        
        if (Win() == 'X')
        {
            cout << "THE PLAYER OF X WON" << endl;
                break;
        }
        else if(Win() == 'O')
        {
            cout << "THE PLAYER OF O WON" << endl;
            break;
        }
    
        else if(Win() == 0 && n==9)
        {
            cout << "It`s draw" <<endl;
            break;
        }
    }           

    system("pause");



    
    
    
    return 0;
}
