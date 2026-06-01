#include <iostream>
#include <string>

template <typename T> 
void swapValue(T& a, T& b){
   
    T Temp = a;
    a = b;
    b = Temp; 
}

template<typename F, const int size>
void printFrame(F(&array)[size]){
    std::cout << "[";     

    for(int i = 0; i < size; i++){    
        
        std::cout << array[i];
        
        if (i < size - 1){
            
            std::cout << ", ";          
        }
    }
    std::cout << "]\n";               
}

template <typename W>
W returnValue(const W* arr, int groesse){

    W minValue = arr[0]; // start erstes Element
    
    for(int v = 0; v < groesse; v++){
        
        if(arr[v] < minValue){
            
            minValue = arr[v];
        }
    }
    return minValue;
}

template <typename M, typename OK>
void printTwoValues(const std::string& label1, const M& value1, const std::string& label2, const OK& value2){
    
    std::cout << label1 << ": " << value1 << " | " << label2 << ": " << value2 << '\n';
}