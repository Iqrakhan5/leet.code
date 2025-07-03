class Solution {
public:
bool isvowel(char ch){
    if(ch=='A'|| ch== 'E'||ch=='I'|| ch== 'O'||ch=='U'|| ch== 'a'||ch=='e'|| ch== 'i'||ch=='o'|| ch== 'u')
    return true;

else 
return false;}
    string reverseVowels(string s) {
int start=0; int end=s.size()-1;

while(start<end){

    while(start< end && !isvowel(s[start]) ){
        start++;
    }
    while(start< end && !isvowel(s[end])) {
        end--;
    }
    if(start<end){
        swap(s[start++],s[end--]);
    }

}
return s;
}         
};