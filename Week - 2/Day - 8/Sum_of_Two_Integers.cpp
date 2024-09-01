class Solution {
public:
    int sum(int a,int b){
        return a ^ b;
    }

    int carry(int a,int b){
        return (a & b)<<1;
    }

    int getSum(int a, int b) {
        int ele=sum(a,b);
        int res=carry(a,b);
        a=ele;
        b=res;

        while(res!=0){
            ele=sum(a,b);
            res=carry(a,b);

            a=ele;
            b=res;
        }

        return a;
    }
};
