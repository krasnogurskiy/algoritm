#include <iostream>
using namespace std;
#include "sort.h"
#include "tests.h"

int main() {

    int  array[]={5,8,0,33,76,39,9,11,2,97};
    const size_t size=sizeof(array)/sizeof(array[0]);
//    cout<<" enter 10 numbers";
//    for (int i=0;i<size;++i) {
//        cin >> array[i];
//    }
    cout<<"Our array of integers is  :";
    printOn(array,size);
    cout<<"\n";
    BubbleSort(array,size);
    heapSort(array,size);
    BucketSort(array,size);
    shellSort(array,size);

    //////////////////////////
    cout<<"\n\n---------------------TESTING------------------------\n";
    ///////TESTING////////////

    TestBubblePass();
    cout<<"<------------------------------------------------------>";
    TestHeapPass();
    cout<<"<------------------------------------------------------>";
    TestBucketPass();
    cout<<"<------------------------------------------------------>";
    TestShellPass();


    return 0;
}
