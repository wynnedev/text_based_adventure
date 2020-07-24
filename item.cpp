//
// Created by 200458668 on 7/23/2020.
//

#include "item.hpp"
#include <unordered_map>

Item::Item() : _itemName(""),_itemDesc(""), _itemType(ITEM_TYPE::NONE), _itemValue(0), _itemHash("0") {
}
Item::Item(std::string& name, std::string& desc, int value , ITEM_TYPE type) : _itemName(name), _itemDesc(desc), _itemValue(0), _itemType(type) {
    generateHash();
}
std::string Item::getItemName() const {
    return std::string(_itemName);
}
std::string Item::getItemDesc() const {
    return std::string(_itemDesc);
}
std::string Item::getItemHash() const {
    return _itemHash;
}
int Item::getItemValue() const {
    return _itemValue;
}
ITEM_TYPE Item::getItemType() const {
    return _itemType;
}
void Item::generateHash() {
    std::hash<std::string> hashMaker;
    _itemHash = std::to_string((hashMaker(_itemName + _itemDesc)));
}
bool Item::operator==(const Item &i) {
    return i._itemHash == this->_itemHash;
}
Item::Item(const Item &i) {
    this->_itemHash = i._itemHash;
    this->_itemType = i._itemType;
    this->_itemValue = i._itemValue;
    this->_itemDesc = i._itemDesc;
    this->_itemName = i._itemName;
}
