//---------------------------------------------------------------------------
// # Project:		HaRiBO MU GameServer - Supported Season 6
// # Company:		RealCoderZ MU Development � 2011
// # Description:	Castle Crown Switch Class
// # Developed By:	WolF & M.E.S
//---------------------------------------------------------------------------
#ifndef CASTLE_CROWN_SWITCH_H
#define CASTLE_CROWN_SWITCH_H


#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// ---------------------------------------------------------------------------------------------------------------------------------------------------
#if (GS_CASTLE)
// ---------------------------------------------------------------------------------------------------------------------------------------------------
class CCastleCrownSwitch  
{
public:
	CCastleCrownSwitch();
	virtual ~CCastleCrownSwitch();

	void CastleCrownSwitchAct(int iIndex);
};
// ---------------------------------------------------------------------------------------------------------------------------------------------------
extern CCastleCrownSwitch g_CsNPC_CastleCrownSwitch;
// ---------------------------------------------------------------------------------------------------------------------------------------------------
#endif
// ---------------------------------------------------------------------------------------------------------------------------------------------------
#endif
// ---------------------------------------------------------------------------------------------------------------------------------------------------
