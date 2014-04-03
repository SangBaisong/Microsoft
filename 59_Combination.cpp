#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
void Combination(char*,int,vector<char>&);
void Combine(char* string){
  if(string==NULL)
    return;
  int len = strlen(string);
  vector<char> result;
  for(int i=1;i<=len;++i){
    Combination(string,i,result);
  }
}
void Combination(char* string,int number,vector<char>& result){
  if(number==0){
    vector<char>::iterator iter=  result.begin();
    for(;iter<result.end();++iter)
      cout<<*iter<<"*****";
    cout<<endl;
    return;
  }
  if(*string == '\0')
    return;
  result.push_back(*string);
  Combination(string+1,number-1,result);
  result.pop_back();
  Combination(string+1,number,result);
}
int main(){
  char s[] = {'a','b','c'};
  Combine(s);
  return 0;
}
