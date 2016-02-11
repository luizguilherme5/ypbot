/* 
 * File:   arena.cpp
 * Authors: Cauê Mateus and Luiz Guilherme
 *
 * Created on 9 de Fevereiro de 2016, 17:26
 */

#include <iostream>
//#include <array>
//#include <iomanip>
// This are the future libraries to be used

using namespace std;    //Used for a standard namespace

void printarena (int matrix [18][18]) //Function to print a default arena (can be bigger than 18x18)
    {
    for (int i=0;i<18;i++)
        {
            for (int j=0;j<18;j++)
                {
					if(matrix[i][j]==1)
						cout << matrix [i][j] << " ";   
					else
					{
						cout << "  ";
					} 
                }
    cout << endl;
        }
}

//void initial //Function to determine the initial place of the robot(s) and the conditions of the arena
//void swapvalues //Function to change coordinates in the matrix
//void moveup //Function to move the robot forward
//void movedown //Function to move the robot backward
//void moveleft //Function to move the robot left
//void moveright //Function to move the robot right

class Moving //I don't know how the class thing work very well, but only work if this is active, so keep it
{
    public:
        Moving();
        void printarena (int [18][18]);
};

int main() {
    int matrix[18][18] =   {{2,2,2,2,2,2,1,1,1,1,1,1,2,2,2,2,2,2},
                            {2,2,2,2,1,1,1,0,0,0,0,1,1,1,2,2,2,2},
                            {2,2,2,1,1,0,0,0,0,0,0,0,0,1,1,2,2,2},
                            {2,2,1,1,0,0,0,0,0,0,0,0,0,0,1,1,2,2},
                            {2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2},
                            {2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2},
                            {1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
                            {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                            {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                            {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                            {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                            {1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
                            {2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2},
                            {2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,2},
                            {2,2,1,1,0,0,0,0,0,0,0,0,0,0,1,1,2,2},
                            {2,2,2,1,1,0,0,0,0,0,0,0,0,1,1,2,2,2},
                            {2,2,2,2,1,1,1,0,0,0,0,1,1,1,2,2,2,2},
                            {2,2,2,2,2,2,1,1,1,1,1,1,2,2,2,2,2,2}};
    printarena(matrix);
    return 0;
    }
