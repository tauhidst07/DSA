class Solution { 
      double findPow(double x, int n) {
        // Base cases
        if (n == 0) return 1.0;
        if (n == 1) return x;
        double half = findPow(x, n / 2);
        if (n % 2 == 0) {
            return half * half;  // If n is even
        } else {
            return half * half * x;  // If n is odd
        }
    }
public:
    double myPow(double x, int n) { 
        bool neg=false; 
        if(n<0){
            neg=true;
        }
        double res = findPow(x,abs(n)); 
        return  neg ? (1/res):res;
    }
};
