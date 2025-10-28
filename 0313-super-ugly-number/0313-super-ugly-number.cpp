class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& v) {
        priority_queue<long long , vector<long long >, greater<long long>> pq;

        pq.push(1);

        

        while(n-- >1){
            long long k = pq.top();

             for(int i=0;i<(int)v.size();i++){
                 pq.push(v[i]*k);
             }
             while(pq.size() and  k == pq.top())
                  pq.pop();

        }
        return pq.top();
    }
};