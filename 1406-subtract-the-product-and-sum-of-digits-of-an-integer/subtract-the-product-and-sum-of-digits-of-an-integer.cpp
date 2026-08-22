class Solution {
public:
    int mux(int n){
        int p = 1;
        while(n!=0){
            int rem = n%10;
            p*=rem;
            n/=10;
        }
        return p;
    }
    int add(int n){
        int a = 0;
        while(n!=0){
            int rem = n%10;
            a+=rem;
            n/=10;
        }
        return a;
    }
    int subtractProductAndSum(int n) {
        int prod = mux(n);
        int sum = add(n);

        return prod-sum;
    }
};