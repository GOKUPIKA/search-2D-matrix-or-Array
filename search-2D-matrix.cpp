#include<bits/stdc++.h>
using namespace std;

// OPTIMIZE APPROACH
bool flagCheck(vector<vector<int>>& matrix, int target){
    int row=matrix.size();
    int col=matrix[0].size();
    bool flag=false;

    int ir=-1;
    //checking if first value of 2D array is our value or not
    if(matrix[0][0]==target){
        flag=true;
        return flag;
    }

    // iterating over the last column to check the row in which our value lie
    for(int i=0;i<row;i++){
        if(matrix[i][col-1]>=target){
           ir=i;
           break; 
        }
    }

    if(ir==-1){
        return flag;
    }
    else{
        for(int i=0;i<col;i++){
            if(matrix[ir][i]==target){
                flag=true;
                return flag;
            }
        }
    }
    return flag;
    

}

// BRUTE FORCE APPROACH
bool check(vector<vector<int>>& vect, int k){
    bool flag=false;
    for(int i=0;i<vect.size();i++){
        for(int j=0;j<vect[i].size();j++){
            if(vect[i][j]==k){
                flag=true;
                return flag;
            }
        }
    }
    return flag;
}

int main()
{
    int k=99;

    // initializing the vector
    vector<vector<int>> vect
    {
        {1, 2, 3, 7},
        {4, 5, 6, 7},
        {7, 8, 9, 7}
    };

    cout<<"using brut force approach:  "<<check(vect,k)<<endl;
    cout<<endl;
    cout<<"using optimize approach:  "<<flagCheck(vect,k);

}