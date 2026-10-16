class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxwealth = 0; // maxwelath store krne ke liye
        
        for (int i = 0; i < accounts.size(); i++) {
            int sum = 0; // Har naye customer ke liye wealth ko 0 se start karte hain.
            
            for (int j = 0; j < accounts[i].size(); j++) { // Ye current customer ke saare bank accounts par chalega.
                sum += accounts[i][j];
            }
            
            maxwealth = max(maxwealth, sum); // Ye compare karta hai:
// maxwealth vs current customer ki wealth
        }
        
        return maxwealth;
    }
};
