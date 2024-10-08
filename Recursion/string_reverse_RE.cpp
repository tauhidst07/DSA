void rev(string&str,int i,int j){
  if(i>=j){
    return;
  } 
  swap(str[i],str[j]); 
  rev(str,i+1,j-1);
}
int main() 
{
    string str="tauhid"; 
    rev(str,0,str.size()-1); 
    cout<<str;
    return 0;
}
