
class Solution {
public:
    vector<int> bestCoordinate(vector<vector<int>>& t, int radius) {
        sort(begin(t), end(t));
        deque<int> reach_x;
        int tid = 0, max_x = 0, max_y = 0, max_q = 0;
        for (int x = t.front()[0]; x <= t.back()[0]; ++x)
        while (tid < t.size() && x + radius >= t[tid][0]) reach_x.push_back(tid++);
        for (int x = t.front()[0]; x <= t.back()[0]; ++x)
      while (!reach_x.empty() && t[reach_x.front()][0]+radius < x) reach_x.pop_front();
        for (int y = 0; y <= 50; ++y)
        int q = 0;
        int y = 0;
         int x = 0;
        for ( auto tid : reach_x)
        
        if (t[tid][1] < y - radius || t[tid][1] > y + radius) continue;
        auto dd = (t[tid][0] - x) * (t[tid][0] - x) + (t[tid][1] - y) * (t[tid][1] - y);
         int q = 0;
        if (dd <= radius * radius) q += t[tid][2] / (1 + sqrt(dd));
        if (max_q < q) { max_q = q; max_x = x; max_y = y; }




        return {max_x, max_y};
    }
  

    
};
