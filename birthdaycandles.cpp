int birthdayCakeCandles(vector<int> candles)
{
    int max = candles[0];
    for (int i = 0; i<candles.size(); i++){
         if(max<candles[i])
         max = candles[i];
    }
int count =0 ;
for(int i = 0; i<candles.size(); i++){
    if (max == candles[i]) {
        count++;
    }
    }
    return count;
}
