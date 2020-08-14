#include <iostream>
#include "item.hpp"
#include "inventory.hpp"
#include "room.hpp"

#define INVENTORY_SIZE 10

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
    inventory->ShowInventory();

    inventory->RemoveItem(swordItem);
    inventory->ShowInventory();

    Room *room = new Room(inventory, "This is an empty room");
    room->ShowRoom();
    std::cout << "Program Ended!" << std::endl;
    return 0;
}
