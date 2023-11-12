#include "PmergeMe.hpp"

int main(int argc, char** argv)
{
   std::string  numSequence;
   for (int i = 1; i < argc; ++i)
    {
        numSequence += argv[i];
        if (i != argc - 1)
        numSequence += " ";
    }

    PmergeMe obj;
    try
    {
        obj = PmergeMe(numSequence);
    }
    catch (const std::exception& e)
    {
        std::cout<<e.what()<<std::endl;
        return 1;
    }
    std::cout<<"\33[1;31mBefore: \33[1;31m";
    obj.displayList(10);

    struct timeval  time;
    gettimeofday(&time, NULL);
    long long   vectorBefore = time.tv_sec * 1000000LL + time.tv_usec; // in microseconds
    obj.vectorFordJohnson(0, obj.getVectorSize() - 1);
    gettimeofday(&time, NULL);
    long long   vectorAfter = time.tv_sec * 1000000LL + time.tv_usec; // in microseconds

    gettimeofday(&time, NULL);
    long long   listBefore = time.tv_sec * 1000000LL + time.tv_usec; // in microseconds
    obj.listFordJohnson(0, obj.getListSize() - 1);
    gettimeofday(&time, NULL);
    long long   listAfter = time.tv_sec * 1000000LL + time.tv_usec; // in microseconds
    std::cout<<"\33[1;32mAfter: \33[1;32m";
    obj.displayList(10); 

    std::cout<<"\33[1;34mTime to process a range of \33[1;34m"<<obj.getVectorSize();
    std::cout<<" elements with std::vector :  ";
    std::cout<<(vectorAfter - vectorBefore) / 1000.0<<" us"<<std::endl;

    std::cout<<"\33[1;34mTime to process a range of \33[1;34m"<<obj.getListSize();
    std::cout<<" elements with std::list :  ";
    std::cout<<(listAfter - listBefore) / 1000.0<<" us"<<std::endl;
    return 0;
}