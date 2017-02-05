#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;
bool isPalindromePerm(string& s){
	int l = s.length();
	vector<int> visit(26,0);
	for(int i=0;i<l;i++){
		if(isalnum(s[i])){
			if(islower(s[i]))	visit[s[i]-'a']++;
			else	{
					s[i] = tolower(s[i]);
					visit[s[i] - 'a']++;
				}
		}
	}
	for(int i=0;i<26;i++){
		if(visit[i]%2 != 0)	return false;
	}
	return true;
}
int main(){
	string s1;
	string s2;
	cout<<"Enter String : ";
	getline(cin,s1);
	//cout<<s;
	getline(cin, s2);
	if(isPalindromePerm(s1,s2))	cout<<" is Palindrome"<<endl;
	else cout<<" is not Palindrome"<<endl;
}

