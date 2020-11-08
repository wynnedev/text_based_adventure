//
// Created by 200458668 on 8/13/2020.
//

#ifndef TEXT_BASED_ADVENTURE_ROOM_HPP
#define TEXT_BASED_ADVENTURE_ROOM_HPP
#define NO_ROOM 000000

#include "inventory.hpp"
#include <memory>
#include <list>
#include <cstdio>

static int roomID = 0;

class Room {
public:
    Room();
    Room(Inventory* inventory, const std::string& peekDesc, const std::string& roomDesc, const std::string& exploreDesc, const std::list<int>& exitIds);
    void ShowRoom() const;

private:
    int _roomID;
    std::list<int> _exits;
    std::unique_ptr<Inventory> _roomInventory;
    std::string _peekDescription; //This is the description a players sees when peeking into the room
    std::string _roomDescription; //This is the description a player sees when entering the room
    std::string _exploreDescription; //This is the description a players sees when exploring a room
};

// This function ingests a file and creates a room object
void IngestRoom(FILE& roomFile);


#endif//TEXT_BASED_ADVENTURE_ROOM_HPP
