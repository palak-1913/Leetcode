class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
            int temp = n;
            int prod = 1;
            while(temp!=0){
                int rem = temp%10;
                prod*=rem;
                temp = temp/10;
            }

            if(prod%t==0) return n;
            n++;
        }
        
    }
};