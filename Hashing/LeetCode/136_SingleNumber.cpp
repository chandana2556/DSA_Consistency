class Solution {
Hash Map
TC:O(n)
SC:O(n)
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>seen;
        for(int num:nums){
            seen[num]++;
        }
        for(auto pair : seen){
            if(pair.second==1)
                return pair.first;
        }
        return -1;
    }
};

Using XOR Property
TC:O(n)
SC:O(1)

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int res=0;
//         for(int num : nums){
//             res^=num;
//         }
//         return res;
//     }
// };

