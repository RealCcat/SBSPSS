/*=========================================================================

	tfemit.h

	Author:		PKG
	Created:	
	Project:	Spongebob
	Purpose:	

	Copyright (c) 2001 Climax Development Ltd

===========================================================================*/

#ifndef	__TRIGGERS_TFEMIT_H__
#include "triggers\tfemit.h"
#endif

#ifndef	__PLAYER_PLAYER_H__
#include	"player\player.h"
#endif


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void	CFlameEmitterTrigger::setPositionAndSize(int _x,int _y,int _w,int _h)
{
	CTrigger::setPositionAndSize( _x, _y, _w, _h );

	m_effect = CFX::Create( CFX::FX_TYPE_FLAMES, Pos );	
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void	CFlameEmitterTrigger::collidedWith(CThing *_thisThing)
{
	switch(_thisThing->getThingType())
	{
		case TYPE_PLAYER:
		{
			CPlayer *player = (CPlayer *) _thisThing;

			if ( !player->isRecoveringFromHit() )
			{
				player->takeDamage( DAMAGE__BURN_ENEMY );
			}

			break;
		}

		default:
			break;
	}
}
