#include <utility>
#include <vector>

using namespace std ;

pair<long, long> get_min_max(const std::vector<long>& seq) {

    long Min = seq.front() ;
    long Max = seq.front() ;

    for (long i = 1 ; i < seq.size() ; i++) {
        if (Min > seq[i])
            Min = seq[i] ;

        if (Max < seq[i])
            Max = seq[i] ;
    }

    return {Min , Max} ;
}