/*
题目：输入一个英文句子，翻转句子中单词的顺序，但单词内字符的顺序不变。句子中单词以空格符隔开。为简单起见，标点符号和普通字母一样处理。

例如输入“I am a student.”，则输出“student. a am I”。
*/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
void exchange(char& x,char&y){
  char tmp = x;
  x = y;
  y = tmp;
}
void Reverse_words(char* sentence,int len){
  for(int i=0;i<len/2+1;i++){
    exchange(sentence[i],sentence[len-i-1]);
  }
  for(int i=0;i<len;i++)
    cout<<sentence[i]<<"--->";
  cout<<endl;
}
int main(){
  char sentence[]="I am a student.";
  int len = sizeof(sentence)/sizeof(sentence[0]);
  cout<<len<<endl;
  Reverse_words(sentence,len);
  return 0;
}
