class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> map;

        for(auto it:stones)
            map.push(it);

        while(map.size()>1){
            int ele=map.top();
            map.pop();
            int ele2=map.top();
            map.pop();

            if(ele==ele2)
                continue;
            else
                map.push(abs(ele-ele2));
        }

        if(map.size()==1)
            return map.top();

        return 0;

    }
};
