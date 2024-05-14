
// BFS - queue - danh sach canh 
#include<bits/stdc++.h>
using namespace std;

int n,c, a[1000][1000];
int u;
bool chuaxet[1000]; 
int m = 0; 
void init(){
	for(int k = 1; k<=c; k++){
		int i,j; cin >> i >> j;
		a[i][j] = 1;
		a[j][i] = 1; 
	} 
	for(int i=1; i<=n; i++){
		chuaxet[i] = true; 
	} 
	cin >> u; 
} 

void BFS(int u){
	queue<int> qe; 
	qe.push(u);
	cout << u << " "; 
	chuaxet[u] = false;
	while(!qe.empty()){
		int t = qe.front();
		qe.pop(); 
		for(int i=1; i<=n; i++){
			if(chuaxet[i] && a[t][i]){
				chuaxet[i] = false; 
				qe.push(i); 
				cout << i << " "; 
			} 
		} 
	} 
} 

int main(){
	cout << "git conflict" << endl;
} 

/*

*input:
13 24
1 2
1 3
1 4
2 3
2 4
2 6
3 4
3 5
4 7
5 6
5 7
5 8
5 12
6 7
6 12
7 8
8 12
9 10
9 11
9 13
10 11
10 12
10 13
11 13
1

*output:
1 2 3 4 6 5 7 12 8 10 9 11 13 

*/



