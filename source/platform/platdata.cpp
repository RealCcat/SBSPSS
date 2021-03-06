/*=========================================================================

	platdata.cpp

	Author:		CRB
	Created:
	Project:	Spongebob
	Purpose:

	Copyright (c) 2000 Climax Development Ltd

===========================================================================*/

#ifndef __PLATFORM_PLATFORM_H__
#include "platform\platform.h"
#endif

#ifndef	__ANIM_CLAM_HEADER__
#include <ACTOR_CLAM_ANIM.h>
#endif

CNpcPlatform::NPC_PLATFORM_DATA CNpcPlatform::m_data[NPC_PLATFORM_TYPE_MAX] =
{
	{	// NPC_LINEAR_PLATFORM
		1,
		//512,
		2048,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_CIRCULAR_PLATFORM
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_BUBBLE_PLATFORM
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_COLLAPSING_BUBBLE_PLATFORM
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		2,
		NPC_PLATFORM_INFINITE_LIFE_COLLAPSIBLE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_FISH_HOOK_PLATFORM
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_RETRACTING_PLATFORM
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_GEYSER_PLATFORM
		8,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		4,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_BOBBING_PLATFORM
		0,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		4,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_FALLING_PLATFORM
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		4,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_CART_PLATFORM
		4,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		4,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_FISH_HOOK_2_PLATFORM
		8,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_BRANCH_PLATFORM
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_SEESAW_PLATFORM
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_OILDRUM_PLATFORM
		1,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		4,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_CRATE_PLATFORM
		1,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		4,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_BOUNCE_PLATFORM
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		4,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_DUAL_PLATFORM
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		4,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_OILDRUM_GENERATOR
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		1,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_CRATE_GENERATOR
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		1,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_RAFT_PLATFORM
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		2,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_VERTICAL_OILDRUM_GENERATOR
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		1,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_VERTICAL_OILDRUM_PLATFORM
		1,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		4,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_LANTERN_PLATFORM
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_BUBBLE_GEYSER_GENERATOR
		4,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		1,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_LEAF_PLATFORM
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		4,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_BIG_WHEEL_PLATFORM
		5,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_STEERABLE_BARREL_PLATFORM
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_JELLYFISH_PLATFORM
		1,
		//512,
		2048,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_FISH_HOOK_3_PLATFORM
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_RISING_BRIDGE_PLATFORM
		6,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_BALLOON_BRIDGE_PLATFORM
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_TRAPDOOR_PLATFORM
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_CONVEYOR_GENERATOR
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		10,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_CONVEYOR_PLATFORM
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_PLAYER_BUBBLE_PLATFORM
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_FINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_CLAM_PLATFORM
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_COLLAPSING_ACRID_PLATFORM
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		2,
		NPC_PLATFORM_INFINITE_LIFE_COLLAPSIBLE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_DROP_PLATFORM
		6,
		128,
		true,
		DAMAGE__NONE,
		0,
		2,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_STEAM_SWITCH_PLATFORM
		2,
		128,
		true,
		DAMAGE__NONE,
		0,
		2,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_LIFT_PLATFORM
		2,
		128,
		true,
		DAMAGE__NONE,
		0,
		2,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_LOVE_BOAT_PLATFORM
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		2,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_STEERABLE_OILDRUM_PLATFORM
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_BUBBLE_TUBE_PLATFORM
		2,
		128,
		true,
		DAMAGE__NONE,
		0,
		2,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_FALLING_BLOCK_PLATFORM
		5,
		128,
		true,
		DAMAGE__NONE,
		0,
		2,
		NPC_PLATFORM_INFINITE_LIFE,
		0,
		NPC_PLATFORM_TIMER_NONE,
	},

	{	// NPC_GHOST_TRAIN_PLATFORM
		4,
		128,
		true,
		DAMAGE__NONE,
		0,
		4,
		NPC_PLATFORM_INFINITE_LIFE,
		4,
		NPC_PLATFORM_TIMER_NONE,
	},
};

CNpcPlatform::NPC_PLATFORM_UNIT_TYPE CNpcPlatform::mapEditConvertTable[NPC_PLATFORM_TYPE_MAX] =
{
	NPC_BUBBLE_PLATFORM,
	NPC_LINEAR_PLATFORM,
	NPC_LEAF_PLATFORM,
	NPC_CIRCULAR_PLATFORM,
	NPC_COLLAPSING_BUBBLE_PLATFORM,
	NPC_FISH_HOOK_PLATFORM,
	NPC_RETRACTING_PLATFORM,
	NPC_GEYSER_PLATFORM,
	NPC_BOBBING_PLATFORM,
	NPC_CART_PLATFORM,
	NPC_FISH_HOOK_2_PLATFORM,
	NPC_BRANCH_PLATFORM,
	NPC_SEESAW_PLATFORM,
	NPC_OILDRUM_PLATFORM,
	NPC_CRATE_PLATFORM,
	NPC_BOUNCE_PLATFORM,
	NPC_DUAL_PLATFORM,
	NPC_OILDRUM_GENERATOR,
	NPC_CRATE_GENERATOR,
	NPC_RAFT_PLATFORM,
	NPC_VERTICAL_OILDRUM_GENERATOR,
	NPC_LANTERN_PLATFORM,
	NPC_BUBBLE_GEYSER_GENERATOR,
	NPC_BIG_WHEEL_PLATFORM,
	NPC_STEERABLE_BARREL_PLATFORM,
	NPC_JELLYFISH_PLATFORM,
	NPC_FISH_HOOK_3_PLATFORM,
	NPC_RISING_BRIDGE_PLATFORM,
	NPC_BALLOON_BRIDGE_PLATFORM,
	NPC_TRAPDOOR_PLATFORM,
	NPC_CONVEYOR_GENERATOR,
	NPC_COLLAPSING_ACRID_PLATFORM,
	NPC_DROP_PLATFORM,
	NPC_STEAM_SWITCH_PLATFORM,
	NPC_LIFT_PLATFORM,
	NPC_LOVE_BOAT_PLATFORM,
	NPC_STEERABLE_OILDRUM_PLATFORM,
	NPC_BUBBLE_TUBE_PLATFORM,
	NPC_FALLING_BLOCK_PLATFORM,
	NPC_GHOST_TRAIN_PLATFORM,
	NPC_CONVEYOR_PLATFORM,
	NPC_PLAYER_BUBBLE_PLATFORM,
	NPC_CLAM_PLATFORM,
};
