#include <iostream>
#include <vector>

using namespace std;

struct Estudiant {
  int dni;
  string nom;
  double nota;
  bool repetidor;
};


void informacio(const vector<Estudiant>& es, double& min, double& max, double& mitj){
  min = -1;
  max = -1;
  mitj = -1;
  int repetidors = 0;

  int size = int(es.size());

  for(int i = 0; i < size; ++i){
    if (!es[i].repetidor and es[i].nota >= 0){
      if (min == -1){
        min = es[i].nota;
        max = es[i].nota;
        mitj = es[i].nota;
      } else {
        if(es[i].nota < min) min = es[i].nota;
        if(es[i].nota > max) max = es[i].nota;
        mitj += es[i].nota;
      }
    } else {
      ++repetidors;
    }
  }

  if (mitj != -1) mitj = mitj / (size - repetidors);
}
