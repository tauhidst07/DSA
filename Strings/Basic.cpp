// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std; 
int getLen(string name){
     int count=0; 
     while(name[count]!='\0'){
         count++;
     }  
     return count;
} 
char* reverse(char arr[]){ 
    int len=getLen(arr); 
    int i=len-1; 
    int j=0;
    while(j<i){
        char temp=arr[j]; 
         arr[j]=arr[i]; 
         arr[i]=temp; 
         i--; 
         j++;
    }   
    return arr;
} 
bool isPalindrome(char arr[]){
    int i=getLen(arr)-1; 
    int j=0; 
    while(j<=i){
        if(arr[i]==arr[j]){
            i--; 
            j++;
        } 
        else{
            return false;
        }
    }  
    return true;
} 
void toUpperCase(char arr[]){
    for(int i=0;i<getLen(arr);i++){ 
        if(arr[i]==' '){
            continue;
        }
        arr[i]=arr[i]-32;
    }  
}
int main() {
    // Write C++ code here
    // string arr;
    char arr[10]; 
    arr[0]='t'; 
    arr[1]='a'; 
    arr[2]='\0'; 
    arr[3]='h'; 
    // cout<<arr<<endl; 
    string str; 
    getline(cin,str); 
    cout<<str.substr(4,2);


    return 0;
}
