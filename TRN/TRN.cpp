#include <iostream>

using namespace std;

int main()
{
int arr[200][200];
int m,n;

cin >> m >> n;

for(int i=0; i<m; i++)
{
for(int j=0; j<n; j++)
{
cin >>arr[i][j];
}
}

for(int i=0; i<n; i++)
{
for(int j=0; j<m; j++)
{
cout << arr[j][i] << " ";
}
cout << "\n";

}
    return 0;
}
