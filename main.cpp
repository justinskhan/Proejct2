#include "Compare.hpp"
#include "HashInventory.hpp"
#include "Inventory.hpp"
#include "Item.hpp"
#include "ItemAVL.hpp"
#include "TreeInventory.hpp"

int main()
{
    Item katana("Katana", 5.5, ItemType::WEAPON);
    Item sword("Sword", 5.2, ItemType::WEAPON);

    CompareItemName::lessThan(katana, sword); // True, 'katana' < 'sword'
    CompareItemWeight::lessThan(katana, sword); // False, 5.5 not < 5.2
    CompareItemType::equal(katana, sword); // True, WEAPON == WEAPON
}