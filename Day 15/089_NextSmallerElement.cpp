//https://www.codingninjas.com/studio/problems/next-smaller-element_8230814?challengeSlug=striver-sde-challenge&leftPanelTab=0

#include<stack>

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // first we create a stack 
    stack <int> stackk;
    stackk.push(-1);
    vector <int> answer(n);
    for(int i=n-1 ; i>=0 ; i--)
    {
        int value_of_array = arr[i];
        while(stackk.top()>=value_of_array){
            stackk.pop();
        }
        answer[i] = stackk.top();
        stackk.push(value_of_array);
    }
    return answer ;
}
