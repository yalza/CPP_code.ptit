#include <bits/stdc++.h>
using namespace std;
int m,n;
struct Point
{
    int x;
    int y;
};
 
struct queueNode
{
    Point pt;  
    int dist; 
	};
 
bool isValid(int row, int col)
{
    return (row >= 0) && (row < m) &&
           (col >= 0) && (col < n);
}
 
int rowNum[] = {-1, 0, 0, 1};
int colNum[] = {0, -1, 1, 0};
int BFS(int mat[][1000], Point src, Point dest)
{
    if (!mat[src.x][src.y] || !mat[dest.x][dest.y])
        return -1;
 
    bool visited[m][n];
    memset(visited, false, sizeof visited);
    visited[src.x][src.y] = true;
    queue<queueNode> q;
    queueNode s = {src, 0};
    q.push(s); 

    while (!q.empty())
    {
        queueNode curr = q.front();
        Point pt = curr.pt;
 
        if (pt.x == dest.x && pt.y == dest.y)
            return curr.dist;
 
        q.pop();
 
        for (int i = 0; i < 4; i++)
        {
            int row = pt.x + rowNum[i];
            int col = pt.y + colNum[i];
         
            if (isValid(row, col) && mat[row][col] &&
               !visited[row][col])
            {
                visited[row][col] = true;
                queueNode Adjcell = { {row, col},
                                      curr.dist + 1 };
                q.push(Adjcell);
            }
        }
    }
 
    return -1;
}
 
int main()
{
    
 	int t;cin>>t;
 	while(t--){
 		int x1,y1,x2,y2;
 		cin>>m>>n>>x1>>y1>>x2>>y2;
 		int M[1000][1000];
 		for(int i=0;i<m;i++)for(int j=0;j<n;j++)cin>>M[i][j];
    Point source = {x1, y1};
    Point dest = {x2, y2};
 
    int dist = BFS(M, source, dest);
 
    cout<<dist<<endl;
 
 }
    return 0;
}
