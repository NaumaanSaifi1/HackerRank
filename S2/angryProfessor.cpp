string angryProfessor(int k, vector<int> a) {
int count=0;
for(int i : a){
    if(i<=0) count++;
}
if(count>=k) return "NO";
else return "YES";
}