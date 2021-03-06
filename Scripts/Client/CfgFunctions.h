// Written by Kupferkarpfen
// License: CC BY-NC-SA 4.0

class CfgFunctions {
    class XY_Client_Core {
        tag = "XY";

        class Config {
            file = "config";
            class initConfiguration {};
            class skins {};
            class basics {};
            class clothing {};
            class help {};
            class initVariables {};
            class licenses {};
            class resources {};
        };
        class Functions {
            file = "functions";
            class runMapInitializers {};
            class givePassport {};
            class stripPlayer {};
            class setupActions {};
            class loading {};
            class initCiv {};
            class initCop {};
            class initMedic {};
            class initSurvival {};
            class onPlayerKilled {};
            class onPlayerRespawn {};
            class respawned {};
            class revivePlayer {};
            class revived {};
            class medicRequest {};
            class buyLicense {};
            class healHospital {};
            class closeJail {};
            class pushVehicle {};
            class repairTruck {};
            class catchFish {};
            class dropFishingNet {};
            class postBail {};
            class processAction {};
            class escortAction {};
            class impoundAction {};
            class destroyAction {};
            class pulloutAction {};
            class putInCar {};
            class stopEscorting {};
            class restrainAction {};
            class searchAction {};
            class searchVehAction {};
            class unrestrain {};
            class pickupItem {};
            class pickupMoney {};
            class ticketAction {};
            class packupSpikes {};
            class storeVehicle {};
            class robAction {};
            class captureHideout {};
            class gather {};
            class robShops {};
            class surrender {};
            class suicideBomb {};
            class takeOrgans {};
            class robATM {};
            class buyHouse {};
            class getBuildingPositions {};
            class lightHouse {};
            class lightHouseAction {};
            class sellHouse {};
            class receiveHouses {};
            class copBreakDoor {};
            class raidHouse {};
            class lockupHouse {};
            class copHouseOwner {};
            class lockHouse {};
            class houseConfig {};
            class intro {};
            class naturalisation {};
            class wantedList {};
            class wantedInfo {};
            class wantedMenu {};
            class initWantedAdd {};
            class wantedAdd {};
            class pardon {};
            class giveItem {};
            class giveMoney {};
            class p_openMenu {};
            class p_updateMenu {};
            class removeItem {};
            class useItem {};
            class cellphone {};
            class keyMenu {};
            class keyGive {};
            class keyDrop {};
            class s_onSliderChange {};
            class updateViewDistance {};
            class settingsMenu {};
            class settingsInit {};
            class smartphone {};
            class newMsg {};
            class showMsg {};
            class revokeLicense {};
            class eatFood {};
            class calcWeightDiff {};
            class fetchCfgDetails {};
            class fadeSound {};
            class updateHUD {};
            class toggleHUD {};
            class animSync {};
            class keyHandler {};
            class dropItems {};
            class handleDamage {};
            class numberText {};
            class handleItem {};
            class accType {};
            class receiveItem {};
            class giveDiff {};
            class receiveMoney {};
            class playerTags {};
            class pullOutVeh {};
            class nearUnits {};
            class actionKeyHandler {};
            class loadDeadGear {};
            class onTakeItem {};
            class onPutItem {};
            class fetchVehInfo {};
            class spawnVehicle {};
            class pushObject {};
            class onFired {};
            class onReloaded {};
            class nearestDoor {};
            class inventoryClosed {};
            class inventoryOpened {};
            class isUIDActive {};
            class sidechat {};
            class randomRound {};
            class ticketGive {};
            class ticketPrompt {};
            class isNumber {};
            class clientWireTransfer {};
            class index {};
            class moveIn {};
            class clientMessage {};
            class headBag {};
            class receiveKVS {};
            class persistKVS {};
            class kvsGet {};
            class kvsPut {};
            class kvaGet {};
            class kvaPut {};
            class pay {};
            class addMoney {};
            class shuffle {};
            class showVehiclePreview {};
            class setVehicleColor {};
            class save {};
            class showProgress {};
            class hasLicense {};
            class rotatingCamera {};
            class isAlive {};
            class getSpawnPoints {};
            class spawnMenu {};
            class doSpawn {};
            class deathScreen {};
            class getDefaultLoadout {};
            class showQuestionbox {};
            class unscheduled {};
            class isPlayerNearVehicle {};
            class addItemToTrunk {};
            class getItemCountFromTrunk {};
            class removeItemFromTrunk {};
            class getItemFromTrunk {};
            class getTrunkWeight {};
            class trunkMenu {};
            class virtualShopMenu {};
            class broadcast {};
            class jumpFnc {};
            class jail {};
            class tazed {};
            class knockedOut {};
            class knockoutAction {};
            class robReceive {};
            class robPerson {};
            class removeLicenses {};
            class demoChargeTimer {};
            class lockVehicle {};
            class deviceMine {};
            class deviceProcess {};
            class addVehicle2Chain {};
            class reachablePlayers {};
            class itemConfig {};
            class vehicleConfig {};
            class colorConfig {};
            class updateTrunk {};
            class helpMenu {};
            class onlineUID {};
            class inUse {};
            class sourceConfig {};
            class playerInfo {};
            class playerMasked {};
            class resetImpoundVars {};
            class getClothingStats {};
            class defaultInitializer {};
            class initializeFuelstation {};
            class initializeClothingShop {};
            class initializeProcessor {};
            class initializeLicenseSeller {};
            class initializeVehicleShop {};
            class initializeGarage {};
            class initializeVirtualShop {};
            class initializeWeaponShop {};
            class copSearch {};
            class bountyReceive {};
            class searchClient {};
            class restrain {};
            class radar {};
            class questionDealer {};
            class licenseCheck {};
            class repairDoor {};
            class doorAnimate {};
            class fedCamDisplay {};
            class arrestDialog_Arrest {};
            class copOpener {};
            class seizeObjects {};
            class initGang {};
            class createGang {};
            class gangCreated {};
            class gangMenu {};
            class gangInvite {};
            class gangDisbanded {};
            class gangKick {};
            class searchMyGang {};
            class atmMenu {};
            class buyClothes {};
            class changeClothes {};
            class clothingMenu {};
            class clothingFilter {};
            class vehicleShopMenu {};
            class weaponShopMenu {};
            class weaponShopSelection {};
            class weaponShopBuySell {};
            class lockpick {};
            class spikeStrip {};
            class jerryRefuel {};
            class refuelFuelcan {};
            class flashbang {};
            class boltcutter {};
            class blastingCharge {};
            class defuseKit {};
            class storageBox {};
            class chiptune {};
            class radarwarner {};
            class tracker {};
            class useAlcohol {};
            class usePainkiller {};
            class useDrugs {};
            class garageMenu {};
            class unimpound {};
            class sellGarage {};
            class bankDeposit {};
            class bankWithdraw {};
            class bankTransfer {};
            class safeInventory {};
            class safeOpen {};
            class safeTake {};
            class safeFix {};
            class vehicleGarage {};
            class taxiService {};
            class taxiPurchaseFare {};
            class announceRestart {};
            class chipboost {};
            class mapMarkers {};
            class emergencyEquip {};
            class placeItem {};
            class siren {};
            class ctfSiren {};
            class ctfCapture {};
            class receiveKey {};
            class flashLights {};
            class insureVehicle {};
            class insertOrgan {};
            class radioMessage {};
            class repaintMenu {};
            class repaintVehicle {};
            class refuel {};
            class lockdownVehicle {};
            class unlockMenu {};
            class unlockLBChange {};
            class onPause {};
            class houseInteractionMenu {};
            class playerInteractionMenu {};
            class vehicleInteractionMenu {};
            class speedtrapInteractionMenu {};
            class houseSold {};
            class drugTest {};
            class showPassport {};
            class receiveKeychain {};
            class speedtrapFlash {};
            class playerNames {};
            class taxi {};
            class allergy {};
            class autosave {};
            class emptyfuel {};
            class equipCarrier {};
            class disableThermal {};
            class illness {};
            class noside {};
            class markerManager {};
            class market {};
            class paycheck {};
            class playerMarkers {};
            class racingSupport {};
            class radiation {};
            class refuelSupport {};
            class safezone {};
            class speedtrap {};
            class spikestripEffect {};
            class snow {};
            class teargas {};
            class textures {};
            class welcome {};
            class repackMagazines {};
            class marketViewDialog {};
            class openEmpMenu {};
            class empScan {};
            class empWarn {};
            class empExecute {};
            class empReceive {};
        };
    };
};
