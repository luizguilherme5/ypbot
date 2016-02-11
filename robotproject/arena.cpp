/* 
 * File:   arena.cpp
 * Author: LuizGuilherme
 *
 * Created on 9 de Fevereiro de 2016, 17:26
 */

#include <iostream>

using namespace std;    //Used for a standard namespace

int main() {
    int matriz[10][10] =   {{0,0,0,1,1,1,1,0,0,0},
                            {0,1,1,1,1,1,1,1,1,0},
                            {0,1,1,1,1,1,1,1,1,0},
                            {1,1,1,1,1,1,1,1,1,1},
                            {1,1,1,1,1,1,1,1,1,1},
                            {1,1,1,1,1,1,1,1,1,1},
                            {1,1,1,1,1,1,1,1,1,1},
                            {0,1,1,1,1,1,1,1,1,0},
                            {0,1,1,1,1,1,1,1,1,0},
                            {0,0,0,1,1,1,1,0,0,0}};
    
    for (int i=0;i<10;i++)
        {
            for (int j=0;j<10;j++)
                {
                cout << matriz [i][j] << " ";    
                }
    cout << endl;
        }
    return 0; 
}
