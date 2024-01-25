#include<vector>
#include<iostream>
#include<optional>

/*
    WHEN TO USE OPTIONAL
    Whenthe scenerio 2 and 3 are mostly similar then use optional
    to avoid runtime error

    returning empty container vs returning filled container
*/

// std::vector<int> ReturnEvenNumbers(std::vector<int>& data){
std::optional< std::vector<int> > ReturnEvenNumbers(std::vector<int>& data){

    if(data.empty()){
        throw std::runtime_error("Error as data is empty");
    }
    std::vector<int>result;

    for(int v : data){
        if(v%2 == 0){
            result.push_back(v);
        }
    }

    if(result.empty()){
        //nullopt is a symbol to indicate no value
        return std::nullopt;
    }

    return result;
}

void TakeInput(std::vector<int>& v1, int N){
    int val= -1;
    // while(N>0){

    //     std::cin>>val;
        // data.push_back(val); we shoud not do this in order to avoid wrong size output

        //we use index to input the data instead of push_back
        // data[data.size()-N] = val;

        for (int i = 0; i < N; i++)
        {
            std::cout<<"Enter Values = ";
            std::cin>>val;
            v1[i] = val;
        }
        

        // N--;
    // }
}

int main(){
    int N=-1;


    /*
        identify even numbers from data, store all of them in result return result

        Scenerio 1- there is atleast 1 even number in data, you identify the number/s. store in result

        Scnerio 2- data is empty. handle by raising exception

        Scenerio 3- data is not empty. however, all numbers are odd
    */

   //return EvenNumbers MAY OR MAY NOT RETURN A VALUE
   //A vector of integers as a return 

    std::cin>>N;

    //space for N integers is now reversed on the heap
    std::vector<int>v1(N);

    std::vector<int> data;

    TakeInput(v1,N);

    std::optional< std::vector<int> > even_numbers = ReturnEvenNumbers(v1);

    // std::cout<< even_numbers.size();

    //has_value returns false if optional wrapper contains nullopt
    //has_value returns true if a valid value is found in optional
    if(even_numbers.has_value()){
        /*
            WE only come inside if when has_value return true
            i.e- valid value is present
            i.e- container of even numbers is found in option
        */
        std::cout<<even_numbers.value().size();

        auto itr = even_numbers.value().begin();

        std::cout <<"Vector Value = " << *itr;
    }
}