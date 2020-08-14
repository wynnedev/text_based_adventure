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
    if(!_inventory.empty()) {
        std::cout << "Inventory Empty" << std::endl;
        return Item();
    }

    auto element = _inventory.find(requestedItem.getItemHash());
    return element->second;
}

void Inventory::RemoveItem(const Item &i) {
    if(IsEmpty()){
        return;
    }

    auto item = _inventory.find(i.getItemHash());
    _inventory.erase(item);
}

void Inventory::InsertItem(const Item &i) {
    std::pair<std::string, Item> element;
    element.first = i.getItemHash();
    element.second = i;
    _inventory.insert(element);
}
void Inventory::ShowInventory() {

    if(_inventory.empty()){
        std::cout << "Inventory Empty" << std::endl;
        return;
    }
    auto current = _inventory.begin();
    while(current != _inventory.end()){
        std::cout << current->second.getItemData()->itemName << std::endl;
        ++current;
    }
}
bool Inventory::IsEmpty() {
    return _inventory.empty();
}
