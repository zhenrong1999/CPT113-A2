//
//  car_info_list.hpp
//  A2_CPT113
//
//  Created by <author> on 17/05/2019.
//
//

#ifndef car_info_list_hpp
#define car_info_list_hpp

#include <iostream>
#include "car_info.hpp"
#include "ordered_linked_list.hpp"

class car_info_list : protected ordered_linked_list<car_info> {
private:
  int max_length_of_string_plate_no=0;
  int max_length_of_string_car_model=0;
  int max_length_of_string_colour=0;
  int max_length_of_prize=0;
public:
    car_info_list();
    ~car_info_list();
    void insert_car(string plat_no_in, string car_model_in, string color_in,
                float rental_prize_in);
    void insert_car(car_info);
    void edit_car(string,string,string,float);
    void delete_car(string plate_no);
    void delete_car(int);
    void display();
protected:

};


#endif /* car_info_list_hpp */
