vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
int n = a.size();
k = k%n;
reverse(a.begin(), a.begin()+n-k);
reverse(a.begin()+n-k, a.end());
reverse(a.begin(), a.end());
vector<int>ans;
for(int i: queries){
    ans.push_back(a[i]);
}
return ans;
}
