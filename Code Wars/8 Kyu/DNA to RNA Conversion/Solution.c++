#include <string>

using namespace std ;

string DNAtoRNA(string dna) {

    for (int i = 0 ; i < dna.length() ; i++) {

        if (dna[i] == 'T')
            dna[i] = 'U' ;
    }

    return dna ;
}