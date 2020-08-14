//
// Created by 200458668 on 7/23/2020.
//

#ifndef TEXT_BASED_ADVENTURE_ITEM_HPP
#define TEXT_BASED_ADVENTURE_ITEM_HPP

enum class ITEM_TYPE{ WEAPON, ARMOR, POTION, NONE};

#include <string>
#include <utility>
#include <iostream>

struct {
    std::string itemName;
    std::string itemDesc;
    int itemValue = 0;
    ITEM_TYPE itemType = ITEM_TYPE::NONE;
} typedef ItemData;

static ItemData CreateItemData(std::string name, std::string desc, int value, ITEM_TYPE type ){
    ItemData data;
    data.itemName = name;
    data.itemDesc = desc;
    data.itemValue = value;
    data.itemType = type;

    return data;
}

class Item {
public:
    /* Default constructor */
    Item();

    /* Single Argument Constructor */
    explicit Item(ItemData*);

    /* Copy Constructor */
    Item(const Item &i);

    /* Equivalency Operator */
    bool operator==(const Item& i);

    /* Getter Functions */
    //returns item data struct
    ItemData* getItemData() const;
    std::string getItemHash() const;

    //print item details
    void ShowItem() const;

private:
    ///TODO Make Static Function
    void GenerateHash();
    ItemData* _itemData;
    std::string _itemHash;
};

#endif//TEXT_BASED_ADVENTURE_ITEM_HPP
