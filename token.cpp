#include <iostream>
#include <sstream>
using namespace std;

int main(){

string str;
 cin >> str;
stringstream ss(str);//str can be any string    
int integer;
char ch;
while(ss >> integer)
{
    ss>>ch;  //flush the ','
    cout<< integer <<endl;
}    


}
