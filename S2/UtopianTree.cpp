int utopianTree(int n) {

int height = 1;
for(int i = 0; i<=n; i++){
    if(i%2!= 0 && i != 0)
      height = height *2;
    if (i%2 == 0 && i != 0)
        height++;  
}  
return height;
}
