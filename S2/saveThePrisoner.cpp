int saveThePrisoner(int n, int m, int s) {
//   int c = (m % n) + s - 1 ;
//     if ( c > n) c -= n;
//     if ( c == 0) return n;
//     return c;

if(m+s<=n) return m+s-1;
    int r = m%n;
    int i =s-1;
    if((r+i)%n==0) return n;
    else if((r+i)%n!=0) return (r+i)%n;
    return 0;    
}
