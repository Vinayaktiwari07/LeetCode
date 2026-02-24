class Solution {
public:
    int maxFreqSum(string str) {
       int n = str.size();
    
       int vmaxi = 0;
       int cmaxi = 0;
       for(int i = 0; i < n; i++){
           
           int count = 0;

           // 🔹 Vowel check
           if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
               
               count = 1;  // khud ko bhi count karo
               
               for(int j = i + 1; j < n; j++){
                   if(str[i] == str[j]){
                       count++;
                   }
               }

               vmaxi = max(vmaxi, count);
           }

           // 🔹 Consonant check
           else {  
               
               count = 1;  // khud ko bhi count karo
               
               for(int j = i + 1; j < n; j++){
                   if(str[i] == str[j]){
                       count++;
                   }
               }

               cmaxi = max(cmaxi, count);
           }
       }

       return vmaxi + cmaxi;
    }
};