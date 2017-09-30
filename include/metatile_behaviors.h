#ifndef GUARD_METATILE_BEHAVIORS
#define GUARD_METATILE_BEHAVIORS

#define MB_NORMAL 0x00
#define MB_TALL_GRASS 0x02
#define MB_LONG_GRASS 0x03
#define MB_04 0x04
#define MB_05 0x05
#define MB_DEEP_SAND 0x06
#define MB_SHORT_GRASS 0x07
#define MB_CAVE 0x08
#define MB_LONG_GRASS_SOUTH_EDGE 0x09
#define MB_NO_RUNNING 0x0A
#define MB_0B 0x0B
#define MB_MOUNTAIN_TOP 0x0C
#define MB_BATTLE_PYRAMID_WARP 0x0D
#define MB_MOSSDEEP_GYM_WARP 0x0E
#define MB_MT_PYRE_HOLE 0x0F
#define MB_POND_WATER 0x10
#define MB_SEMI_DEEP_WATER 0x11
#define MB_DEEP_WATER 0x12
#define MB_WATERFALL 0x13
#define MB_SOOTOPOLIS_DEEP_WATER 0x14
#define MB_OCEAN_WATER 0x15
#define MB_PUDDLE 0x16
#define MB_SHALLOW_WATER 0x17
#define MB_18 0x18
#define MB_NO_SURFACING 0x19
#define MB_1A 0x1A
#define MB_STAIRS_OUTSIDE_ABANDONED_SHIP 0x1B
#define MB_SHOAL_CAVE_ENTRANCE 0x1C
#define MB_ICE 0x20
#define MB_SAND 0x21
#define MB_SEAWEED 0x22
#define MB_ASHGRASS 0x24
#define MB_25 0x25
#define MB_THIN_ICE 0x26
#define MB_CRACKED_ICE 0x27
#define MB_HOT_SPRINGS 0x28
#define MB_LAVARIDGE_GYM_B1F_WARP 0x29
#define MB_SEAWEED_NO_SURFACING 0x2A
#define MB_REFLECTION_UNDER_BRIDGE 0x2B
#define MB_IMPASSABLE_EAST 0x30
#define MB_IMPASSABLE_WEST 0x31
#define MB_IMPASSABLE_NORTH 0x32
#define MB_IMPASSABLE_SOUTH 0x33
#define MB_IMPASSABLE_NORTHEAST 0x34
#define MB_IMPASSABLE_NORTHWEST 0x35
#define MB_IMPASSABLE_SOUTHEAST 0x36
#define MB_IMPASSABLE_SOUTHWEST 0x37
#define MB_JUMP_EAST 0x38
#define MB_JUMP_WEST 0x39
#define MB_JUMP_NORTH 0x3A
#define MB_JUMP_SOUTH 0x3B
#define MB_JUMP_SOUTHEAST 0x3E
#define MB_JUMP_SOUTHWEST 0x3F
#define MB_WALK_EAST 0x40
#define MB_WALK_WEST 0x41
#define MB_WALK_NORTH 0x42
#define MB_WALK_SOUTH 0x43
#define MB_SLIDE_EAST 0x44
#define MB_SLIDE_WEST 0x45
#define MB_SLIDE_NORTH 0x46
#define MB_SLIDE_SOUTH 0x47
#define MB_TRICK_HOUSE_PUZZLE_8_FLOOR 0x48
#define MB_EASTWARD_CURRENT 0x50
#define MB_WESTWARD_CURRENT 0x51
#define MB_NORTHWARD_CURRENT 0x52
#define MB_SOUTHWARD_CURRENT 0x53
#define MB_NON_ANIMATED_DOOR 0x60
#define MB_LADDER 0x61
#define MB_EAST_ARROW_WARP 0x62
#define MB_WEST_ARROW_WARP 0x63
#define MB_NORTH_ARROW_WARP 0x64
#define MB_SOUTH_ARROW_WARP 0x65
#define MB_CRACKED_FLOOR_HOLE 0x66
#define MB_AQUA_HIDEOUT_WARP 0x67
#define MB_LAVARIDGE_GYM_1F_WARP 0x68
#define MB_ANIMATED_DOOR 0x69
#define MB_UP_ESCALATOR 0x6A
#define MB_DOWN_ESCALATOR 0x6B
#define MB_WATER_DOOR 0x6C
#define MB_WATER_SOUTH_ARROW_WARP 0x6D
#define MB_DEEP_SOUTH_WARP 0x6E
#define MB_WARP_OR_BRIDGE 0x70
#define MB_71 0x71
#define MB_ROUTE120_NORTH_BRIDGE_1 0x72
#define MB_ROUTE120_NORTH_BRIDGE_2 0x73
#define MB_PACIFIDLOG_VERTICAL_LOG_1 0x74
#define MB_PACIFIDLOG_VERTICAL_LOG_2 0x75
#define MB_PACIFIDLOG_HORIZONTAL_LOG_1 0x76
#define MB_PACIFIDLOG_HORIZONTAL_LOG_2 0x77
#define MB_FORTREE_BRIDGE 0x78
#define MB_ROUTE120_SOUTH_BRIDGE_1 0x7A
#define MB_ROUTE120_SOUTH_BRIDGE_2 0x7B
#define MB_ROUTE120_NORTH_BRIDGE_3 0x7C
#define MB_ROUTE120_NORTH_BRIDGE_4 0x7D
#define MB_7E 0x7E
#define MB_ROUTE110_BRIDGE 0x7F
#define MB_COUNTER 0x80
#define MB_PC 0x83
#define MB_CABLE_BOX_RESULTS_1 0x84
#define MB_REGION_MAP 0x85
#define MB_TELEVISION 0x86
#define MB_POKEBLOCK_FEEDER 0x87
#define MB_SLOT_MACHINE 0x89
#define MB_ROULETTE 0x8A
#define MB_CLOSED_SOOTOPOLIS_GYM_DOOR 0x8B
#define MB_TRICK_HOUSE_PUZZLE_DOOR 0x8C
#define MB_8D 0x8D
#define MB_RUNNING_SHOES_INSTRUCTION 0x8E
#define MB_QUESTIONNAIRE 0x8F
#define MB_SECRET_BASE_SPOT_RED_CAVE 0x90
#define MB_SECRET_BASE_SPOT_RED_CAVE_OPEN 0x91
#define MB_SECRET_BASE_SPOT_BROWN_CAVE 0x92
#define MB_SECRET_BASE_SPOT_BROWN_CAVE_OPEN 0x93
#define MB_SECRET_BASE_SPOT_YELLOW_CAVE 0x94
#define MB_SECRET_BASE_SPOT_YELLOW_CAVE_OPEN 0x95
#define MB_SECRET_BASE_SPOT_TREE_LEFT 0x96
#define MB_SECRET_BASE_SPOT_TREE_LEFT_OPEN 0x97
#define MB_SECRET_BASE_SPOT_SHRUB 0x98
#define MB_SECRET_BASE_SPOT_SHRUB_OPEN 0x99
#define MB_SECRET_BASE_SPOT_BLUE_CAVE 0x9A
#define MB_SECRET_BASE_SPOT_BLUE_CAVE_OPEN 0x9B
#define MB_SECRET_BASE_SPOT_TREE_RIGHT 0x9C
#define MB_SECRET_BASE_SPOT_TREE_RIGHT_OPEN 0x9D
#define MB_BERRY_TREE_SOIL 0xA0
#define MB_SECRET_BASE_PC 0xB0
#define MB_SECRET_BASE_REGISTER_PC 0xB1
#define MB_B2 0xB2
#define MB_B3 0xB3
#define MB_B4 0xB4
#define MB_B5 0xB5
#define MB_B6 0xB6
#define MB_B7 0xB7
#define MB_SECRET_BASE_BALLOON 0xB8
#define MB_B9 0xB9
#define MB_SECRET_BASE_GLITTER_MAT 0xBA
#define MB_SECRET_BASE_JUMP_MAT 0xBB
#define MB_SECRET_BASE_SPIN_MAT 0xBC
#define MB_SECRET_BASE_SOUND_MAT 0xBD
#define MB_BE 0xBE
#define MB_BF 0xBF
#define MB_BED 0xC0
#define MB_C1 0xC1
#define MB_C2 0xC2
#define MB_C3 0xC3
#define MB_SECRET_BASE_TV_SHIELD 0xC4
#define MB_C5 0xC5
#define MB_C6 0xC6
#define MB_SECRET_BASE_POSTER 0xC7
#define MB_C8 0xC8
#define MB_C9 0xC9
#define MB_CA 0xCA
#define MB_CB 0xCB
#define MB_CC 0xCC
#define MB_CD 0xCD
#define MB_CE 0xCE
#define MB_CF 0xCF
#define MB_MUDDY_SLOPE 0xD0
#define MB_BUMPY_SLOPE 0xD1
#define MB_CRACKED_FLOOR 0xD2
#define MB_ISOLATED_VERTICAL_RAIL 0xD3
#define MB_ISOLATED_HORIZONTAL_RAIL 0xD4
#define MB_VERTICAL_RAIL 0xD5
#define MB_HORIZONTAL_RAIL 0xD6
#define MB_PICTURE_BOOK_SHELF 0xE0
#define MB_BOOKSHELF 0xE1
#define MB_POKEMON_CENTER_BOOKSHELF 0xE2
#define MB_VASE 0xE3
#define MB_TRASH_CAN 0xE4
#define MB_SHOP_SHELF 0xE5
#define MB_BLUEPRINT 0xE6
#define MB_CABLE_BOX_RESULTS_2 0xE7
#define MB_WIRELESS_BOX_RESULTS 0xE8
#define MB_TRAINER_HILL_TIMER 0xE9
#define MB_UNKNOWN_CLOSED_DOOR 0xEA

#endif // GUARD_METATILE_BEHAVIORS