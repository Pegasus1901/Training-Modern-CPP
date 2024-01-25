#include <iostream>
#include <thread>
#include <mutex>

std::mutex mt;

void square(int num)
{
   std::lock_guard<std::mutex> lockGuard(mt);
   std::cout << "Square Function Output = " << num * num << std::endl;
   
}

void Cube(int num)
{
   std::lock_guard<std::mutex> lockGuard(mt);
   std::cout << "Cube Function Output = " << num * num * num << std::endl;
}

void CreateThread()
{
   std::cout << "Main Start..." << std::endl;

   std::thread th1(&square, 10);

   std::thread th2(&Cube, 10);

   std::thread th3(
      [](int num){
         std::lock_guard<std::mutex> uniqLock(mt);
         std::cout << "Quad Function Output = " << num * num* num*num << std::endl;
      },
      20
   );


   th1.join();
   th2.join();
   th3.join();


   std::cout << "Main End..." << std::endl;
};