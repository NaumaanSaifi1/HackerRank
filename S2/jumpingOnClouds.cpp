int jumpingOnClouds(vector<int> c) {
int count =0;
for(int i=0; i<c.size()-1;){
    if(c[i+2]==0){
        i+=2;
        count++;
    }
    else if (c[i+1]==0){
        i++;
        count++;
    }
    else break;
}
return count;
}
