#include<iostream> 
using namespace std; 

int m ,n;

bool isPresent(int arr[][4],int target,int m,int n){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
            
        }
        
    }
    return 0;
}

int main(){ 
   
    
    
    // cout<<"Please enter the size of array "<<endl;
    // cin>>m,n;
 
    int arr[3][4];

    for (int rows = 0; rows < 3; rows++)
    {
        for (int column = 0; column < 4; column++)
        {
            cout<<"Please enter element for "<<column + 1<<"th column of "<< rows + 1 <<"th row "<<endl;
            cin >> arr[rows][column];
        }
        
    }

    int target;
    cout<<"enter the target: ";
    cin>>target;

    if (isPresent(arr,target,m,n))
    {
        cout<<" Targert is Present ";
    }
    else{
        cout<<"Target is not found";
    }
 
    

    return 0;
}