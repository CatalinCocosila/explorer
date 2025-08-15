#include <bits/stdc++.h>
using namespace std;
ifstream fin("butoi.in");
ofstream fout("butoi.out");
int pozition_bucket[10];
int main()
{
    int n,task,k,v,p;
    fin >> task >> v >> n >> k >> p;
    int galeata[n];
    for(int i=0; i<n; i++)
    {
        fin >> galeata[i];
    }
    if(task==1)
    {
        int rezult=0,previous;
        while(pozition_bucket[0]<=k)
        {

            if(pozition_bucket[n-1]<k)
                pozition_bucket[n-1]++;
            else // ????????
            {
                pozition_bucket[n-1]=0;
                int cnt=0;
                for(int i=n-2; i>=0; i--)
                {
                    pozition_bucket[i]++;
                    if(pozition_bucket[i]>k)
                    {
                        pozition_bucket[i]=0;
                    }
                    else
                    {
                        break;
                    }
                }
                if(previous>pozition_bucket[0])
                    break;
            }
            int sum=0;
            for(int i=0; i<n; i++)
            {
                sum+=pozition_bucket[i]*galeata[i];
            }
            if(sum==v)
                rezult++;
            previous=pozition_bucket[0];
        }
        fout << rezult;
    }
    if(task==2)
    {
        int rezult=0,previous;
        int minim[n],minusage=1000000;
        while(pozition_bucket[0]<=k)
        {

            if(pozition_bucket[n-1]<k)
                pozition_bucket[n-1]++;
            else // ????????
            {
                pozition_bucket[n-1]=0;
                int cnt=0;
                for(int i=n-2; i>=0; i--)
                {
                    pozition_bucket[i]++;
                    if(pozition_bucket[i]>k)
                    {
                        pozition_bucket[i]=0;
                    }
                    else
                    {
                        break;
                    }
                }
                if(previous>pozition_bucket[0])
                    break;
            }
            int sum=0,numberofusage=0;
            for(int i=0; i<n; i++)
            {
                sum+=pozition_bucket[i]*galeata[i];
                numberofusage+=pozition_bucket[i];
            }
            if(sum==v)
            {
                if(minusage>numberofusage)
                {
                    minusage=numberofusage;
                    for(int i=0; i<n; i++)
                    {
                        minim[i]=pozition_bucket[i];
                    }
                }
            }
            previous=pozition_bucket[0];
        }
        for(int i=0; i<n; i++)
        {
            fout << minim[i] << " ";
        }
    }
    if(task==3)
    {
        int sum=0,maxsum=-1,indice;
        for(int i=0; i<p; i++)
        {
            sum+=galeata[i];
        }
        if(v%sum==0)
        {
            if(sum>maxsum)
            {
                maxsum=sum;
                indice=1;
            }
        }
        for(int i=1; i<n-p+1; i++)
        {
            sum-=galeata[i-1];
            sum+=galeata[i+p-1];
            if(v%sum==0)
            {
                if(sum>maxsum)
                {
                    maxsum=sum;
                    indice=i+1;
                }
            }
        }
        fout << indice;
    }
    return 0;
}