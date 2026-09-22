bool isAnagram(char* s, char* t) {
    int freq1[26]={0};
    int freq2[26]={0};
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='A'&&s[i]<='Z')
            freq1[s[i]-'A']++;
        else if(s[i]>='a'&&s[i]<='z')
            freq1[s[i]-'a']++;
}
     for(int i=0;t[i]!='\0';i++){
        if(t[i]>='A'&&t[i]<='Z')
            freq2[t[i]-'A']++;
        else if(t[i]>='a'&&t[i]<='z')
            freq2[t[i]-'a']++;
}
for(int i=0;i<26;i++){
if(freq1[i]!=freq2[i])
    return false;
}
return true;
}  