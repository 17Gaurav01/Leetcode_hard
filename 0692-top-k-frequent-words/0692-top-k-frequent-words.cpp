class Solution {
public:
 struct comp{
    bool operator()(pair<int,string>&a , pair<int,string>&b){
    if(a.first==b.first) return a.second>b.second;
    return a.first<b.first;
   }
 };
  
    vector<string> topKFrequent(vector<string>& s, int k) {
      unordered_map<string,int>m;
  for(auto x:s) m[x]++;
   priority_queue<pair<int,string>, vector<pair<int,string>>,comp> pq;
      
   
   for(auto z:m){
       pq.push({z.second , z.first});
   }
   
    vector<string>ans;
   while(k--){
      // int x = pq.top().first;
      string y = pq.top().second;
      pq.pop();
      ans.push_back(y);
   }
   return ans;

        
    }
};