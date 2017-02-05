#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void urlifyString(string& s){
	cout<<"s = "<<s<<endl;
	for(int i=0;i<s.length();i++){
		if(s[i] == ' ')	{s[i] = '%';s.insert(i+1,"20");i = i+2;}
	}
	cout<<s;
}
int main(){
	
	string s;
	cout<<"Enter a string : ";
	getline(cin,s);

	urlifyString(s);
}
