#include<iostream>
#include<vector>
#include<deque>
using namespace std;

void make_permutation(int n,int k)
{
    deque<int>dq;
    for(int i=1;i<n;i++)
    {
        dq.push_back(i);

    }
    int front = 1;

    vector<int>ans;

    for(int i=1;i<=n;i++)
    {
        if(front==1)
        {
            ans.push_back(dq.front());
            dq.pop_front();

            if(k>1)
            {
                front = 0;
            }
            k--;
        }
        else{
            ans.push_back(dq.back());
            dq.pop_back();

            if(k>1){
                front = 1;
            }
            k--;

        }
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }


}
int main()
{
    int n = 5 , k = 3;
    make_permutation(n,k);

    return 0;

}  
