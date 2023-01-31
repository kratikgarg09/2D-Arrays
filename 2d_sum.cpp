#include<iostream> 
using namespace std; 
void rowSum(int arr[][3],int m,int n){
    
    for (int i = 0; i < m; i++)
    {   
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            
            sum += arr[i][j];
        }
        cout<<sum << endl;
    }
    cout<<endl;
}

void columnSum(int arr[][3],int m,int n){
    
    for (int i = 0; i < n; i++)
    {   
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            
            sum += arr[j][i];
        }
        cout<<sum << endl;
    }
    cout<<endl;
}

int largestRowSum(int arr[][3],int m,int n){

    int max = INT_MIN;
    int rowIndex = -1;
    for (int i = 0; i < n; i++)
    {   
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            
            sum += arr[j][i];
        }
        if (max < sum)
        {
            max = sum;
            rowIndex = i;
        }

    }
    cout<<"The Maximum Sum is : "<< max<<endl << "And the row is ";
    return rowIndex + 1;
}

int main(){ 
    int arr[3][3] = {{1,2,3},{4,5,4},{2,7,8}};
    rowSum(arr,3,3);
    columnSum(arr,3,3);
    cout << largestRowSum(arr,3,3);
    return 0;
}