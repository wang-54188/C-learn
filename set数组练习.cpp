#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    
    // 存储输入数据
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    
    // 每一天用一个set存储当天需要准备的套题编号
    vector<set<int>> daySets(k + 1); // 下标从1到k
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int day = a[i][j];
            int problem = j + 1; // 套题编号从1开始
            daySets[day].insert(problem);
        }
    }
    
    // 输出每一天的套题种类数
    for (int day = 1; day <= k; day++) {
        cout << daySets[day].size() << " ";
    }
    cout << endl;
    
    return 0;
}