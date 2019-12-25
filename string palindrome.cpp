#include <iostream>
#include<string.h>
using namespace std; {
   int main(){
      char str1[]={"madam"};
      int i, length;
      int flag = 0;
      length = strlen(str1);
      for(i=0;i < length ;i++){
         if(str1[i] != str1[length-i-1]) {
            flag = 1;
            break;
         }
      }
      if (flag==1){
         printf(" string is not a palindrome");
      } else {
         printf(" string is a palindrome");
      }
      return 0;
   }
}
