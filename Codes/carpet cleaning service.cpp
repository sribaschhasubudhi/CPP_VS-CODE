/* 
Introduction:-
¨¨¨¨¨¨¨¨¨¨¨¨¨¨
This code represents a carpet cleaning service.
We will provide our services for 2 types of rooms:-
1. Small rooms
2. Big rooms
Charges:-  
₹500 for Small Rooms
₹900 for Big Rooms
Sales Tax:- 6%
Estimates are valid for 30 days

Pseudo Code:-
¨¨¨¨¨¨¨¨¨¨¨¨¨
Greet the customer (Welcome message) 
Prompt the user for number of small rooms and big rooms
Process:-
fee for small rooms= price for 1 small room * no.of small rooms
fee for big rooms= price for 1 big room * no.of big rooms
cost= fee for small rooms + fee for big rooms
tax= cost * 0.06
Total Esimate:- cost + tax
This estimate is valid for 30 days
*/

// fix the prices for small and big rooms, the validity days and the GST by making them constants.

#include <iostream>

int main()
{
    const double small_room_price{500};
    const double big_room_price{900};
    const double gst{0.18};
    const int validity_days{30};

    std::cout << "Welcome to Sribaschha's carpet cleaning services" << std::endl << std::endl;

    std::cout << "Cleaning for each small room costs ₹" << small_room_price << std::endl;
    std::cout << "Cleaning for each big room costs ₹" << big_room_price << std::endl;

    std::cout << "\nHow many small rooms do you want to be cleaned? ";
    int number_of_small_rooms{0};
    std::cin >> number_of_small_rooms;

    std::cout << "How many big rooms do you want to be cleaned? ";
    int number_of_big_rooms{0};
    std::cin >> number_of_big_rooms;

    std::cout << "Fees for cleaning of small room(s): ₹" 
    << small_room_price * number_of_small_rooms << std::endl;
    std::cout << "Fees for cleaning of big room(s): ₹" 
    << big_room_price * number_of_big_rooms << std::endl;
    std::cout << "Total Fees: ₹" 
    << (small_room_price * number_of_small_rooms)+(big_room_price * number_of_big_rooms)
    << std::endl;
    std::cout << "Tax:- ₹" 
    << ((small_room_price * number_of_small_rooms)+(big_room_price * number_of_big_rooms)) * gst
    << std::endl;
    
    std::cout << "=======================================\n";
    std::cout << "\nTotal Estimate:- ₹" 
    << (((small_room_price * number_of_small_rooms)+(big_room_price * number_of_big_rooms)) * gst)+
       (small_room_price * number_of_small_rooms)+(big_room_price * number_of_big_rooms)
    << std::endl;
    std::cout << "This offer is valid for " << validity_days << " days" << std::endl;
    std::cout << "Thank You for using our service" << std::endl; 
}