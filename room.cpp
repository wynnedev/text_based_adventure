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

Room::Room(Inventory* inventory, const std::string& peekDesc, const std::string& roomDesc, const std::string& exploreDesc, const std::list<int>& exitIds){
    _roomID = ++roomID;
    _roomInventory = std::make_unique<Inventory>(*inventory);
    _peekDescription = peekDesc;
    _roomDescription = roomDesc;
    _exploreDescription = exploreDesc;
    _exits = exitIds;
}

void Room::ShowRoom() const {
    std::cout << "peek description: " << _peekDescription << std::endl;
    std::cout << "room description: " << _roomDescription << std::endl;
    std::cout << "explore description: " << _exploreDescription << std::endl;
    std::cout << "room inventory: " << std::endl;
    this->_roomInventory->ShowInventory();
    std::cout << "room exits:" << _exits.size() << " exits" << std::endl;
}