// this program is an implementation of array cyclic rotation.
#include <bits/stdc++.h> 
using namespace std;

#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define f(i, a, b) for(i=a;i<b;i++)
#define fr(i, a, b) for(i=a; i>b; i--)


void cyclic_rotate(int arr[], int n);

int main() {

	IOS;
	int n;
	cin >> n;

	int arr[n];
	int i;
	cout << "Enter elements of array:" << endl;
	f(i, 0, n)
		cin >> arr[i];

	cyclic_rotate(arr, n);

	cout << "Rotated Array:" << endl;
	f(i, 0, n)
		cout << arr[i];

	return 0;


}


void cyclic_rotate(int arr[], int n) {
	int first_element = arr[n - 1];
	int i;
	fr(i, n - 1, 0)
		arr[i] = arr[i - 1];
	arr[0] = first_element;

}
}
int main(){
    stac s;
    int ch;
    do {
    cout << "1. Push \t 2. Pop \t 3.Display \t 0.Exit" << endl;

    cin >> ch;
    switch(ch){
        case 1: s.push(); break;
        case 2: s.pop(); break;
        case 3: s.display(); break;
        case 0: break;
        default: cout<< "ERROR";
    }

    } while (ch != 0);
}
