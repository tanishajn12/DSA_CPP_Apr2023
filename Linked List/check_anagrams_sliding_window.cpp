int main() {
    string s="";
    string t="";
    int n=s.size();
    int k=t.size():

    int count=0;

    int tFreqMap[26]={0};
    
    for(int i=0;i<k;i++) {
        tFreqMap[t[i]-'a']++;
    }

    int i=0;
    int j=0;

    int wFreqMap[26]={0};


    while(j<k) {
        wFreqmap[s[j]='a']++;
        j++;
    }

    if(compareMap(tFreqMap,wFreqMap))count++;

    while(j<n) {
        wFreqMap[s[i]-'a']--;
        i++;
        wFreqMap[s[j]-'a']++;

        if(compareMap(tFreqMap,wFreqMap))count++;
        
    }
}