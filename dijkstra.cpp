vector<ll> dijkstra(int n,vector<pair<ll,ll>>adj[], int s  ){
        priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;  
        
        vector<ll>dist(n,1e18);
        dist[s]=0; 
        
        pq.push({0,s});// <dist,node>
        
        
        while(pq.empty()==false){
            ll node= pq.top().second; 
            ll d= pq.top().first; 
            pq.pop(); 
            if(d>dist[node]){  continue;} // u might have seen situation when (7,4) then (8,4) comes to the pq 
            for(auto it:adj[node]){
                if(dist[it.first]>it.second+d){
                    dist[it.first]=it.second+d; 
                    pq.push({it.second+d,it.first}); 
                }
            }
        }
        return dist; 
        
    }
