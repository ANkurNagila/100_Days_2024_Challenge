class Solution {
public:
    bool check_log(int n){
        double e=log2(n);

        return int(e)==e;
    }

    bool isHappy(int n) {
        while(n!=1){
            if(check_log(n))
                return false;

            int temp=0;
            while(n!=0){
                int ele=n%10;
                n=n/10;

                temp+=ele*ele;
            }
            n=temp;
        }

        return true;
        
    }
};
