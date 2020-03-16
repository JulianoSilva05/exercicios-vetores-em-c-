/*Dada uma seqüência de n números, imprimi-la na ordem inversa à da leitura.*/
#include <iostream>
using namespace std;

int main() {
int n, i;
int v[n];
	cout << "Digite o comprimento da seqüência:\n ";
	cin >> n;

	cout << "Digite uma seqüência com" << n << " números inteiros: \n";
 
for (i = 0; i < n; i++){
	cin >> v[i] ;
	}
for (i = n-1; i >= 0; i--){
	cout << v[i] << "\n\n ";
     	}

  return 0;
}

