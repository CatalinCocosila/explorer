#include <stdio.h>
#include <stdlib.h>

int b[10];
long long v[10], mat[11][11];

int main()
{
    FILE *fin, *fout;
    int m, n, i, j, max, nr, p, ok, l, c, lc, cc;
    fin=fopen("tablou.in", "r");
    fout=fopen("tablou.out", "w");
    fscanf(fin, "%d%d", &n, &m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            fscanf(fin, "%lld", &mat[i][j]);
            if(mat[i][j]>b[i])
               b[i]=mat[i][j];
        }
        if(b[i]==0)
            fprintf(fout, "2 ");
        else
            fprintf(fout, "%d ", b[i]+1);
    }
    ok=0;
    l=n;
    c=m;
    while(n>1 && m>1 && ok==0){
          lc=cc=-1;
          max=0;
          for(i=0;i<n;i++){
              for(j=0;j<m;j++){
                  v[i]=v[i]*10+mat[i][j];
                  if(mat[i][j]>b[i])
                     b[i]=mat[i][j];
              }
              p=1;
              nr=0;
              while(v[i]>0){
                    nr=nr+(v[i]%10*p);
                    v[i]/=10;
                    p*=(b[i]+1);
              }
              b[i]=0;
              if(nr>max){
                 max=nr;
                 lc=i;
              }
          }
          if(l==n && c==m)
             fprintf(fout, "\n%d\n", max);
          for(j=0;j<m && cc==-1;j++){
              if(mat[lc][j]%2==0)
                 cc=j;
          }
          printf("%d %d\n", lc, cc);
          if(cc==-1)
             ok=1;
          else{
              n--;
              m--;
              if(lc<n)
                  for(i=lc;i<n;i++)
                      for(j=0;j<=m;j++)
                          mat[i][j]=mat[i+1][j];
          if(cc<m)
             for(i=0;i<n;i++)
                 for(j=cc;j<=m;j++)
                     mat[i][j]=mat[i][j+1];
          }
    }
    fprintf(fout, "%d %d\n", n, m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            fprintf(fout, "%lld ", mat[i][j]);
        fprintf(fout, "\n");
    }
    fclose(fin);
    fclose(fout);
    return 0;
}