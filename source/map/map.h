/*=========================================================================

	map.h

	Author:		PKG
	Created:
	Project:	Spongebob
	Purpose:	

	Copyright (c) 2001 Climax Development Ltd

===========================================================================*/

#ifndef	__MAP_MAP_H__
#define __MAP_MAP_H__

/*----------------------------------------------------------------------
	Includes
	-------- */

#ifndef __SYSTEM_GSTATE_H__
#include "system\gstate.h"
#endif

#ifndef _GLOBAL_HEADER_
#include "system\global.h"		// Doh.. just for DVECTOR :/
#endif


/*	Std Lib
	------- */

/*----------------------------------------------------------------------
	Tyepdefs && Defines
	------------------- */

/*----------------------------------------------------------------------
	Structure defintions
	-------------------- */

class CMapScene: public CScene
{
public:
	void	init();
	void	shutdown();
	void	render();
	void	think(int _frames);
	int		readyToShutdown();
	char	*getSceneName()			{return"Map";}

	static void	setLevelToStartOn(int _chapter,int _level)	{s_chapterToStartOn=_chapter;s_levelToStartOn=_level;}

private:
	enum
	{
		MAP_PARCHMENT_WIDTH=512,
		MAP_PARCHMENT_HEIGHT=256,
		MAP_PARCHMENT_START_X=0,
		MAP_PARCHMENT_START_Y=0,

		MAP_LEVEL_WIDTH=140,
		MAP_LEVEL_HEIGHT=60,

		MAP_INSTRUCTIONS_YSTART=173,
		MAP_INSTRUCTIONS_BUTTON_Y_OFFSET=3,
		MAP_INSTRUCTIONS_TEXT_R=128,
		MAP_INSTRUCTIONS_TEXT_G=64,
		MAP_INSTRUCTIONS_TEXT_B=64,
		MAP_INSTRUCTIONS_GAP_BETWEEN_BUTTONS=5,
		MAP_INSTRUCTIONS_GAP_BETWEEN_BUTTONS_AND_TEXT=10,
		MAP_INSTRUCTIONS_Y_SPACE_BETWEEN_LINES=15,

		MAP_NUM_CHAPTERS=5,
		MAP_NUM_LEVELS_PER_CHAPTER=5,
	};

	typedef struct
	{
		int		m_mapFile;
		int		m_globalLevelNumber;
		int		m_spatulaOrTokenCounts;
		int		m_questItemFrame;
		int		m_kelpWorldLevel;
	} sMapLevelData;


	void	renderPointer();
	void	renderInstructions();

	
	void	generateMapScreenImage();
	void	copyImageToScreen(int _file,int _x,int _y,int _w,int _h);
	DVECTOR	getPointerTargetPosition();
	int		isLevelOpen(unsigned int _chapter,unsigned int _level);
	int		isChapterOpen(unsigned int _chapter);
	int		getSpatulaCollectedCount(unsigned int _chapter,unsigned int _level);
	int		hasQuestItemBeenCollected(unsigned int _chapter,unsigned int _level);


	class FontBank		*m_font;
	int					m_readyToExit;

	char				*m_screenImage;

	int					m_currentChapterSelection;
	int					m_currentLevelSelection;
	class CPointerIcon	*m_pointerIcon;

	static sMapLevelData	s_mapLevelData[MAP_NUM_CHAPTERS][MAP_NUM_LEVELS_PER_CHAPTER];
	static DVECTOR			s_mapLevelPositions[MAP_NUM_LEVELS_PER_CHAPTER];

	static int				s_chapterToStartOn;
	static int				s_levelToStartOn;

};


/*----------------------------------------------------------------------
	Globals
	------- */

extern CMapScene	MapScene;


/*----------------------------------------------------------------------
	Functions
	--------- */

/*---------------------------------------------------------------------- */

#endif	/* __MAP_MAP_H__ */

/*===========================================================================
 end */
