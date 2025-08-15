#include <bits/stdc++.h>

using namespace std;
ifstream fin("betisoare.in");
ofstream fout("betisoare.out");
char s[1000100];
unsigned long long c,i;

unsigned long long numar(char s[],int &i){
    unsigned long long suma=0;
    for (int j=i;s[j]!='+' && s[j]!='*' && s[j]!='\0';j++)
    {
        suma++;
        i++;
    }
    return suma;
}
unsigned long long produs(char s[],int &i){
    unsigned long long rezultat=numar(s,i);
    while (s[i]=='*'){
        i++;
        unsigned long long ans=numar(s,i);
        rezultat=rezultat*ans*1LL;
    }
    return rezultat;
}
unsigned long long adunare(char s[],int &i){
    unsigned long long rezultat=produs(s,i);
    while (s[i]=='+'){
        i++;
        rezultat+=produs(s,i);
    }
    return rezultat;
}
int main()
{
    /*
    1
    I+I*III+IIIIIII
    */

    fin >> c;
    fin.get();
    for (i=1;i<=c;i++){

    fin.getline(s,1000100);
    int j=0;
    fout << adunare(s,j) << endl;
    }
    return 0;
}