#include <iostream>

using namespace std;

int** add_matrix(int** m1,int** m2)
{

    return m1;
}

int main()
{
    int n,m;
    cin >>n>>m;
    int matrix1[n][m];
    int matrix2[n][m];
    int matrix3[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >>matrix1[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >>matrix2[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
    return 0;
}
