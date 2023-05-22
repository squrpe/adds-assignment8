#include <vector>
#include <queue>

int kth_largest(std::vector<int> values, int k) {
    
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

    for (int value : values) {

        pq.push(value);

        if (pq.size() > k) {
            pq.pop();
        }

    }

  return pq.top();

}
