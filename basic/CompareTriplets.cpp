vector<int> compareTriplets(vector<int> a, vector<int> b) {
int alice ,bob;
alice = 0;
bob = 0;
vector<int>result;
for (int i = 0; i<3 ; i++){
    if (a[i]<b[i]){
        bob++;
    }
    else if (a[i]>b[i]){
        alice++;
    }
    else;
}
