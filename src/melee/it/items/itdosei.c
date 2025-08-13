#include <platform.h>
#include <placeholder.h>

#include "it/it_26B1.h"
#include "it/it_266F.h"
#include "it/inlines.h"

#include <baselib/gobj.h>

extern u32 it_803F56B8[];

/// #it_80281164

/// #fn_80281390
void fn_80281390(HSD_GObj* gobj) { }

/// #it_802813F8

void it_802816F0(Item_GObj* gobj) {}

/// #it_802816F4

/// #fn_80281734

/// #it_802817A0

/// #it_80281AB4

/// #it_80281B44

/// #it_80281B7C

/// #it_80281C6C

/// #it_80281D00

void it_80281E30(Item_GObj* gobj) {}

/// #it_80281E34

/// #it_80282074

/// #it_802820CC

/// #it_80282130

/// #it_80282160

/// #it_8028218C

/// #it_802824B8

void it_802826F4(Item_GObj* gobj) {}

/// #it_802826F8

/// #it_802829FC

bool it_80282AC0(Item_GObj* gobj)
{
    return false;
}

/// #it_80282AC8

/// #it_80282B14

/// #it_80282B84

void it_80282BA8(Item_GObj* gobj) {}

/// #it_80282BAC

/// #it_80282BFC

/// #it_80282C54

/// #it_80282C78

/// #it_80282CA8

/// #fn_80282CD4

/// #it_80282D48

void it_80282DA0(Item_GObj* gobj) {}

/// #it_80282DA4

/// #it_80282DE4

/// #it_802830F4

void it_802832A8(Item_GObj* gobj) {}

/// #it_802832AC

/// #it_80283504

void it_80283550(Item_GObj* gobj) {}

/// #it_80283554

/// #it_80283588

/// #it_802838FC

void it_80283960(Item_GObj* gobj)
{
    ItemAttr* temp_r4;
    Item* item_data = GET_ITEM(gobj);

    temp_r4 = item_data->xCC_item_attr;
    it_80272860(gobj, temp_r4->x10_fall_speed, temp_r4->x14_fall_speed_max);
}

bool it_80283990(Item_GObj* gobj) 
{
    it_8026E15C(gobj, (void (*)(HSD_GObj*)) fn_80281390);
    return false;
}

bool it_802839BC(Item_GObj* gobj)
{
    Item* temp_r31 = gobj->user_data;
    Item_8026AF0C(temp_r31, it_803F56B8[HSD_Randi(3)], 0x7F, 0x40);

    if (temp_r31->msid == 5) 
    {
        itColl_BounceOffVictim(gobj);
        it_802725D4(gobj);
    }
    return false;
}

bool it_80283A3C(Item_GObj* gobj) 
{
    return it_80273030(gobj);
}

bool it_80283A5C(Item_GObj* gobj) 
{
    itColl_BounceOffVictim(gobj);
    return false;
}

bool it_80283A80(Item_GObj* gobj)
{
    itColl_BounceOffVictim(gobj);
    return false;
}

bool it_80283AA4(Item_GObj* gobj) 
{
    return itColl_BounceOffShield(gobj);
}

void it_80283AC4(Item_GObj* gobj, Item_GObj* ref_gobj)
{
    it_8026B894(gobj, ref_gobj);
}
