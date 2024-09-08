class Solution {
public:
    int number_of_hours(vector<int> &piles,int k){
        int ans=0;

        for(auto it:piles){
            ans+=ceil((double)it/(double)k);
        }

        return ans;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());

        if(h==piles.size())
            return piles[piles.size()-1];

        int i=1,j=piles[piles.size()-1];
        int ans=0;

        while(i<=j){
            int mid=i+(j-i+1)/2;
            cout<<i<<" "<<j<<" "<<mid<<endl;
            int ele=number_of_hours(piles,mid);

            if(ele>h){
                i=mid+1;
            }
            else{
                j=mid-1;
                ans=mid;
            }
        }

        return ans;
    }
};
