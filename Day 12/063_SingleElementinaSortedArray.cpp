//https://www.codingninjas.com/codestudio/problems/single-element-in-a-sorted-array_8230826?challengeSlug=striver-sde-challenge&leftPanelTab=0

int singleNonDuplicate(vector<int>& arr)
{
	int xr{};
    for(auto num: arr)
        xr = xr^num;
    return xr;

}
