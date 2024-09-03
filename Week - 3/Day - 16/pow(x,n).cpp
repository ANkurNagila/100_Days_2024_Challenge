class Solution {
public:
    double myPow(double x, int n) {
                if(n==0)
            return 1;
        if(n==1)
            return x;

        double ans=1;
        long temp=n;
        int flag=1;
        if(n<0){
            temp=-temp;
            flag=-1;
        }

        while(temp){
            if(temp%2!=0){
                ans=ans*x;
                temp--;
            }
            else{
                x=x*x;
                temp=temp/2;
            }
        }

        if(flag==-1)
            ans=(double)(1.0)/(double)(ans);

        return ans;
    }
};
