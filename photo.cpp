#include <bits/stdc++.h>


using namespace std;

int main()
{
    int linhas, colunas;
    cin >> linhas >> colunas;
    char mat[linhas][colunas];
    bool is_black = false;
    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            cin >> mat[i][j];
            if(mat[i][j] != 'B' && mat[i][j] != 'W' && mat[i][j] != 'G')
                is_black = true;
        }
    }
    if(is_black)
        cout << "#Color" << endl;
    else
        cout << "#Black&White" << endl;
}