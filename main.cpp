#array@0.0.3

#include <iostream>
#include <sstream>

using namespace std;
 
 bool read(int mas[10])
 { 
   int i;
   string str;
   getline(cin,str);
   istringstream stream(str);
   
   bool f = true;
   for (i = 0;i<10;i++){
   if (!(stream >> mas[i])) {f = false; break;}
   }
   return f;
 }
 
 int main()
 {
   int a[10],b[10];
   int max;
   if ((read(a)) && (read(b))) {
     max=a[0]+b[0];
     for (int i =0;i<10;i++){
     for (int j = 0;j<10;j++){
       if ((a[i]+b[j] > max) && (i<=j)) {max = a[i]+b[j];}
     }
       
     } cout << max;
   } 
   else cout << "An error has occurred while reading numbers";
   return 0;
   
   
 }
