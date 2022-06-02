// Wap to print 2d array.

#include <iostream>
using namespace std;

int main()
{
    int arr[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int m=0;m<2;m++){
        for(int n=0;n<3;n++){
            cout<<arr[m][n]<<" "; 
        }
        cout<<endl;
    }
}