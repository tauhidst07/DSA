 vector<int> arr{2,3,3,3,3}; 
  //! Negative marking method 
//   for(int i =0; i<arr.size();i++){ 
//     int index = abs(arr[i])-1;    
//     if(arr[index] > 0){
//         arr[index] *= -1;  
//     } 
//   }   
// //   Missing elements 
//   for (int i =0; i< arr.size();i++){
//     if(arr[i] > 0){
//         cout<<i+1<<" ";
//     } 
//   } 

//! SORTING + SWAPPING METHOD
   int i = 0;  
   int index;
   while (i < arr.size())
   { 
     index = arr[i] -1; 
     if(arr[i] == arr[index]){
        i++;
     } 
     else{
        swap(arr[i],arr[index]);
     }
   } 

   for (int i = 0; i < arr.size(); i++)
   {
    if(arr[i]!= i+1 ){
        cout<<i+1<<" ";
    }
   } 
