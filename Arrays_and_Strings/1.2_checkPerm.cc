#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool checkPerm(string& s1, string& s2){
	vector<int> visit(26, 0);
	int l1 = s1.length(), l2 = s2.length();
	if(l1 != l2)	return false;
	for(int i=0;i<l1;i++){
		visit[s1[i] - 'a'] ++;
		visit[s2[i] - 'a'] --;
	}
	l1 = 0;
	for(int i=0;i<visit.size();i++)	l1 += visit[i];
	if(l1 == 0)	return true;
	else	return false;
}
int main(){
	string s1,s2;
	cout<<"Enter string1 : ";
	cin>>s1;
	cout<<endl<<"Enter string 2 :";
	cin>>s2;

	if(checkPerm(s1,s2))	cout<<s1<<" and "<<s2<<" are permutations of each other"<<endl;
	else	 cout<<s1<<" and "<<s2<<" are not permutations of each other"<<endl;
}

