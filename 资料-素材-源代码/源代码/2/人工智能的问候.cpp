#include <iostream>
#include <string> 
using namespace std;

int main(){

  string name,age,hometown; 

  cout << "你好，你是谁？" << endl;
  cin >> name;
  cout << name + "，很高兴认识你，你今年几岁呢？" << endl;
  cin >> age;
  cout << age + "，真好的年龄！你来自哪里？" << endl; 
  cin >> hometown;
  cout << "酷哦！" + name + "欢迎你在这么美好的年龄，从" + hometown + "来和我一起学C++。";

  return 0;
}
