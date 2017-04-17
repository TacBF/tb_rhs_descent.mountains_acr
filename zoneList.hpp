#include "tb_defines.hpp"

zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}         	, {}    , 1      , {}        , 0      },

{ 1, TEAM_BLUE, 	SPAWN_XRAY,     {3}      	, {}    , 1      , {}        , 0    , "%3" },
{ 2, TEAM_RED, 		SPAWN_XRAY,     {}			, {}    , 1      , {}        , 0    , "%3" },

{ 3, TEAM_RED, 		SPAWN_NEVER,    {4,5,9}    	, {}   	, 1      , {}        , 0    , "Mountain Pass" },
{ 4, TEAM_RED, 		SPAWN_NEVER,    {6}  		, {5}   , 1      , {}        , 0    , "Gas Station" },
{ 5, TEAM_RED, 		SPAWN_NEVER,    {6}      	, {4}  	, 1      , {}        , 0    , "Fields" },
{ 6, TEAM_RED, 		SPAWN_NEVER,    {7}      	, {}   	, 1      , {}        , 0    , "Compound" },
{ 7, TEAM_RED, 		SPAWN_NEVER,    {8}			, {}    , 1      , {}        , 0    , "Roadblock" },
{ 8, TEAM_RED, 		SPAWN_NEVER,    {2}      	, {}    , 1      , {}		 , 0    , "Refuge" },
{ 9, TEAM_RED, 		SPAWN_NEVER,  	{}			, {}    , 1      , {}    	 , 0    , "Fire Base" },

{ 10,TEAM_BLUE, 	SPAWN_LARGEFB,  {}			, {}    , 1	     , {1,9}     , 1    , "Depot" },
{ 11,TEAM_RED, 		SPAWN_INSTANT,  {}			, {}    , 1      , {9,2}   	 , 2    , "HIDDEN" },
{ 12,TEAM_BLUE, 	SPAWN_INSTANT,  {}			, {}    , 1      , {1,-2,4,5}, 3    , "HIDDEN" },
{ 13,TEAM_RED, 		SPAWN_INSTANT,  {}			, {}    , 1      , {2,6}	 , 2    , "HIDDEN" },
{ 14,TEAM_BLUE, 	SPAWN_NEVER,  	{}			, {}    , 1 	 , {3}    	 , 1    , "HIDDEN" }
};
