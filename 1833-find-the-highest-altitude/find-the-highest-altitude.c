int largestAltitude(int* gain, int gainSize) {
    int altitude=0;
    int max=0;
    for(int i=0;i<gainSize;i++){
    altitude=altitude+gain[i];
    if(altitude>max){
        max=altitude;
    }
     }
     return max;
}
