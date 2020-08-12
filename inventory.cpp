//
// Created by 200458668 on 7/23/2020.
//

/// NOTE A full list of items will be created when the game starts
/// a character will have an inventory.  A room will have an inventory as well
/// a character may transfer items from one inventory to another

#include "inventory.hpp"

Inventory::Inventory() : _capacity(10){
}

Inventory::Inventory(int capacity) : _capacity(capacity) {
}

Item Inventory::GetItem(const Item &requestedItem){
    if(!_inventory.empty()){

    }
};

void Inventory::RemoveItem(const Item &) {

}
void Inventory::InsertItem(Item &) {

}
