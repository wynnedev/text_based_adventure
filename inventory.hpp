//
// Created by 200458668 on 7/23/2020.
//


/// Redesign classes with new DS
#ifndef TEXT_BASED_ADVENTURE_INVENTORY_HPP
#define TEXT_BASED_ADVENTURE_INVENTORY_HPP
#include <map>
#include <utility>
#include "item.hpp"

typedef std::string hashKey;
typedef std::map<hashKey, Item> InventoryMap;

class Inventory {
public:
    Inventory();
    explicit Inventory(int);
    Item GetItem(const Item&);
    void RemoveItem(const Item&);
    bool IsEmpty();

/// TODO should I return the item hash for tracking
    void InsertItem(const Item &i);

    void ShowInventory();

private:
    InventoryMap _inventory;
    int _capacity;
};


#endif//TEXT_BASED_ADVENTURE_INVENTORY_HPP
