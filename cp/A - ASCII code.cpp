#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<float,float> a,pair<float,float> b){
    return a.second/a.first > b.second/b.first;
}

float fractional_knapsack(int n, float c, vector<pair<float,float>> o){
    float mx = 0, i = 0;
    sort(o.begin(),o.end(),cmp);

    while (c > 0 && i < n)
    {
        float w_inc = min(c,o[i].first);
        float v_inc = w_inc * o[i].second / o[i].first;
        c -= w_inc;
        mx += v_inc;
        i++;
    }
    return mx;
}

int main(){

    float c, n;
    vector<pair<float,float>> o;
    cout << "Enter the capacity of knapsack => ";
    cin >> c;
    cout << "\nEnter the number of objects => ";
    cin >> n;
    cout << "\nEnter the weight and value of objects => \n";
    for (int i = 0; i < n; i++)
    {
        int w,v;
        cin >> w >> v;
        o.push_back(make_pair(w,v));
    }
    cout << "\nmax profit is => " << fractional_knapsack(n,c,o) << endl;

    return 0;
}