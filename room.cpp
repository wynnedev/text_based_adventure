//
// Created by 200458668 on 8/13/2020.
//

#include "room.hpp"

Room::Room(){
    //increment static room id to count rooms and assign UID
    _roomID = ++roomID;
    _roomInventory = std::make_unique<Inventory>();
    _roomDescription = "";
}

Room::Room(Inventory* inventory, const std::string& description){
    _roomID = ++roomID;
    _roomInventory = std::make_unique<Inventory>(*inventory);
    _roomDescription = description;
}

void Room::ShowRoom() const {
    std::cout << _roomDescription << std::endl;
    std::cout << "This room contains the following items: " << std::endl;

    this->_roomInventory->ShowInventory();
}
