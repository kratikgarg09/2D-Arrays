#include<iostream> 
#include<vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> &arr, int nRows, int mCols)
{
    vector<int> ans; 
    
    for(int col = 0; col < mCols; col++){
        
        if( col&1){
            
            // odd -> bottom to top
            
            for(int rows = nRows - 1; rows >= 0; rows--){
                
                ans.push_back(arr[rows][col]);
                
            }
            
        }
        else{
            
            // even or 0 -> top to bottom
            
            for(int rows = 0; rows < nRows; rows++){
                
                ans.push_back(arr[rows][col]);
                
            }
            
        }
    }
    return ans;
}
void printArray(vector<int> &arr){
    int size = arr.size();
    cout<<" { ";
    for (int i = 0; i < size; i++)
    {   
        cout <<arr[i] <<" ";
        
    }  
    cout<<"}";
    cout<<endl;
}
int main(){ 
    vector<vector<int>> matrix;
    vector<int> v;
    matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    v = wavePrint(matrix,3,3);

    printArray(v);
    return 0;
}