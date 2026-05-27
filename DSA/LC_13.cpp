class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        int num=0;
        for(int i=0;i<n;i++){
            if ((s[i]=='I') && ((s[i+1]=='V') || (s[i+1]=='X'))){
                num=num+convert(s[i+1])-convert(s[i]);
                i=i+1;
            }
            else if((s[i]=='X') && ((s[i+1]=='L')||(s[i+1]=='C'))){
                num=num+convert(s[i+1])-convert(s[i]);
                i=i+1;
            }
            else if((s[i]=='C') && ((s[i+1]=='D')||(s[i+1]=='M'))){
                num=num+convert(s[i+1])-convert(s[i]);
                i=i+1;
            }
            else{
                num+=convert(s[i]);
            }
        }
        return num;
    }
    int convert(char c){
        switch (c){
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
        }
        return 0;
    }
};

//check the next one in special cases and increase i if matches