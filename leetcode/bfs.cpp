class Solution {
public: 
	vector<int> bfstraversal(vector<int>&nums, int V)
	{
	vector<int> bfs;
	vector<int> visited(n+1 , -1);
	for(int i = 1 ; i<= V; i++)
	{
		// first priority is to check whether the node is visited or not
			if(!visited[i])
			{
				queue<int> q;
				q.push(i);
				vis[i]=1;
				// after pushing in queue we have to visit it
				while(!q.empty())
				{
					int node = q.front();
					q.pop();
					bfs.push_back(node);
					for(auto it : nums[node])
					{
						if(!visited[i]){
							q.push(it);
							visited[it]=1;
						}
					}
				}
			}
	}
	}
};