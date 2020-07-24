//
// Created by 200458668 on 7/23/2020.
//

#ifndef TEXT_BASED_ADVENTURE_ITEM_HPP
#define TEXT_BASED_ADVENTURE_ITEM_HPP

enum class ITEM_TYPE{ WEAPON, ARMOR, POTION, NONE};

#include <string>
class Item {
public:
    Item();
    Item(std::string&, std::string&, int, ITEM_TYPE);
    Item(const Item& i);
    bool operator==(const Item& i);
    std::string getItemName() const;
    std::string getItemDesc() const;
    std::string getItemHash() const;
    int getItemValue() const;
    ITEM_TYPE getItemType() const;
    void generateHash();

private:
    std::string _itemName;
    std::string _itemDesc;
    std::string _itemHash;
    int _itemValue;
    ITEM_TYPE _itemType;
};


#endif//TEXT_BASED_ADVENTURE_ITEM_HPP
