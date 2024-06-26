class Solution {
private:
int getNext(int n){
    int sum =0;
    while(n>0){
        int digit = n % 10;
        n =n/10;
        sum= sum+ digit*digit;
    }
    return sum;
}
public:
    bool isHappy(int n) {
        int slow = n;
        int fast =getNext(n);

        while( slow !=fast && fast !=1){
            slow = getNext(slow);
            fast = getNext(getNext(fast));
        }
        if(fast ==1){
            return true;
        }
        return false;
    }
};