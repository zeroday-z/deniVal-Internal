#pragma once
namespace Offsets
{
	constexpr auto
        State = 0x9182500, //uworld_state
        Key = State + 0x38,//stade + key
        relative_rotation = 0x170,
        ProcessEvent = 0x3405390,
        StaticFindObject = 0x34435A0,
        gobj_state = 0x8FEFDC0,
		gobj_key = gobj_state + 0x38,
        Pointer = 0x80,
        SkinChanger = 0x2487C30,
        StaticLoadObject = 0x34453a0,
        TriggerVEH = 0x1C15C00,//pakman offset
        bone_matrix = 0x4A893B0,
        PlayerCameraManager = 0x478,//aPlayerCameraManager 
        ChamsOffset = 0x1190,
        portrait_map = 0x1120, //UCharacterPortraitMinimapComponent_C
        character_map = portrait_map + 0x8, // UCharacterCharacterMinimapComponent_C
        Inventory = 0x950,  //struct UAresInventory* Inventory; 
        get_spread_values_fn = 0x2489E40,//Needs new offset
        get_spread_angles_fn = 0x2B26CE0,//Needs new offset
        get_firing_location_and_direction_fn = 0x296a090,//Needs new offset
        to_vector_and_normalize_fn = 0x314B130,//Needs new offset
        to_angle_and_normalize_fn = 0x3145030,//Needs new offset
		FiringStateComp = 0x1010,
		StabilityComponent = 0x418,
        CurrentEquippable = 0x238;  //struct AAresEquippable* CurrentEquippable;
}
