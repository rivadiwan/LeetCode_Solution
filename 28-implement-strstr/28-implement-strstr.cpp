class Solution {
public:
    int strStr(string haystack, string needle) {
        bool flag=true;
        //if(needle.size() == 0)return 0;
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==needle[0])
            {
                flag =true;
                for(int j=1;j<needle.size();j++){
                    if(haystack[i+j]!=needle[j]){
                        flag=false;
                        break;
                    }
                }
                if(flag==true)
                    return i;
            }   
        }
        return -1;
    }
};