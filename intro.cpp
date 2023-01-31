#include<iostream> 
using namespace std; 

void display(int arr[][4],int n,int m){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(){ 
    // Constructing 2D array of 3 by 3 size

    // int m,n;
    // cout<<"Please enter the size of array or matrix"<<endl;
    // cin>>n>>m;
    // int arr[m][n];

    int arr1[3][4]= {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[2][4] = {{1,2,3,4},{11,22,33,44}};

/*
    //taking row wise input 
    for (int rows = 0; rows < n; rows++)
    {
        for (int column = 0; column < m; column++)
        {
            cout<<"Please enter element for "<<j+1<<"th column of "<<i+1<<"th row "<<endl;
            cin >> arr[rows][column];
        }
        
    }


    //taking row wise input 
    for (int column = 0; column < m; column++) //here m = total number of column
    {
        for (int rows = 0; rows < n; rows++) // and n = total number of rows
        {
            cin >> arr[rows][column];
        }
        
    }
*/

 /*   //Printing the array

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"the element of "<<j+1<<"th column of "<<i+1<<"th row is : "<< arr[i][j] <<endl;
            
        }
        
    } */

    //Printing the array in matrix form

    display(arr1,3,4);
    display(arr2,2,5);

    return 0;
}