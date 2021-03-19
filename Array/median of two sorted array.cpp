#include<bits/stdc++.h>
using namespace std;
void mergeTwoSortedArr(const vector<int> vec1,const vector<int> vec2,vector<int> &vec3)
{
    int i=0,j=0,k=0;
    int n1=vec1.size();
    int n2=vec2.size();
    while(i<n1 && j<n2)
    {
        if(vec1[i]<vec2[j])
        {
            vec3[k]=vec1[i];
            i++;
            k++;
        }
        else
        {
            vec3[k]=vec2[j];
            j++;
            k++;
        }

    }
    while(i<n1)
        vec3[k++]=vec1[i++];
    while(j<n2)
        vec3[k++]=vec2[j++];
}
double median(const vector<int> vec1,const vector<int> vec2)
{
    vector<int> vec3(vec1.size()+vec2.size());
    mergeTwoSortedArr(vec1,vec2,vec3);
    int n=vec3.size();
    int mid=(n-1)/2;

    for(int i=0;i<n;i++)
        cout<<vec3[i]<<"  ";
    cout<<"\n";
    if(n%2!=0)
        return vec3[mid];
    else
        return (double(vec3[mid])+double(vec3[mid+1]))/2.0;

    return 0;
}

int main()
{
    vector<int> vec1={0,0,0,0,0};

    vector<int> vec2={-1,0,0,0,0,0,1};
    cout<<median(vec1,vec2);
}
