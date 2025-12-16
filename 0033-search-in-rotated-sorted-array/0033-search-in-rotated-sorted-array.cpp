class Solution {
public:
    int search(vector<int>& a, int k) {
        int cnt=-1;
        
        int i=0,j=a.size()-1;
        
        while(i<j){
        
        int mid=(i+j)>>1;
            // cout<<mid<<endl;
            if(a[mid]==k){
                return mid;
            }
            
            if(a[mid]>=a[i]){
                if(k>=a[i] and k<=a[mid]) j=mid-1;
                
                else i=mid+1;
            }
            else if(a[mid]<a[i]){   // 4 5 6 0 1 2 3
                if(k>=a[mid] and k<=a[j]) i=mid+1;
                else j=mid-1;
            }
      
            
        }    
         if(a[j]==k) return j;
        
        return -1;
        
    }
};