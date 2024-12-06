long repeatedString(string s, long n) {

long count = 0;
for(int i = 0; i<s.size() ; i++){
    if (s[i] == 'a')
      count++;      
}
long p = n/s.size();
count = count*p;
long q = n%s.size();
for(int i = 0; i<q ; i++){
    if (s[i] == 'a')
      count++;   } 
return count;
}
