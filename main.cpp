#include <iostream>
#include <string>
#include "another_file.cpp"
#define string std::string



template <typename T>
T maximun(T a, T b){
    return (a > b) ? a : b;
}



int main(){
    // const array are immutable
    // const int mutiplier[] {123, 100};
    // mutiplier[2] = 20;

    // string arr[] = {"fdsa", "fdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewqfdeqrewq", "fweqrewqrewq", "fewqfewqfewq"};

    // std::cout << "entire size of string array : " << sizeof(arr) << std::endl;
    // std::cout << "size of first array size : " << sizeof(arr[0]) << std::endl;
    // std::cout << "size of second array size : " << sizeof(arr[1]) << std::endl;
    // std::cout << "number of element : " << sizeof(arr) / sizeof(arr[0]) << std::endl;


    // const char* charArr = {"hello world"};
    // std::cout << "entire size of string array : " << std::endl;



    // 
    //   
    //
    // int *p_number; // Contain junk address : could be anything
    // *p_number = 55; // Writing into junk address: BAD!
    // std::cout << std::endl;
    // std::cout << "Writing into uninitialized pointer through dereference " << std::endl;
    // std::cout << "p_number " << p_number << std::endl; // Reading from junk address
    // std::cout << "*p_number " << *p_number << std::endl;



    /*

    // Use dynamic heap memory instead of stack memory
    int *p_number{nullptr};
    p_number = new int;
    *p_number = 55;
    std::cout << "Dynamically allocated memory " << std::endl;
    std::cout << "*p_number " << p_number << std::endl;
    std::cout << "p_number " << *p_number << std::endl;

    delete p_number;
    p_number = nullptr;
    std::cout << "Writing in bad memory " << std::endl;
    *p_number = 45;
    std::cout << "Done writing! " << *p_number << std::endl;

    */





    /*

    // dynamically allocated array   
    const size_t size{10};
    double *p_salaries { new double[size] };  // salary array will contain garbage value
    int *p_student{ new(std::nothrow) int[size] }; // all value initialized to 0
    double *p_scores{ new(std::nothrow) double[size]{1,2,3,4,5} }; // Allocating memory space for an array of size double
                                                                    // vars. First 5 will be initialiate with 
                                                                    // 1,2,3,4,5 and the rest will be 0
    
    //nullptr check and use the allocated array
    if(p_scores){
        std::cout << "Size of scores (it's is a regular pointer) : " << sizeof(p_scores) << std::endl;
        std::cout << "Successfully allocated memory for scroll" << std::endl;
        for(size_t i{}; i < size; i++){
            std::cout << "Value: " << p_scores[i] << " : " << *(p_scores + i) << std::endl;
        }
    }


    delete[] p_salaries;
    p_salaries = nullptr;

    delete[] p_student;
    p_student = nullptr;

    delete[] p_scores;
    p_scores = nullptr;


    // static array vs dynamic array

    std::cout << "=====================================================" << std::endl;
    int scores[10]{1,2,3,4,5,6,7,8,9,0}; // live on stack

    std::cout << "Score size " << std::size(scores) << std::endl;
    for(auto s : scores){
        std::cout << "value : " << s << std::endl;
    }


    int *p_scores1 = new int[10]{1,2,3,4,5,6,7,8,9,0};
    std::cout << "p_scores1 size " << std::size(p_scores1) << std::endl;


    */




    // // References
    
    // int int_data{33};
    // double double_data{55};


    // int& ref_int_data{int_data};
    // double& ref_double_data{double_data};


    // std::cout << "int_data : " << int_data << std::endl;
    // std::cout << "&int_data : " << &int_data << std::endl;
    // std::cout << "double_data : " << double_data << std::endl;
    // std::cout << "&double_data : " << &double_data << std::endl;

    // std::cout << "==========================================" << std::endl;

    // std::cout << "ref_int_data : " << ref_int_data << std::endl;
    // std::cout << "&ref_int_data : " << &ref_int_data << std::endl;
    // std::cout << "ref_double_data : " << ref_double_data << std::endl;
    // std::cout << "&ref_double_data : " << &ref_double_data << std::endl;


    // int_data = 111;
    // double_data = 67.2;

    // std::cout << std::endl << "After data changed " << std::endl;

    // std::cout << "int_data : " << int_data << std::endl;
    // std::cout << "&int_data : " << &int_data << std::endl;
    // std::cout << "double_data : " << double_data << std::endl;
    // std::cout << "&double_data : " << &double_data << std::endl;

    // std::cout << "==========================================" << std::endl;

    // std::cout << "ref_int_data : " << ref_int_data << std::endl;
    // std::cout << "&ref_int_data : " << &ref_int_data << std::endl;
    // std::cout << "ref_double_data : " << ref_double_data << std::endl;
    // std::cout << "&ref_double_data : " << &ref_double_data << std::endl;



    // string string1 = "fdsafdsa";
    // string *p_string2 = &string1;
    // std::cout << string1 << " memory address " << p_string2 << " get value from address " << *p_string2;


    int a = 5;
    int b = 10;

    std::cout << sum(&a, &b);






    return 0;
}