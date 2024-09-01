#include <iostream>

int main(){

    int data[] {11,2,52,53,9,13,5,7,12,11};

    int * max_address;

    int max = data[0];
  
        for (int i = 1; i < std::size(data); ++i) {
            if(max<data[i]){
                max=data[i];
            }

        }
        
        max_address = &max;

    std::cout<<"Printing Max_Address"<<*max_address<<std::endl;
    std::cout<<"Printing Max"<<max<<std::endl;
}