#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum SocialActionTypes : uint8_t {
    SOCIAL_ACTION_ACCIO = 0,
    SOCIAL_ACTION_ACCIOMAXIMA = 1,
    SOCIAL_ACTION_AGUAMENTI = 2,
    SOCIAL_ACTION_AGUAMENTIMAXIMA = 3,
    SOCIAL_ACTION_ALOHOMORA = 4,
    SOCIAL_ACTION_ANIMAGUSFORM = 5,
    SOCIAL_ACTION_APOLOGIZE = 6,
    SOCIAL_ACTION_APPARITION = 7,
    SOCIAL_ACTION_ARRESTOMOMENTUM = 8,
    SOCIAL_ACTION_ARRESTOMOMENTUMMAXIMA = 9,
    SOCIAL_ACTION_ATTENDCLASSCLOWN = 10,
    SOCIAL_ACTION_ATTENDCLASSPILFER = 11,
    SOCIAL_ACTION_ATTENDCLASSSLEEP = 12,
    SOCIAL_ACTION_ATTENDCLASSSTUDY = 13,
    SOCIAL_ACTION_ATTENDCLASSTALK = 14,
    SOCIAL_ACTION_ATTENDCLUBPARTICIPATE = 15,
    SOCIAL_ACTION_ATTENDCLUBTALK = 16,
    SOCIAL_ACTION_AVADAKEDAVRA = 17,
    SOCIAL_ACTION_BATBOGEY = 18,
    SOCIAL_ACTION_BORED = 19,
    SOCIAL_ACTION_BROOD = 20,
    SOCIAL_ACTION_BULLYING = 21,
    SOCIAL_ACTION_BULLYINTERVENE = 22,
    SOCIAL_ACTION_CAPTURING = 23,
    SOCIAL_ACTION_CHEERING = 24,
    SOCIAL_ACTION_COLLISION = 25,
    SOCIAL_ACTION_COLOVARIA = 26,
    SOCIAL_ACTION_COMPLIMENT = 27,
    SOCIAL_ACTION_CONFRINGO = 28,
    SOCIAL_ACTION_CONFRINGOMAXIMA = 29,
    SOCIAL_ACTION_CONFUNDO = 30,
    SOCIAL_ACTION_CONJURATION = 31,
    SOCIAL_ACTION_CRIMEPERPIDENTIFIED = 32,
    SOCIAL_ACTION_CRIMERESPONSEAPPROVE = 33,
    SOCIAL_ACTION_CRIMERESPONSEBECKON = 34,
    SOCIAL_ACTION_CRIMERESPONSECOMPLAIN = 35,
    SOCIAL_ACTION_CRIMERESPONSECOWER = 36,
    SOCIAL_ACTION_CRIMERESPONSEFLEE = 37,
    SOCIAL_ACTION_CRIMERESPONSEINVESTIGATE = 38,
    SOCIAL_ACTION_CRIMERESPONSELAUGH = 39,
    SOCIAL_ACTION_CRIMERESPONSEOBSERVE = 40,
    SOCIAL_ACTION_CRIMERESPONSEREPORT = 41,
    SOCIAL_ACTION_CRIMERESPONSERETALIATE = 42,
    SOCIAL_ACTION_CRIMERESPONSESCOLD = 43,
    SOCIAL_ACTION_CRIMERESPONSESHOCK = 44,
    SOCIAL_ACTION_CRIMESCENEDISCOVERED = 45,
    SOCIAL_ACTION_DEBATE = 46,
    SOCIAL_ACTION_DEPULSO = 47,
    SOCIAL_ACTION_DEPULSOMAXIMA = 48,
    SOCIAL_ACTION_DEPULSOMT = 49,
    SOCIAL_ACTION_DESCENDO = 50,
    SOCIAL_ACTION_DIFFINDO = 51,
    SOCIAL_ACTION_DISILLUSIONMENT = 52,
    SOCIAL_ACTION_DRINK = 53,
    SOCIAL_ACTION_DRUNK = 54,
    SOCIAL_ACTION_EAT = 55,
    SOCIAL_ACTION_ENGORGIO = 56,
    SOCIAL_ACTION_EPISKEY = 57,
    SOCIAL_ACTION_EXPECTOPATRONUM = 58,
    SOCIAL_ACTION_EXPECTOPATRONUMMAXIMA = 59,
    SOCIAL_ACTION_EXPELLIARMUS = 60,
    SOCIAL_ACTION_EXPULSO = 61,
    SOCIAL_ACTION_EXPULSOMAXIMA = 62,
    SOCIAL_ACTION_EXTORTION = 63,
    SOCIAL_ACTION_EXTORTIONHIGH = 64,
    SOCIAL_ACTION_FAVORREQUESTED = 65,
    SOCIAL_ACTION_FIENDFYRE = 66,
    SOCIAL_ACTION_FINISHERBLACKPARTICLEEXPLODE = 67,
    SOCIAL_ACTION_FINISHERCRYSTALSHATTER = 68,
    SOCIAL_ACTION_FINISHERDEEPFREEZE = 69,
    SOCIAL_ACTION_FINISHERFIERYSEND = 70,
    SOCIAL_ACTION_FINISHERFLASHSEND = 71,
    SOCIAL_ACTION_FINISHERPETRIFICUSTOTALUS = 72,
    SOCIAL_ACTION_FINISHERSCARABBURST = 73,
    SOCIAL_ACTION_FINISHERSPIDERBURST = 74,
    SOCIAL_ACTION_FINISHERSUPERSLAMS = 75,
    SOCIAL_ACTION_FINITE = 76,
    SOCIAL_ACTION_FLIPENDO = 77,
    SOCIAL_ACTION_FRIENDLYCONVERSATION = 78,
    SOCIAL_ACTION_GIVEGIFTGENERAL = 79,
    SOCIAL_ACTION_GIVEGIFTROMANTIC = 80,
    SOCIAL_ACTION_GLACIUS = 81,
    SOCIAL_ACTION_GLACIUSMAXIMA = 82,
    SOCIAL_ACTION_GOSSIP = 83,
    SOCIAL_ACTION_GREET = 84,
    SOCIAL_ACTION_HAIL = 85,
    SOCIAL_ACTION_HERBOLOGYHERBHARVESTED = 86,
    SOCIAL_ACTION_HERBOLOGYHERBPLANTED = 87,
    SOCIAL_ACTION_HORSEPLAY = 88,
    SOCIAL_ACTION_HOUSEARMORDESTROYED = 89,
    SOCIAL_ACTION_HOUSEARMORREPAIRED = 90,
    SOCIAL_ACTION_HOUSEPOINTSGAINED = 91,
    SOCIAL_ACTION_HOUSEPOINTSLOST = 92,
    SOCIAL_ACTION_IMPERIUS = 93,
    SOCIAL_ACTION_INCARCEROUS = 94,
    SOCIAL_ACTION_INCENDIO = 95,
    SOCIAL_ACTION_INCENDIOMAXIMA = 96,
    SOCIAL_ACTION_INSTANTSCALPING = 97,
    SOCIAL_ACTION_INTIMIDATE = 98,
    SOCIAL_ACTION_INTRUSIONHIGH = 99,
    SOCIAL_ACTION_INTRUSIONINPROGRESSHIGH = 100,
    SOCIAL_ACTION_INTRUSIONINPROGRESSLOW = 101,
    SOCIAL_ACTION_INTRUSIONINPROGRESSMEDIUM = 102,
    SOCIAL_ACTION_INTRUSIONLOW = 103,
    SOCIAL_ACTION_INTRUSIONMEDIUM = 104,
    SOCIAL_ACTION_INTRUSIONTRIVIAL = 105,
    SOCIAL_ACTION_INVESTIGATE = 106,
    SOCIAL_ACTION_LEVIOSO = 107,
    SOCIAL_ACTION_LEVIOSOMAXIMA = 108,
    SOCIAL_ACTION_LUMOS = 109,
    SOCIAL_ACTION_LUMOSMAXIMA = 110,
    SOCIAL_ACTION_MEALTIMECHAT = 111,
    SOCIAL_ACTION_MEALTIMESOCIALIZE = 112,
    SOCIAL_ACTION_MEALTIMESTASH = 113,
    SOCIAL_ACTION_MISSIONACK = 114,
    SOCIAL_ACTION_MISSIONGOSSIP = 115,
    SOCIAL_ACTION_MOCK = 116,
    SOCIAL_ACTION_NAP = 117,
    SOCIAL_ACTION_OBLIVIATE = 118,
    SOCIAL_ACTION_OBSERVE = 119,
    SOCIAL_ACTION_OCCUPATIONMAJOR = 120,
    SOCIAL_ACTION_OCCUPATIONMINOR = 121,
    SOCIAL_ACTION_OCCUPATIONPRIMARY = 122,
    SOCIAL_ACTION_OCCUPATIONSLACKING = 123,
    SOCIAL_ACTION_OPPUGNO = 124,
    SOCIAL_ACTION_OPPUGNOMT = 125,
    SOCIAL_ACTION_PHYSICSTRIVIAL = 126,
    SOCIAL_ACTION_PICKPOCKETHIGH = 127,
    SOCIAL_ACTION_PICKPOCKETINPROGRESSHIGH = 128,
    SOCIAL_ACTION_PICKPOCKETINPROGRESSLOW = 129,
    SOCIAL_ACTION_PICKPOCKETINPROGRESSMEDIUM = 130,
    SOCIAL_ACTION_PICKPOCKETLOW = 131,
    SOCIAL_ACTION_PICKPOCKETMEDIUM = 132,
    SOCIAL_ACTION_PIERTOTUMLOCOMOTOR = 133,
    SOCIAL_ACTION_PLAYERCHAT = 134,
    SOCIAL_ACTION_PROTEGO = 135,
    SOCIAL_ACTION_PROXYCHAT = 136,
    SOCIAL_ACTION_REDUCIO = 137,
    SOCIAL_ACTION_REPARO = 138,
    SOCIAL_ACTION_REPAROMAXIMA = 139,
    SOCIAL_ACTION_REVELIO = 140,
    SOCIAL_ACTION_ROMANTICCONVERSATION = 141,
    SOCIAL_ACTION_SINGLEBUTSOCIAL = 142,
    SOCIAL_ACTION_SLEEP = 143,
    SOCIAL_ACTION_SPELLRESPONSE = 144,
    SOCIAL_ACTION_SPOTOTEA = 145,
    SOCIAL_ACTION_STATIONSPECIFIC = 146,
    SOCIAL_ACTION_STUDY = 147,
    SOCIAL_ACTION_STUPEFY = 148,
    SOCIAL_ACTION_SWEEPING = 149,
    SOCIAL_ACTION_TABOOGAMEOVER = 150,
    SOCIAL_ACTION_TABOOHIGH = 151,
    SOCIAL_ACTION_TABOOMEDIUM = 152,
    SOCIAL_ACTION_TARANTALLEGRA = 153,
    SOCIAL_ACTION_THEFTHIGH = 154,
    SOCIAL_ACTION_THEFTINPROGRESSHIGH = 155,
    SOCIAL_ACTION_THEFTINPROGRESSLOW = 156,
    SOCIAL_ACTION_THEFTINPROGRESSMEDIUM = 157,
    SOCIAL_ACTION_THEFTLOW = 158,
    SOCIAL_ACTION_THEFTMEDIUM = 159,
    SOCIAL_ACTION_TRANSFORMATION = 160,
    SOCIAL_ACTION_TRANSFORMATIONOVERLAND = 161,
    SOCIAL_ACTION_TRIPJINX = 162,
    SOCIAL_ACTION_UNAVAILABLE = 163,
    SOCIAL_ACTION_UNIFIEDTRANSFORMATION = 164,
    SOCIAL_ACTION_VANISHMENT = 165,
    SOCIAL_ACTION_VIOLENCEGAMEOVER = 166,
    SOCIAL_ACTION_VIOLENCEHIGH = 167,
    SOCIAL_ACTION_VIOLENCELOW = 168,
    SOCIAL_ACTION_VIOLENCEMEDIUM = 169,
    SOCIAL_ACTION_VIOLENCETRIVIAL = 170,
    SOCIAL_ACTION_WE_LOOSESNITCH = 171,
    SOCIAL_ACTION_WE_RAINONME = 172,
    SOCIAL_ACTION_WE_SPECIALDELIVERY = 173,
    SOCIAL_ACTION_WE_SUPERSMASH = 174,
    SOCIAL_ACTION_WINDOWSHOPPING = 175,
    SOCIAL_ACTION_WINGARDIUM = 176,
    SOCIAL_ACTION_WINGARDIUMMAXIMA = 177,
    SOCIAL_ACTION_COUNT = 178,
    SOCIAL_ACTION_MAX = 179,
};
#pragma pack(pop)