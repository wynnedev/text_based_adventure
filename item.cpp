//
// Created by 200458668 on 7/23/2020.
//

#include "item.hpp"
#include <unordered_map>

Item::Item() : _itemData(new ItemData()), _itemHash("0") {
}
Item::Item(ItemData* itemData) : _itemData(itemData) {
    GenerateHash();
}

ItemData* Item::getItemData() const{
    return this->_itemData;
}
void Item::GenerateHash() {
    std::hash<std::string> hashMaker;
    _itemHash = std::to_string((hashMaker(_itemData->itemName + _itemData->itemDesc)));
}
bool Item::operator==(const Item &i) {
    return i._itemHash == this->_itemHash;
}
Item::Item(const Item &i) {
    this->_itemHash = i._itemHash;
    this->_itemData = i._itemData;
}

void Item::ShowItem() const {
    std::cout << "Name:" << _itemData->itemName << std::endl;
    std::cout << "Desc:" << _itemData->itemDesc << std::endl;
    std::cout << "Value:" << _itemData->itemValue << std::endl;
}
std::string Item::getItemHash() const {
    return this->_itemHash;
}
