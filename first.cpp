#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(int arr[], int n, int key) {
    vector<int> indices;
    if(n==0){indices.resize(1);
    indices[0]= -2;
    return indices;}
    bool found=false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            indices.push_back(i);
            found=true;
        }
    }
    if(found==false){indices.resize(1);
    indices[0]=-1;
    }

    return indices;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cout << "Enter number to search: ";
    cin >> key;  // first test case
    vector<int> result = findIndices(arr, n, key);
    if(result[0]==-1) cout<<"Not Found"; // second test case not found
    else if (result[0]==-2) cout<<"Empty Array"; // third test case empty array
    else{
    for (int i = 0; i < result.size(); i++)
        cout<< result[i]<< " ";
    cout<<endl;
    }
    return 0;
}
