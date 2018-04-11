#include<bits/stdc++.h>

using namespace std;

#define int64 long long
#define printarr(a,n) for(int i=0;i<n;i++) cout<<a[i]<<" ";

int main()
{
    int n,burst,finished[100],waiting[100],cpu_time = 0,p,b;
    queue<pair<int,int> >process;
    pair<int,int> rp;

    cout<<"Enter the number of process: ";
    cin>>n;
    cout<<"Enter the burst time for processes: \n";
    for(int i=1;i<=n;i++)
    {
        cout<<"Process  :";
        cin>>p;
        cout<<"burst time: ";
        cin>>burst;
        process.push(make_pair(p,burst));
    }

    rp = process.front();
    cpu_time += rp.second;
    waiting[rp.first] = 0;
    process.pop();

    while(!process.empty())
    {
        rp = process.front();
        p = rp.first;
        b = rp.second;
        waiting[p] = cpu_time;
        cpu_time = cpu_time + b;
        process.pop();
    }

    double av_waits = 0;
    for(int i=1;i<=n;i++)
    {
        av_waits += waiting[i];
    }

    av_waits =(double) av_waits/n;

    cout<<"Waiting time: \n";
    cout<<"\tprocess\twaits\n";

    for(int i=1;i<=n;i++)
        cout<<"\t"<<i<<"\t"<<waiting[i]<<endl;

    cout<<"avarage waiting time: "<<av_waits<<endl;

    return 0;
}
