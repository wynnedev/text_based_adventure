//
// Created by 200458668 on 7/23/2020.
//


/// Redesign classes with new DS
#ifndef TEXT_BASED_ADVENTURE_INVENTORY_HPP
#define TEXT_BASED_ADVENTURE_INVENTORY_HPP
#include <map>
#include "item.hpp"

typedef std::string hashKey;
typedef

class Inventory {
public:
    Inventory();
    Inventory(int);
    Item GetItem(const Item&);
    void RemoveItem(const Item&);
    std::map<hashKey, Item>::iterator SearchInventory

/// TODO should I return the item hash for tracking
    void InsertItem(Item&);

private:
    std::map<hashKey, Item> _inventory;
    int _capacity;
};


#endif//TEXT_BASED_ADVENTURE_INVENTORY_HPP
