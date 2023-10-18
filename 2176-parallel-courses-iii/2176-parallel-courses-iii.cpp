class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {

        /*
        Steps for Topological Sort
        1. Calculate the indegree for each node
        2. push into the queue whose indegree is zero
        3. pop element one by one from queue and decrease the indegree of its neighbors.
        4. update the maxtime taken to complete that node(course).
            if(indegree == 0)
                push that neighbor into the queue 
        */

        //Prepare Adjancey List
        unordered_map<int, vector<int>> adj;
        vector<int> indegree(n, 0);

        for(int i=0; i<relations.size(); i++){
            int u = relations[i][0]-1;
            int v = relations[i][1]-1;
            adj[u].push_back(v);
            indegree[v]++;
        }

        queue<int> q;
        vector<int> maxTime(n, 0);

        for(int i=0; i<n; i++){
            if(indegree[i] == 0)
                {
                    q.push(i);
                    maxTime[i] = time[i];
                }
        }

        while(!q.empty()){
            int u = q.front();
            q.pop();

            for(int v: adj[u]){

                indegree[v]--;
                if(indegree[v] == 0)
                    q.push(v);

                int newTime = maxTime[u] + time[v];
                maxTime[v] = max(maxTime[v], newTime);
            }
        }

        int ans = 0;

        for(int i=0; i<n; i++){
            ans = max(ans, maxTime[i]);
        }

        return ans;
        
    }
};