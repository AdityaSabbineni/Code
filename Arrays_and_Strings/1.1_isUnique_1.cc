#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isUnique(string& s){
	vector<bool> visit(26, false);
	/* Considering only lower case */
	for(int i=0;i<s.length();i++){
		if(visit[s[i]-97])	return false;
		visit[s[i]-97] = true;
	}
	return true;
}
int main(){
	string s;
	cout<<"Enter string : ";
	cin>>s;
	if(isUnique(s))	cout<<"String '"<<s<<"' is Unique string"<<endl;
	else cout<<"String '"<<s<<"' is not Unique string"<<endl;
	return 0;
}
