#include <iostream>		//cin,cout...
#include <cstring>		//strcmp,strlen...
#include <ctime>		//srand,time,...
#include <cstdlib>		//endl, 
#include <algorithm>    //funzioni come max,min...
#include <vector>

using namespace std;


//**************FUNZIONI****************//





//****************MAIN******************//

int main(int argc, char const *argv[]){
	

int t;
cin >> t;

int temp;
int N,K;

vector<int> v;

while(t--){

	v.clear();

	cin >> N;
	cin >> K;

	//costruisco il vettore
	for (int i = 0; i < N; ++i){
	cin >> temp;
	v.push_back(temp);
	}

	//scorro gli elementi e incremento la variabile perdite

	int perdite = 0;

	for (int i = 0; i < N; ++i)
	{
		if (v[i] > K)
		{
		 perdite = perdite + (v[i]-K);
		}
	}

	cout << perdite << endl;





}




	return 0;
}
