#include <iostream>
#include "item.hpp"
#include "inventory.hpp"
#include "room.hpp"

#define INVENTORY_SIZE 10

///TODO generate inventory from item list
///TODO Ingestion for rooms and inventories
///TODO Dungeon Function to validate room assignments

int main() {
    std::cout << "Program Started!" << std::endl;
    std::cout << "Creating Item" << std::endl;

    ItemData swordItemData = CreateItemData("Sword", "Sharp and Pointy", 20, ITEM_TYPE::WEAPON);
    auto inventory = new Inventory(INVENTORY_SIZE);
    Item swordItem = Item(&swordItemData);
    inventory->InsertItem(swordItem);

    ItemData axeItemData = CreateItemData("Minor Health Potion", "Healing Potion", 5, ITEM_TYPE::WEAPON);
    Item axeItem = Item(&axeItemData);
    inventory->InsertItem(axeItem);
    inventory->RemoveItem(swordItem);

    std::list<int> roomIds = {1, 2, 3, 4};
    Room *room = new Room(inventory, "Complete Darkness", "A room full of treasure", "you see a hidden compartment", roomIds);
    room->ShowRoom();
    std::cout << "Program Ended!" << std::endl;
    return 0;
}
