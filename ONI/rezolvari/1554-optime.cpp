#include <stdio.h>
#include <stdlib.h>
int ciur[10000000],v[100000000],col[200];
int main()
{
    FILE *fin, *fout;
    int c,k,i,j,sum=0,x,max=0,ci,ii,cc,ck;
    fin=fopen("optime.in","r");
    fout=fopen("optime.out","w");
    fscanf(fin,"%d",&c);
    if(c==1)
    {
        fscanf(fin,"%d",&k);
        ciur[0]=ciur[1]=1;
        for(i = 1; i*i < 4000000; i++)
        {
            if(ciur[i]==0)
            {
                for(j = i*i; j < 4000000; j += i)
                    ciur[j]=1;
            }
        }

        k=k*k*2;
        i=1;
        j=0;
        while(i<=k)
        {
            if(ciur[j]==0)
            {
                v[i]=j%100;
                if(v[i]>=10)
                {
                    if(ciur[v[i]]==1)
                        sum+=v[i];
                    i++;
                }
            }
            j++;
        }
        fprintf(fout,"%d",sum);
    }
    else{
        fscanf(fin,"%d%d",&k,&x);
        ciur[0]=ciur[1]=1;
        for(i = 1; i*i < 4000000; i++)
        {
            if(ciur[i]==0)
            {
                for(j = i*i; j < 4000000; j += i)
                    ciur[j]=1;
            }
        }

        ck=k*k*2;
        i=1;
        j=0;
        while(i<=ck)
        {
            if(ciur[j]==0)
            {
                v[i]=j%100;
                if(v[i]>=10)
                {
                    if(ciur[v[i]]==0){


                        col[(i-1)%k]++;


                        }
                    i++;
                }
            }
            j++;
        }

        for(i=0;i<=k-x;i++)
        {
            ii=i;
            cc=ii;
            for(;ii<cc+x;ii++)
                sum+=col[ii];
            if(sum>=max)
            {
                max=sum;
                ci=i;
            }
            sum=0;
        }
        fprintf(fout,"%d\n%d",ci+1,max);
    }
    fclose(fin);
    fclose(fout);
    return 0;
}