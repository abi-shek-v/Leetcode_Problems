int largestAltitude(int* gain, int n) {
    int max=0;
    int altitude=0;
    for(int i=0;i<n;i++){
    altitude=altitude+gain[i];
    if(altitude>max){
    max=altitude;
    }
    }
    return max;
}