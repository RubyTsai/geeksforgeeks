//http://practice.geeksforgeeks.org/problems/print-diagonally/0

#include <iostream>
#include <vector>
using namespace std;

vector<int> print(vector<int> vec, int size) {
    vector<int> ret;
    for (int a = 0; a < size; a++) 
        for (int i = 0, j = a; j >= 0; i++, j--)  
            ret.push_back(vec[i*size + j]);
        
    for (int a = 1; a < size; a++) 
        for (int i = a, j = size-1; i < size; i++, j--)  
            ret.push_back(vec[i*size + j]);

    return ret;
}

int main() {
	//code
	int cases;
	vector<int> vec;
	vector<int> ret;
	cin >> cases;
	for (int i = 0; i < cases; i++) {
	    int size, nsize, num;
	    cin >> size;
	    nsize = size*size;
	    vec.resize(size*size);
	    for (int j = 0; j < nsize; j++) {
	        cin >> num;
	        vec[j] = num;
	    }
	    ret = print(vec, size);
	    for (int j = 0; j < ret.size(); j++)
	        cout << ret[j] << " ";
	    cout << endl;
	}
	return 0;
}
