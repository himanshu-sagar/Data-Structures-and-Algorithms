/*
You have made a smartphone app and want to set its price such that the profit earned is maximised. There are certain buyers who will buy your app only if their budget is greater than or equal to your price.
You will be provided with a list of size N having budgets of buyers and you need to return the maximum profit that you can earn.
Lets say you decide that price of your app is Rs. x and there are N number of buyers. So maximum profit you can earn is :
 m * x
where m is total number of buyers whose budget is greater than or equal to x.
Input format :
Line 1 : N (No. of buyers)
Line 2 : Budget of buyers (separated by space)
Output Format :
 Maximum profit
Constraints :
1 <= N <= 10^6
Sample Input 1 :
4
30 20 53 14
Sample Output 1 :
60
Sample Output 1 Explanation :
Price of your app should be Rs. 20 or Rs. 30. For both prices, you can get the profit Rs. 60.
Sample Input 2 :
5
34 78 90 15 67
Sample Output 2 :
201
Sample Output 2 Explanation :
Price of your app should be Rs. 67. You can get the profit Rs. 201 (i.e. 3 * 67).
*/

#include <iostream>
#include<algorithm>
using namespace std;
int countM(int budget[],int p,int n)
{
    int m;
    for(int i=0;i<n;i++)
    {
        if(p<=budget[i])
        {
            m++;
        }
    }
    return m;
}
int maximumProfit(int budget[], int n)
{
    int maxp=0;
    for(int i=0;i<n;i++)
    {
        int m=countM(budget,budget[i],n);
        if(maxp<m*budget[i])
        {
            maxp=m*budget[i];
        }
    }
    return maxp;
}
int maximumProfit1(int budget[],int n)
{
    int profit=0,num=n-1;
    sort(budget,budget+n);
    for(int i=0;i<n;i++)
    {
        cout<<budget[i]<<"  ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(budget[i]*num>profit)
        {
            profit=budget[i]*num;
        }
        num--;
    }
    return profit;
}
int main()
{
    int n ,*input,i,*cost;
    cin>>n;
    input = new int[n];
    for(i = 0;i < n;i++)
        cin>>input[i];
    cout << maximumProfit1(input, n) << endl;
}
