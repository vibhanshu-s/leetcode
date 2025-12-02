class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int bottles=numBottles;
        while(numBottles>=numExchange){
            int k=numBottles/numExchange;
            bottles+=k;
            numBottles=k+numBottles%numExchange;
        }
        return bottles;
    }
};