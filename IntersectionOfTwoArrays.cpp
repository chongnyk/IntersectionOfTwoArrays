class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> placeholder(nums1.size() + nums2.size());
        vector<int>::iterator end;
        sort(nums1.begin(), nums1.end()); sort(nums2.begin(), nums2.end());
        nums1.erase(unique(nums1.begin(), nums1.end()), nums1.end());
        nums2.erase(unique(nums2.begin(), nums2.end()), nums2.end());
        end = set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), placeholder.begin());
        vector<int> result(placeholder.begin(), end);
        return result;
    }
};

//This method uses STL methods and prolly is something like O(2NlogN + 4N). Realistically you could achieve O(2NlogN) using only set.insert() and if, but I am lazy.
