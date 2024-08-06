 vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    { 
        //Your code here
        //return vector with correct order of elements  
          
          vector<int> unionArr; 
          int i=0; 
          int j=0; 
          while(i<n && j<m){
              if(arr1[i] <= arr2[j]){
                  if(unionArr.size() == 0 || unionArr.back()!= arr1[i]){
                      unionArr.push_back(arr1[i]);
                  } 
                  i++;
              } 
              else{
                   if(unionArr.size() == 0 || unionArr.back()!= arr2[j]){
                      unionArr.push_back(arr2[j]);
                  } 
                  j++;
              }
          } 
          while(i<n){
               if(unionArr.size() == 0 || unionArr.back()!= arr1[i]){
                      unionArr.push_back(arr1[i]);
                  } 
                  i++;
          } 
          while(j<m){
              if(unionArr.size() == 0 || unionArr.back()!= arr2[j]){
                      unionArr.push_back(arr2[j]);
                  } 
                  j++;
             } 
              
              return unionArr;
          }
