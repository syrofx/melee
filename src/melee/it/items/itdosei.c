#include "itdosei.h"

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
bool it_802816F4(Item_GObj* gobj)
{
    it_8026D62C(gobj, it_80282074);
    it_80276CB8(gobj);
    return false;
}

/// #fn_80281734

/// #it_802817A0

/// #it_80281AB4

void it_80281B44(Item_GObj* gobj)
{
    Item* temp_r4;
    f32 var_f1;

    temp_r4 = gobj->user_data;
    var_f1 = M2C_FIELD(temp_r4->xC4_article_data->x4_specialAttributes, f32* , 8) * temp_r4->x5D0_animFrameSpeed;
    if (var_f1 < 0.0f) {
        var_f1 = -var_f1;
    }
    temp_r4->x40_vel.x = temp_r4->facing_dir * var_f1;
}

/// #it_80281B7C

/// #it_80281C6C

/// #it_80281D00

void it_80281E30(Item_GObj* gobj) {}

/// #it_80281E34

void it_80282074(HSD_GObj* arg0)
{
    void* temp_r31;

    temp_r31 = arg0->user_data;
    Item_80268E5C(arg0, 3, 3);
    M2C_FIELD(temp_r31, f32* , 0x5D0) = 1.0f;
    lb_8000BA0C(arg0->hsd_obj, 1.0f);
    M2C_FIELD(temp_r31, s32* , 0x518) = 0;
}

/// #it_802820CC

void it_80282130(Item_GObj* gobj)
{
    ItemAttr* temp_r4;
    Item* item_data = GET_ITEM(gobj);

    temp_r4 = item_data->xCC_item_attr;
    it_80272860(gobj, temp_r4->x10_fall_speed, temp_r4->x14_fall_speed_max);
}

/// #it_80282160
bool it_80282160(Item_GObj* gobj)
{
    // it_8026E15C(gobj, it_802817A0);
    return false;
}


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
void it_80282AC8(Item_GObj* gobj)
{
    ItemAttr* temp_r4;
    Item* item_data = GET_ITEM(gobj);

    temp_r4 = item_data->xCC_item_attr;
    it_80272860(gobj, temp_r4->x10_fall_speed, temp_r4->x14_fall_speed_max);
    // it_80274658(gobj, it_804D6D28->x68_float);
}

/// #it_80282B14

/// #it_80282B84
bool it_80282B84(Item_GObj* gobj)
{
    Item* temp_r5;

    temp_r5 = gobj->user_data;
    temp_r5->xDD4_itemVar.bombhei.xDE4 = M2C_BITWISE(s32, temp_r5->pos.x);
    temp_r5->xDD4_itemVar.bombhei.xDE8 = M2C_BITWISE(s32, temp_r5->pos.y);
    temp_r5->xDD4_itemVar.bombhei.xDEC = temp_r5->pos.z;
    return false;
}


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
bool it_80283554(Item_GObj* gobj)
{
    // it_8026E8C4(gobj, fn_80282CD4, it_80282BFC);
    return false;
}


/// #it_80283588

bool it_802838FC(Item_GObj* gobj)
{
    Item* temp_r5;

    temp_r5 = gobj->user_data;
    temp_r5->xDD4_itemVar.bombhei.xDE4 = M2C_BITWISE(s32, temp_r5->pos.x);
    temp_r5->xDD4_itemVar.bombhei.xDE8 = M2C_BITWISE(s32, temp_r5->pos.y);
    temp_r5->xDD4_itemVar.bombhei.xDEC = temp_r5->pos.z;

    if (it_80272C6C(gobj) == 0) 
    {
        Item_80268E5C(gobj, 0xB, ITEM_ANIM_UPDATE);
    }

    return false;
}


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
