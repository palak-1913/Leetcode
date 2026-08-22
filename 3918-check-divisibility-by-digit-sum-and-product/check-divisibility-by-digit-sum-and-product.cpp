class Solution {
public:
    int addition(int n){
        int sum=0;
        while(n!=0){
            int rem = n%10;
            sum+=rem;
            n/=10;
        }
        return sum;
    }
    int mux(int n){
        int prod = 1;
        while(n!=0){
            int rem = n%10;
            prod*=rem;
            n/=10;
        }
        return prod;
    }
    bool checkDivisibility(int n) {
        int add = addition(n);
        int prod = mux(n);

        int num = add+prod;
        if(n%num==0) return true;
        else return false;
    }
};