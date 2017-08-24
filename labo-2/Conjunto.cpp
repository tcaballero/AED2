#include "Conjunto.h"
#include <vector>

void Conjunto::agregar(const tipo_elem& elem){

    if(!pertenece(elem))
        conj.push_back(elem);
}

bool Conjunto::pertenece(const tipo_elem &elem) const {
    int i = 0;

    while(i < conj.size() && conj[i] != elem)
        i++;

    return i < conj.size();
}

unsigned int Conjunto::cardinal() const {
    return conj.size();
}
