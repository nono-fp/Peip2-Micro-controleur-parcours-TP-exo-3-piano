#include <iostream>
#include <cstdlib>
#include <chrono>
using namespace std;
using namespace std::chrono;



void generateur_tableau (int n, int tab[]){
  for (int i = 0; i < n; i++){
    tab[i] = rand();
  }
 }

int minimum (int n, int tab[]){
	int mini = tab[0];
	for(int i=1; i<n-1;i++){
		if (mini > tab[i]){
			mini = tab[i];
		}
		}
	return mini;
	cout<< mini;
}

int minimumParmi(int k, int n, int tab[]){
	if (k<n){
		int mini = tab[k];
		for (int i = k+1; i<n;i++){
			if (mini>tab[i]){
				mini = tab[i];
			}
		}
		return mini;
	}
	return 0;
}

int indiceMinimum(int k, int n, int tab[]){
	if (k<n){
		int min = tab[k];
		int ind =k;
		for (int i=k+1; i<n;i++){
			if (min>tab[i]){
				min = tab[i];
			}
		ind= i;
		}
		return ind;
		
		
	}
}


// la définition des fonction se trouve ici
int main (){
  int tab[5] = {2,5,9,1,6};
  //cout<< minimum(5,tab);
  cout<< indiceMinimum( 1,  4,  tab);
  return 0;
}

// pour executer dans le terminal mettre : g++ nomfichier.cpp -o sortie.out et apreès ./sortie.out (ici la sortie.out j'ai mis TP1.out)
