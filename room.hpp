//
// Created by 200458668 on 8/13/2020.
//

#ifndef TEXT_BASED_ADVENTURE_ROOM_HPP
#define TEXT_BASED_ADVENTURE_ROOM_HPP
#define NO_ROOM 000000

#include "inventory.hpp"
#include <memory>
#include <map>

static int roomID = 0;

class Room {
public:
    Room();
    Room(Inventory* inventory, const std::string& description);
    void ShowRoom() const;

private:
    int _roomID;
    std::unique_ptr<Inventory> _roomInventory;
    std::string _roomDescription;
};


#endif//TEXT_BASED_ADVENTURE_ROOM_HPP
