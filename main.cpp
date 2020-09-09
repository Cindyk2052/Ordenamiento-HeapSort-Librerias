#include <iostream>
#include "ingresar.h"
#include "ordenamiento.h"
#include "salida.h"

using namespace std;
using namespace heapsort;

int main() {
  
  int a[100], n;
  cout << "Ingresa la cantidad de elementos: ";
  cin >> n;
  entrada(a, n);
  heapSort(a, n);
  imprimir(a, n);   
  
  return 0;
}

