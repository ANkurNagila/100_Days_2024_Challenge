class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans=0;

        while(start!=0 || goal!=0){
            int ele1=start & 1;
            int ele2=goal & 1;

            if(ele1!=ele2)
                ans++;
            
            start=start>>1;
            goal=goal>>1;
        }

        return ans;
        
    }
};