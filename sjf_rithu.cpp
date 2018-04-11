#include<bits/stdc++.h>

using namespace std;

#define int64 long long
#define printarr(a,n) for(int i=0;i<n;i++) cout<<a[i]<<" ";

int main()
{
    int n,burst,p,waiting[100],b,cpu_time=0;
    vector<pair<int,int> >process;
    pair<int,int> rp;
    cout<<"Enter the number of process: ";
    cin>>n;
    cout<<"Enter the burst time of the process: \n";
    for(int i=1;i<=n;i++)
    {
        cout<<"process "<<i<<":";
        cin>>burst;
        process.push_back(make_pair(burst,i));
    }

    sort(process.begin(),process.end());

    rp = process[0];
    waiting[rp.second] = 0;
    cpu_time += rp.first;

    for(int i=1;i<process.size();i++)
    {
        rp = process[i];
        p = rp.second;
        b = rp.first;
        waiting[p] = cpu_time;
        cpu_time = cpu_time + b;
    }

    double ave_waits = 0;
    for(int i=1;i<=n;i++)
    {
        ave_waits += waiting[i];
        cout<<"\t"<<i<<"\t"<<waiting[i]<<endl;
    }

    ave_waits =(double) ave_waits/n;
    cout<<"Average Waiting time: "<<ave_waits<<endl;

    return 0;
}
