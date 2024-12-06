int palindromeIndex(string s) {
 int front = 0; 
int end = s.size()-1;
int i=-1;
while(front<=end){
    if(s[front]==s[end]){
        front++;
        end--;
    } 
    else if(s[front]!= s[end]){
        if(s[front]== s[end-1]&& s[front+1]== s[end-2]){
            i=end;
            break;
        }
       if(s[front+1]==s[end] && s[front+2]== s[end-1]) {
            i=front;
            break;
        }
    }
    
}

return i;

}
