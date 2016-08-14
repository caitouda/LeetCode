class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(auto &n: nums)
        {
            m[n]++;
        }
        vector<pair<int, int>> heap;
        for(auto &i: m)
        {
            heap.push_back({i.second, i.first});
        }
        make_heap(heap.begin(), heap.end());
        vector<int> result;
        while(k--)
        {
            result.push_back(heap.front().second);
            pop_heap(heap.begin(), heap.end());
            heap.pop_back();
        }
        return result;
    }
};