#include<iostream>
// #include<conio.h>

using namespace std;

int main()
{
    int n;  // order of polynomial
    float mult, sum=0, x[10], f[10], xbar;
    // clrscr();
    cout << "Enter no of sample points (max 10 ptn for this example)? ";
    cin >> n;
    cout << "Enter all values of x and corresponding funtional value: " << endl;
    for(int i=0; i<n; i++)
        cin >> x[i] >> f[i];
        
    cout << "\nEnter your x for calculation : ";
    cin >> xbar;

    for(int i=0; i<=n-1; i++)
    {
        mult = 1;
        for(int j=0; j<=n-1; j++)
        {
            if(j!=i)
                mult *= (xbar-x[j]) / (x[i]-x[j]);
        }
        sum += mult * f[i];
    }
    cout << "\nThe estimated value of f(x) = " << sum;

    // getch();
    return 0;
}