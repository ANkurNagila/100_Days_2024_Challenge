class Solution {
public:
    int reverse(int x) {
        string maxi="4294967295";
        int flag=1;
        if(x<0){
            flag=-1;
            x=-x;
        }

        string str=to_string(x);

        for(int i=0,j=str.size()-1;i<j;i++,j--)
            swap(str[i],str[j]);

        if(str.size()<10){
            if(flag==-1)
                str="-"+str;
            return stoi(str);
        }
        else if(str.size()>10)
            return 0;
        else{
            if(str>=maxi)
                return 0;
            else{
                if(flag==-1)
                    str="-"+str;
                return stoi(str);
            } 
        }
        
        return 0;
    }
};
