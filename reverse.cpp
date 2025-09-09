#include <iostream>
#include <climits>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        int rem;
        while(x!=0){
            rem = x%10;
            if(rev > INT_MAX /10 || (rev == INT_MAX / 10 && rem > 7 )) return 0;
            if(rev < INT_MIN / 10 || (rev == INT_MIN /10 && rem < -8)) return 0;
            rev = (rev*10)+rem;
            x = x/10;
        }
        return rev;
    }
};

int main(){
    Solution sol;
    int x;
    cout<<"enter an integer : ";
    cin>>x;
    int result = sol.reverse(x);
    cout<<"reversed integer : "<<result<<endl;
    return 0;
}