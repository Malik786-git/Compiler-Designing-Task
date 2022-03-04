#include<iostream>
#include<cstring>
using namespace std;

int tokenization(string exp){
    string token[exp.length()];   
   for(int i =0; i<exp.length(); i++){
          token[i] = exp[i];
   }
    
    for (int i = 0; i < exp.length(); i++)
    {
        cout<<token[i]<<endl;
    }
}

int main(){
   
   string exp = "x=3+4";
   tokenization(exp);
    
    return 0;
}