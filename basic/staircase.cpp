void staircase(int n) {
for(int i=1; i<=n; i++){
        for(int k =n-1; k>=i; k-- ){
            cout<<" ";
        }
        for(int j=1; j<=i ; j++){
            cout<<"#";
        }
        cout<<endl;
    }
}
