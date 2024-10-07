void printSubsequence(string& input,string output,int index){
     if(index>=input.size()){
       cout<<output<<endl;  
       return;
     } 
     printSubsequence(input,output,index+1); 
     output+=input[index]; 
     printSubsequence(input,output,index+1);
}

int main() {  
   string input="abc"; 
   string output=""; 
   printSubsequence(input,output,0);
   
}
