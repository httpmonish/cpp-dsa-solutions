class Solution {
public:

    // Find the maximum pile
    int findMax(vector<int>& piles) {
        int maxi = INT_MIN;

        for (int i = 0; i < piles.size(); i++) {
            maxi = max(maxi, piles[i]);
        }

        return maxi;
    }

    // Calculate total hours needed for a given eating speed
    long long calculateTotalHours(vector<int>& piles, int hourly) {
        long long totalH = 0;

        for (int i = 0; i < piles.size(); i++) {
            totalH += (piles[i] + hourly - 1) / hourly;
        }

        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        // Search space
        int low = 1;
        int high = findMax(piles);

        while (low <= high) {

            // Find the middle eating speed
            int mid = low + (high - low) / 2;

            // Calculate hours required at speed = mid
            long long requiredHours = calculateTotalHours(piles, mid);

            if (requiredHours <= h) {
                // Current speed works
                // Try to find a smaller valid speed
                high = mid - 1;
            }
            else {
                // Current speed is too slow
                // Need to increase the eating speed
                low = mid + 1;
            }
        }

        // 'low' points to the minimum valid eating speed
        return low;
    }
};