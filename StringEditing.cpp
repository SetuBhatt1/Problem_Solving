
#include <iostream>
#include <cstring>
using namespace std;

int min(int a, int b, int c)
{
    if((a<=b) && (a<=c))
    return a;
    
    else if((b<=a) && (b<=c))
    return b;
    
    else 
    return c;
}

int stringEdit(char s1[], char s2[])
{
    int n1 = strlen(s1)+1;
    int n2 = strlen(s2)+1;
    int tab[n1][n2];
    
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            if(i==0)
            {
                tab[i][j]=j;
            }
            
            else if(j==0)
            {
                tab[i][j]=i;
            }
            
            else if((s1[i-1]) == (s2[j-1]))
            {
                tab[i][j] = tab[i-1][j-1];
            }
            
            else
            {
                tab[i][j] = min(tab[i-1][j], tab[i][j-1], tab[i-1][j-1]) + 1;
            }
            
        }
    }
    
    return tab[n1-1][n2-1];
}

int main()
{
    char s1[] = "car";
    char s2[] = "march";
    
    int cost = stringEdit(s1,s2);
    cout<<" the cost will be: "<<cost<<endl;
    
    return 0;
}
