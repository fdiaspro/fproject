/*
 * File:   main.cpp
 * Author: Aesys_2018
 *
 * Created on 17 maggio 2019, 16.24
 */

#include <iostream>
#include <sstream>
#include <thread>
#include <memory> // for std::unique_ptr


class Resource
{
    static unsigned int i ;
    int instance;
    int counter;
public:
        Resource() {instance=++i ; std::cout << "Resource " << instance << " is acquired\n"; }
        ~Resource() { std::cout << "Resource "<<  instance << " is destroyed\n"; }

        void SetCounter(int counter) {
            this->counter = counter;
        }

        int GetCounter() const {
            return counter;
        }

        int GetInstance() const {
            return instance;
        }
        std::string PrintInstance() const {
            std::stringstream iosss;
            iosss << instance;
            return iosss.str();
        }

};




unsigned int Resource::i=0;



 int main()
{
        std::unique_ptr<Resource> res1(new Resource); // Resource created here
        std::unique_ptr<Resource> res2(new Resource); // Start as nullptr


        std::cout << "res1 is " << (static_cast<bool>(res1) ? "not null\n" : "null\n");
        std::cout << "res2 is " << (static_cast<bool>(res2) ? "not null\n" : "null\n");

        // res2 = res1; // Won't compile: copy assignment is disabled
        res2 = std::move(res1); // res2 assumes ownership, res1 is set to null

        std::cout << "Ownership transferred  Resource " << res2->GetInstance() <<std::endl ;

        std::cout << "res1 is " << (static_cast<bool>(res1) ? "not null: Resource " + std::string(res1->PrintInstance()) : "null") <<std::endl;
        std::cout << "res2 is " << (static_cast<bool>(res2) ? "not null: Resource " + std::string(res2->PrintInstance()): "null") <<std::endl;



        return 0;
} // Resource destroyed here when res2 goes out of scope
