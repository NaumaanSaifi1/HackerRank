void miniMaxSum(vector<int> arr) {
    sort(arr.begin(), arr.end());
    long min=0;
    long max =0;
    for(int i =0; i<4; i++){
        min = min + arr[i];
    }
    for(int j =1; j<5; j++){
        max = max + arr[j];
    }
    cout<<min<<" "<<max;

}
