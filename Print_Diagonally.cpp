//http://practice.geeksforgeeks.org/problems/print-diagonally/0

#include <iostream>
#include <vector>
using namespace std;

int main() {
	//code
	int cases;
	vector<int> vec;
	cin >> cases;
	for (int i = 0; i < cases; i++) {
	    int size, num;
	    cin >> size;
	    cout << "size is: " << size << endl;
	    vec.resize(size*size);
	    for (int j = size; j < size*size; j++) {
	        cin >> num;
	        vec[j] = num;
	    }
	    for (int j = size; j < size*size; j++) 
	        cout << vec[j];
	    cout << endl;
	}
	return 0;
}
