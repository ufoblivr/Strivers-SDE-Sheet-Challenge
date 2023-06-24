//https://www.codingninjas.com/studio/problems/count-and-say_8230807?challengeSlug=striver-sde-challenge&leftPanelTab=0

string writeAsYouSpeak(int n) 
{
	// Write your code here.	
    string res = "1";
    for (int i=1;i<n;i++)
    {
        string temp = "";
        int ct = 1;
        for (int j=0; j<res.length()-1;j++)
        {
            if (res[j] == res[j+1])
                ct++;
            else
            {
                temp += (to_string(ct) + res[j]);
                ct = 1;
            }
        }
       temp += to_string(ct) + res[res.length()-1];
       res = temp;
    }
    return res;
}
