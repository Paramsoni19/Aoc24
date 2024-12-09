#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<vector<int> >grid(1000);
    for(int i=0;i<1000;i++){
        while(1){
            char c;
            int a;
            cin>>a;
            c=cin.get();
            grid[i].push_back(a);
            if(c == '\n')break;
        }
    }
    int cnt=1000;
    for(int i=0;i<1000;i++){
        for(int j=0;j<grid[i].size()-1;j++){
            if(abs(grid[i][j]-grid[i][j+1])>3 || abs(grid[i][j]-grid[i][j+1])<1){
                cnt--;
                break;
            }
            if((grid[i][0]>grid[i][1] && grid[i][j]<grid[i][j+1])||(grid[i][0]<grid[i][1] && grid[i][j]>grid[i][j+1])){
                cnt--;
                break;
            }
        }
    }
    cout<<cnt;
return 0;
}