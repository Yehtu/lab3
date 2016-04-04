#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	ifstream inFile("file.in", ios::in);
	if(!inFile){
		cerr << "Failed opening" << endl;
		exit(1); 
	}
	int size;
	int sum = 0;
	inFile >> size;
	vector<int> v(size);
	for(int i=0; i< size; ++i){
		inFile >> v.at(i);}
	sort(v.begin(),v.end());
	for(int i = size-1 ; i > size-6 ; --i)
		sum += v.at(i); 
	cout << sum << endl;
	return 0;
}
