int diagonalDifference(vector<vector<int>> arr) {
    int sum1=0;
    int sum2=0;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size(); j++) {
             if(i==j) sum1 =sum1 +arr[i][j];
             if(i+j==arr.size()-1) sum2= sum2+arr[i][j];
             
        }
    }
    int result = sum1-sum2;
    if(result<0){
        result = (-result);
        
    }
    return result;

}
