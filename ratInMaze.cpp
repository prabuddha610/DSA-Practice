#include <iostream>
#include <vector>
using namespace std;

void helper(vector<vector<int>> &mat, int r, int c, string path, vector<string> &ans, vector<vector<bool>> &visit)
{
    int n=mat.size();
    if(r < 0 || c < 0 || r>=n || c>=n ||mat [r][c] == 0 || visit[r][c] == true){
        return;
    }

    if(r == n-1 && c== n-1){
        ans.push_back(path);
        return;
    }

    visit [r][c] = true;

    helper(mat, r+1, c, path+"D", ans, visit); // down
    helper(mat, r-1, c, path+"U", ans, visit); // up
    helper(mat, r, c-1, path+"L", ans, visit); // left
    helper(mat, r, c+1, path+"R", ans, visit); // right

    visit[r][c] = false;
}

vector <string> findPath(vector<vector<int>> &mat){
    int n= mat.size();
    vector<string> ans;
    string path = "";
    vector<vector<bool>> visit(n, vector<bool>(n, false));

    helper(mat, 0 , 0, path, ans, visit);

    return ans;
}

int main(){
    vector<vector<int>> mat = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};

    vector<string> ans = findPath(mat);
    for(string path: ans){
        cout << path << endl;
    }
    return 0;
}