/*=========================================================================

	hbrock.h

	Author:		CRB
	Created: 
	Project:	Spongebob
	Purpose: 

	Copyright (c) 2001 Climax Development Ltd

===========================================================================*/

#ifndef __HAZARD_HBROCK_H__
#define __HAZARD_HBROCK_H__

#ifndef __HAZARD_HBBARREL_H__
#include "hazard\hbbarrel.h"
#endif

class CNpcBouncingRockHazard : public CNpcBouncingBarrelHazard
{
public:
	void				init();
	virtual void		setWaypoints( sThingHazard *ThisHazard );
	virtual void		trigger();
protected:
	void				processMovement( int _frames );
	virtual void		collidedWith(CThing *_thisThing);

	u8					m_isTriggered;
};

#endif