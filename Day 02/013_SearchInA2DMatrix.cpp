//https://www.codingninjas.com/codestudio/problems/search-in-a-2d-matrix_8230773?challengeSlug=striver-sde-challenge&leftPanelTab=1

bool searchMatrix(vector<vector<int>>& mat, int target) {
    if(!mat.size()) return false;

    int n = mat.size();
    int m = mat[0].size();

    int lo = 0;
    int hi = (m*n) - 1;

    while(lo <= hi) {
        int mid = (lo + (hi - lo) / 2);
        if(mat[mid/m][mid%m] == target) {
            return true;
        }
        if(mat[mid/m][mid%m] < target) {
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }
    return false;
}
