Rockets Forever
===============

This is the source code for the Rockets Forever serverside mod. Original (old) readme file below, with greatly improved grammar and spelling:

    Rockets Forever v1.22.

    Easy install again. (If you're updating you only have to do the following)

    Copy the contents of the Bin/ folder to your Serious Sam 1.07 Bin/ folder and overwrite everything. (No need to worry you can still join regular 1.07 servers and play without getting bad syncs or whatever.)

    If you start a server you can change the Game Mode by typing the following in the console before starting the server: (or put it in the Init.ini if you are running a dedicated server)

    rf_iMode=1;

    The number 1 can be changed from 0-7:

    0 = Normal Mode
    1 = RF Jump Mode
    2 = RF Jump Mode (No Grenade Launcher)
    3 = RF Deathmatch
    4 = RF Deathmatch (No Grenade Launcher)
    5 = Shotguns Only
    6 = Cannons Only
    7 = Snipers Only

    In mode 3 and 4 (RF Deathmatch) you can change the health by setting rf_fDeathmatchHP to a value in the init.ini.

    There are also weapon sets however there is currently only 1 weapon set by FG. Try rf_iWeaponset=1.

    You can remove powerups if you have rf_bRemovePowerups=1.
    You can also remove supers if you do rf_bRemoveSupers=1.

    For the lightsmod (change light colors in every map) use this:

    rf_bChangeLights=1;
    rf_iLights = 0xFF000000;

    Format of the color is 0xRRGGBB00 (0 x RR GG BB 00 without spaces) the last 00 has to be allways 00. It's mostly useless (alpha isn't used here).

    For 5 random colors in a map:

    rf_bChangeLights=1;
    rf_bRandomLights=1;
    rf_iLights = 0xFF000000;
    rf_iLights2= 0x00FF0000;
    rf_iLights3= 0x0000FF00;
    rf_iLights4= 0xFF00FF00;
    rf_iLights5= 0xFFFF0000;

    More commands:

    rf_bRemoveCannonAmmo = 1;
    rf_fWeaponRespawn = 0.05;


    In the Scripts folder of your Serious Sam directory you can make a file called "Models.ini", this will be ran after all the Rockets Forever stuff has been completed processing and allows the use of the following command: (All floats must be written like this: 1.0 that means NOT 1)

    AddModel(CTString strModel, CTString strTexture, FLOAT fX, FLOAT fY, FLOAT fZ, FLOAT fAX, FLOAT fAY, FLOAT fAZ, BOOL bColliding, FLOAT fStretch, INDEX iAnimation)

      strModel = The filename of the model file
    strTexture = The filename of the texture file
            fX = The X position
            fY = The Y position
            fZ = The Z position
           fAX = The rotation around the X axis
           fAY = The rotation around the Y axis
           fAZ = The rotation around the Z axis
    bColliding = Put to 1 to make it collide or 0 to make it walk-thru
      fStretch = The stretch of the model
    iAnimation = Antimation number

    NOTE: There needs to be at least 1 ModelHolder entity present in the map for AddModel to succeed. If there is none, you will get the message "No model found". Generally, most default Croteam levels all have ModelHolders.


    rf_bRemoveCannon and rf_bRemoveGrenades will allow you to remove cannons and grenades in the map. There is also rf_bRemoveMinigun.


    Just as cmd_cmdOnChat and cmd_cmdOnTick I've added 3 more of those: rf_cmdOnJoin, rf_cmdOnKill and rf_cmdOnLeave. Also to fetch the users that are according to those events you can use rf_cmdUser1 (Main user / killer) and rf_cmdUser2 (Player that got killed). For example if someone makes a kill and you want the server to say something about it type this:

    rf_cmdOnKill = "SayFromTo(-0,-1,\"^cffff00Nice shot, \"+rf_cmdUser1+\"!\");";

    I'm also developing 'The Serious Ranker Local Edition' that requires v1.13 or above. But since it's not done yet it will be included in a later version.


    For Poli's CRC Mod (anti-lightbulbs) use: ser_bUseCustomCRCList = 1;
    
    Also includes Kill awards, Anti-swimbug and anti-fake-clients. (Thanks to Politician)

Server mod for Serious Sam Classic: The Second Encounter 1.07

Original binaries of v1.22 can be found here: http://ys.lancop.nl/upload/files/angelo/Releases/RS_v1.22.zip

**License:** For the sake of transparency, Rockets Forever is licensed under the [GNU GPL v3](https://gnu.org/licenses/gpl.html). Please do not redistribute anywhere other than on Github. Give proper credit to the original authors (Angelo, Politician, DwK) when you use this code.

The original source code is based on the 1.07 SDK by Croteam, with combined efforts of Angelo, Politician and DwK. This was originally authored somewhere around 2007/2009.
