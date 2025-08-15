#include <fstream>
 
using namespace std;
 
ifstream in;
ofstream out;
 
bool ac[15];
 
bool toate(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (!ac[i])
            return 0;
    }
    return 1;
}
 
int main()
{
    in.open("numar.in");
    out.open("numar.out");
    string x;
    in >> x;
    int ptr = x.size()-1, u = -1;
    while (true)
    {
        int xs = x.size();
        ac[ptr] = 1;
        if ((x[ptr] - '0') % 2)
            ptr -= (x[ptr] - '0');
        else
            ptr += (x[ptr] - '0');
        while (ptr >= xs)
            ptr -= xs;
        while (ptr < 0)
            ptr += xs;
        if (ac[ptr])
        {
            if (toate(xs))
                out << x[u];
            else
                out << x[ptr];
            break;
        }
        else
            ac[ptr] = 1;
        u = ptr;
    }
    return 0;
}