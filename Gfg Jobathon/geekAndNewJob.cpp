#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	cin.ignore(); // string cannot be taken as input after a integer input that why we uses cin.ignore()
	while(t--){
	    string str;
	    cin >> str;
	    int N = str.length();
	    int num = 0;
	    int upper = 0;
	    int lower = 0;
	    for(int i = 0; i < N; i++){
	        if(str[i]>=48&&str[i]<=57) num++; //counter for numbers in string 
	        if(str[i]>=65&&str[i]<=90) upper++; //counter for upper letter alphabet
	        if(str[i]>=97&&str[i]<=122) lower++; //counter for lower letter alphabet
	    }
	    
	    if(num&&(upper&&lower)) cout << "YES" <<endl;
	    else cout << "NO" << endl;
	}
	return 0;
}