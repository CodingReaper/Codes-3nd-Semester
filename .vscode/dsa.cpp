#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int X , Y;
    cin>>X>>Y; //the elements between which minimum distance is to be found
    int min_dist = 1000;
    for(int i=0; i<n; i++) //select one element
    {  
      for(int j=i+1; j<n; j++) //traverse ahead
      {
        if(arr[i] == X and arr[j] == Y) // if we get X and Y we try to update the minimum distance
        min_dist = abs(i-j);
        if(arr[i] == Y and arr[j] == X)
        min_dist = abs(i-j);          
      }
    }
    cout<<min_dist;
  return 0;
}