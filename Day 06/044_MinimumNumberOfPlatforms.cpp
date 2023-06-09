//https://www.codingninjas.com/codestudio/problems/minimum-number-of-platforms_8230720?challengeSlug=striver-sde-challenge&leftPanelTab=0

int calculateMinPatforms(int at[], int dt[], int n) {
    sort(dt, dt+n);
    sort(at, at+n);

    int plat = 1, result = 1;
    int i=1, j = 0;

    while(i<n && j<n) {
        if(at[i] <= dt[j]) {
            plat++;
            i++;
        }

        else if(at[i] > dt[j]) {
            plat--;
            j++;
        }

        if(plat > result) {
            result = plat;
        }
    }
    return result;
}
