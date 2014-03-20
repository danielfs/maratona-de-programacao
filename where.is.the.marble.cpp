// http://www.urionlinejudge.com.br/judge/en/problems/view/1025
#include <stdio.h>
#include <vector>
#include <algorithm>
 
void maxHeapify( std::vector<int> &lista, const int pos, const int n ) {
    int max = 2 * pos + 1;
     
    if( max < n ) {
        if( ( max + 1 ) < n && lista.at( max ) < lista.at( max + 1 ) ) {
            ++max;
        }
        if( lista.at( max ) > lista.at( pos ) ) {
            std::swap( lista[ max ], lista[ pos ] );
            maxHeapify( lista, max, n );
        }
    }
}
 
void heap_sort( std::vector<int> &lista ) {
    int tam = static_cast<int>( lista.size() ), i;
     
    for( i = tam / 2 - 1; i >= 0; --i ) {
        maxHeapify( lista, i, tam );
    }
     
    std::vector<int>::reverse_iterator elem;
     
    for( elem = lista.rbegin(); elem != lista.rend(); elem++ ) {
        std::iter_swap( elem, lista.begin() );
        maxHeapify( lista, 0, --tam );
    }
}
 
int binarySearch( std::vector<int> &vetor, int key ) {
    int min = 0;
    int max = vetor.size() - 1;
     
    while( max >= min ) {
        int mid = ( ( max + min ) / 2 );
         
        if( vetor[ mid ] < key )
            min = mid + 1;
        else if( vetor[ mid ] > key )
            max = mid - 1;
        else {
            while( vetor[ mid - 1 ] == key ) {
                mid -= 1;
            }
             
            return mid;
        }
    }
     
    return -1;
}
 
int main() {
     
    long t = 1;
    int n, q;
     
    while( scanf( "%d %d", &n, &q ) == 2 && n != 0 && q != 0 ) {
        int x, y;
        std::vector<int> vetor;
         
        for( int i = 0; i < n; i++ ) {
            scanf( "%d", &x );
            vetor.push_back( x );
        }
         
        heap_sort( vetor );
         
        printf( "CASE# %ld:\n", t++ );
         
        for( int i = 0; i < q; i++ ) {
            scanf( "%d", &x );
 
            y = binarySearch( vetor, x );
             
            if( y == -1 ) {
                printf( "%d not found\n", x );
            }
            else {
                printf( "%d found at %d\n", x, y + 1 );
            }
        }
    }
     
    return 0;
}