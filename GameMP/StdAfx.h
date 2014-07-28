#include <Engine/Engine.h>
#include <GameMP/Game.h>
#include <GameMP/SEColors.h>

/* rcg10042001 protect against Visual C-isms. */
#ifdef _MSC_VER
#define DECL_DLL _declspec(dllimport)
#endif

#ifdef PLATFORM_UNIX
#define DECL_DLL 
#endif

#include <EntitiesMP/Global.h>
#include <EntitiesMP/Common/Common.h>
#include <EntitiesMP/Common/GameInterface.h>
#include <EntitiesMP/Player.h>

#include <EntitiesMP/PlayerWeapons.h>
#include <EntitiesMP/PlayerMarker.h>
#include <EntitiesMP/ArmorItem.h>
#include <EntitiesMP/AmmoItem.h>
#include <EntitiesMP/HealthItem.h>
#include <EntitiesMP/PowerUpItem.h>
#include <EntitiesMP/ModelHolder2.h>
#include <EntitiesMP/Light.h>
#include <Engine/Light/LightSource.h>
#include <EntitiesMP/Trigger.h>
#include <EntitiesMP/EnemySpawner.h>
#include <EntitiesMP/WorldBase.h>

#undef DECL_DLL
