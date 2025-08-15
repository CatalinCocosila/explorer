#include <fstream>
#include <vector>
using namespace std;

int main(){
ifstream fin("roboti.in");
ofstream fout("roboti.out");
	int n,m;
	fin>>n>>m;
	vector<string>grid(n);
	for(int i=0;i<n;i++){
		fin>>grid[i];
	}
	for(int pas=0;pas<m;pas++){
        vector<string>newGrid(n,string(n,'.'));
        vector<vector<int>>count(n,vector<int>(n,0));
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(grid[i][j]!='.'){
					char robot=grid[i][j];
					int newI=i,newJ=j;
					char newRobot=robot;
					if(robot=='U'){
						newI=i-1;
						if(newI<0){
							newI=i+1;
							newRobot='D';
						}
					}
					else if(robot=='D'){
						newI=i+1;
						if(newI>=n){
							newI=i-1;
							newRobot='U';
						}
				}
					else if(robot=='L'){
						newJ=j-1;
						if(newJ<0){
							newJ=j+1;
							newRobot='R';
						}
					}
					else if(robot=='R'){
						newJ=j+1;
						if(newJ>=n){
							newJ=j-1;
							newRobot='L';
						}
				}
					count[newI][newJ]++;
					newGrid[newI][newJ]=newRobot;
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(count[i][j]>1){
					newGrid[i][j]='.';
				}
			}
		}
		grid=newGrid;
	}
	int robot_cnt=0;
	for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(grid[i][j]!='.'){
					robot_cnt++;
				}
			}
	}
	fout<<robot_cnt<<endl;
	for(int i=0;i<n;i++){
		fout<<grid[i]<<endl;
	}
	fin.close();
	fout.close();
	return 0;
}