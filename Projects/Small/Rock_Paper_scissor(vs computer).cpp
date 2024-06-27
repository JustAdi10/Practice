#include<iostream>
#include<cstdlib> //for rand() function
using namespace std;

int main()
{
    string options = {"Rock","Paper","Scissors"};

    string player;
    string computer;
    cout<<"Enter your choice"<<endl;
    cin>>player; 

    for(int i=0;i<3;i++){
        computer = options[rand()];
        cout<<computer;
    }
    
    return 0;
}

// Get the system's hardware random device (if any)
// use it to initialize a PRNG
// use that PRNG to feed a random distribution

// #include <random>
// #include <iostream>
// int main() {
//   std::random_device dev; // for seeding
//   std::default_random_engine gen{dev()};
//   std::uniform_int_distribution<int> dis{1, 6};
//   for (int i = 0; i < 10; ++i)
//     std::cout << dis(gen) << ' ';
// }