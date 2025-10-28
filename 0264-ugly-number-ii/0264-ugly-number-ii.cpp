class Solution {
public:
   
    int nthUglyNumber(int n) {
        
        priority_queue<long long , vector<long long>,greater<long long>> pq;

        pq.push(1);
        
        unordered_set<long long>s;

        while(n-- > 1){
           long long k = pq.top();
           pq.pop();
           long long k1 = (k*2);
           long long k2 = (k*3);
           long long k3 = (k*5);
           if(s.find(k1)==s.end()){
               s.insert(k1);
               pq.push(k1);
           }
           if(s.find(k2)==s.end()){
            s.insert(k2);
            pq.push(k2);
           }
           if(s.find(k3)==s.end()){
            s.insert(k3);
            pq.push(k3);
           }
        }
        return pq.top();
       
        
    }
};