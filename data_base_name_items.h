﻿/**********************************************************************************************************
    ELEX-ELEX2-Geting-All-In-Game-Items Version 1.0. A program for geting all inventory items of
    the game ELEX 1 and 2. Used to enumerate all in-game inventory items and replace the old
    inventory item with the new item received.

    Copyright (C) 2023  Maxim Shershavikov
    This file is part of ELEX-ELEX2-Geting-All-In-Game-Items.

    ELEX-ELEX2-Geting-All-In-Game-Items is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by the Free Software Foundation,
    either version 3 of the License, or (at your option) any later version.

    ELEX-ELEX2-Geting-All-In-Game-Items is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along with this program.
    If not, see <https://www.gnu.org/licenses/>. Email m.shershavikov@yandex.ru

    To read a copy of the GNU General Public License in a file COPYING.txt, to do this, enter 3 at
    the beginning of the program.
**********************************************************************************************************/

#pragma once

#include <map>
#include <string>

std::map<std::string, std::string> name_items_elex2 = {
    {"549916eb54d9559145cda08f0c63b412", "Small Healling Potion"},
    {"fd13010ea70482a54c0e7a18879244b8", "Damaged Enforcer Blade"},
    {"c29c846608840bae4c9efdaca05faf1a", "Steel Skin Chem Recipe"},
    {"dbcc93956e4dba8f482b407d84503fe0", "Troll Root"},
    {"b1ac8b842d5814b84d116ac96258630a", "Damaged Crossbow"},
    {"6dca6c67b3bbfaaa4e687edb4c418e89", "Damaged War Crossbow"},
    {"462d6112b818f1804b63623deb077bb1", "Damaged Grenade Launcher"},
    {"92c195f9040f03a34127cd743a0b5931", "Plasma Cannon MK2"},
    {"65bb35acf2ef54b94746a5881dd60f91", "N/A: IT_MF_COLOSSUSROBOTGUN"},
    {"6d230b292ae0a89b42bbf13189f54668", "Photo Of My Son"},
    {"7ad8e30c092e2a8b4bca28bd0222242a", "Green Key"},
    {"1de2a20ae2e3218446a8d009a1c91f57", "N/A: IT_BODY_TUNINGLVL30 (1)"},
    {"d26d83228fcf62be4dbab88c02fd7965", "Call For Blood"},
    {"9051ea397cb6d19c432e3eddeef1276c", "Seeker"},
    {"8f03f11d2134b28f42c75ec27873525f", "Fang"},
    {"82c08c5ec8e1f48d45e90cff20418f52", "Hacker"},
    {"896c61155a042c8f462ff25df9b376a8", "N/A: IT_1H_AXE_05"},
    {"31464078c47bd2ad4e2c8e6b5bab6d3f", "Sword"},
    {"8f75039d258b3d9640a005d2eb8d0cb1", "Damaged Warlord Sword"},
    {"42bc0b04b788de8d4acb89294c2c5abc", "Loot Instructions"},
    {"08a066aa3f0be5864b45b183f8153409", "Lifeblood"},
    {"882ca21d3dbd1c9a4b6411666e29c001", "Acolyte Blaster"},
    {"f36d2f64dc6a5080489c9c02c985d6c7", "Scrap"},
    {"785c06470d612f87446b0ec6efb0e113", "Picture Of The Ocean And The Sun"},
    {"0e0a84b947bfaca54f686eb6f0f3fc5d", "Heal"},
    {"da129f750fe364834ed64d7b1e2408ec", "N/A: IT_1H_SWORD_BSK_02"},
    {"d3ee3b44fab604974183409895fc828b", "Good Cletic Armor"},
    {"4cc8974e6b6ef58448e019c5cd23d888", "Slugthrower Ammo Blueprint"},
    {"4599a8418f48a89741d46a653b3dee2a", "Garlic Bread"},
    {"71f7c827137ee9bc48ea0fdac69f09ce", "Large Bag Of Elexit"},
    {"a909bdda6cc9a8a1452eff9f46821764", "Acid Gland"},
    {"cf4292f8a0e03f974d89a5eae9406257", "N/A: IT_1H_TUNINGLVL40 (1)"},
    {"d23d06988c7bdf894374cb5bb31cfee8", "N/A: TPL_WPN_1H_SHIELD_MOR_02_L1"},
    {"faab291cb6c881bb462fbcb214ed5da3", "Enhanced Sword"},
    {"80c799ef826932914a847095b01db263", "Picture Of Balloons"},
    {"2b9d24cdcf804a8b4e658c8480de819e", "Buckshot"},
    {"a45ff09b3873a4be47b904e423b69f3f", "Hunting Bow"},
    {"6a2289f3bf0284a744b36a3327a5691b", "Enhanced Leadspreader"},
    {"e7bc8ed2a8ee7f924fa95e5e3bb8d257", "Excellent Morkon Armor"},
    {"d99e0a84edcb72bd44d2f4c99cf760fb", "Spell"},
    {"26b0b684fad01faf4262e2da710f0d7d", "Damaged War Axe"},
    {"3470736e4cf8febe4a81cf8001d10cde", "N/A: TPL_WPN_1H_SHIELD_ALB_04_L1"},
    {"7b7c83f3abad258445e44a7e1e1004ec", "Small Elex Drink Recipe"},
    {"6e3603949013ad8741826bd5a614e3a8", "Damaged Persuader"},
    {"0f6752bfd5e3a49541662b5e8c1f89de", "Steel Net"},
    {"4f50aa4ed52e26be4dd0f90324a53608", "Mace MK3.1"},
    {"950a1bc362bda29f4e1ac46ad0848a39", "N/A: IT_1H_SWORD_NEUT_10"},
    {"154d4a68f976e3bf4255fdd1a616af0b", "N/A: IT_2H_HAMMER_05"},
    {"3ad27cf3469a95bb4fbfc01a11ed0164", "Tissue Sample"},
    {"c3645c78bc0b5b8b476096bf5132c314", "Stolen Cultivator Safe 3"},
    {"eff78ea4ae0cc9b2428ca162cc3638d7", "Enhanced Vault Cannon"},
    {"a9dd1e6b4e7dffbe4a1c9eaa388bc9cc", "Mana Plant"},
    {"a2a6f63ba36fcc8440032726a8620543", "Damaged Stormblaster"},
    {"e570df654ffd94b74c5b1e55edc05107", "Very Large Bag Of Elexit"},
    {"012d816e5edeaba841b6cb4da063603a", "Rubber Soup Recipe"},
    {"cfdefa891e8dc79d429a329621c0156b", "Laser Rifle MK2"},
    {"5581295f291ee1a74d10a473b708c70a", "Map Piece 02"},
    {"4405035731e291a54c60c5ce7d9f88b7", "Surveillance Log 1"},
    {"1b311a56da8129b34bca11f9aed4a8c4", "Enhanced Twin Axe"},
    {"c8171f120a0b758a40e16e99ef5fb903", "Bone"},
    {"0ff6e521e2a3b7884be03583cdfd0a94", "Botany Book 2"},
    {"a9d07be51e0b3baa486afee0cc37fc20", "Bolts"},
    {"408283ef54fb24a149c63a9dba2a4967", "N/A: IT_1H_AXE_10"},
    {"5f0c8456d21090b549a2168e386d129d", "Grimy Key"},
    {"20496ffcc7f505ac4b19aafdc0c4cd60", "Chewing Gum"},
    {"27ee7204dc14af8b4c8949c46da0aaf3", "Damaged Warrior Axe"},
    {"f54e6995199445a045cb299c8dc86202", "Gold Ore"},
    {"af7f15b9d0e554a34764b98fb6dc8f06", "Damaged Heavy Slugthrower"},
    {"203534a18c31199946b716b4b655e220", "Enhanced Beard Axe"},
    {"7925cd6cc30b9680469439bf96a147df", "Bastard Sword"},
    {"97a4bc61e23e2a85451a5ea9ebd69cd3", "Laws Of Goliet"},
    {"a9c01df2be10c6944b617f96f4ee25ff", "Good Skyand Pants"},
    {"413f5f2b914d25b1485b5130fbbf2069", "Striker's Notebook"},
    {"56ed463186ab2ca7417e732929a6214d", "Standard Cleric Pants"},
    {"af0e4dc94d13048e4ac0f9bf8262e6b9", "Enhanced Stormblaster"},
    {"f00aeba399afc0b842bc0f628424e7fc", "Warhammer"},
    {"69acaf3e8477239d468a85b7bf345980", "Enhanced Hunting Bow"},
    {"17dbd6141deeba824741610f415416ff", "Secret Note"},
    {"2fa24f3ce1c899824cec676ae65c9973", "Albs' Strategic Plans"},
    {"40488f1a8635c0bc410a4a8cd243ff86", "N/A: IT_1H_SWORD_NEUT_08"},
    {"f96cbdadafc2068d46540bd62e545e19", "Excellent Cleric Helmet"},
    {"2777ee648851368a4aead37fe3a52be2", "Enhanced Captain Sword"},
    {"b4db4ef1326c2c9e4c87ba2a5dd306a5", "Damaged Harpoon"},
    {"2ab72d0259dbcab9448d325e00e64f47", "Ear"},
    {"3e0e3320e3182abe4529f916f59e5c5d", "Excellent Berserker Pants"},
    {"b29e277092a3dc8b40760841bef3ac6f", "Good Rebel Pants"},
    {"0108cefb30596ba148c5f3a149e9762a", "Twin Axe"},
    {"21ae756c2a1252af4575bd4ac06be51d", "N/A: IT_1H_TUNINGLVL10 (1)"},
    {"10bbbd6ed0d726bc4a530722fd7c65ee", "Dirty Letter"},
    {"cf566e225179a9b249656ebf7aefa0c5", "Rusty Key"},
    {"dc9053e666488f814418da9fa7491b28", "Cultivator Shield"},
    {"669f82c47c8e11b445e27046ff2cd871", "Troll Heart"},
    {"2254567f8c79b5bf4f9905ed08c0f561", "Photo Of Mining Facility"},
    {"82e4beff09b9e0924fe05ea34cfd8456", "Excellent Alb Helmet"},
    {"629207c00872f68e4e878787dedd1793", "Enhanced Savior"},
    {"bc6dabeb3106abab49f6add8f24f8842", "N/A: IT_1H_AXE_08"},
    {"378651dc294f99904402459c3ff9bc0c", "Woodcutter's Axe"},
    {"cf84e09c82eed49a49755ed47fe3880e", "Prayer Book Of Oblivion"},
    {"e367a3f615e497944cf6e928dfe23233", "Scrappy's Chest Key"},
    {"be274ba0a707df93472b224015923db2", "Morkon Axe"},
    {"361312c7c0176e814791ff4bcbedf81e", "Polished Symbol Of Calaan"},
    {"50f122f2bca691974b7783cae1d05673", "Excellent Rebel Pants"},
    {"daf93640fe9afda84564f927599db562", "Old History Book 2"},
    {"a20bb2c711ecb2b544214b85f7449fa0", "Small Healing Potion"},
    {"5e3a4bed76f2698345ce81d3ad547107", "Berserker Specialization"},
    {"ec86b1fd1fff01b74209d209cceabc25", "Jackhammer"},
    {"f3b505cb5baccf8d4b2c2c110f1ccad5", "Warrior Potion"},
    {"b294d2eb18ad80a24413064426c67bd9", "Mace MK2"},
    {"20970792547a50a84b90ef84bda755e8", "Black Lotus"},
    {"b44d99a704b423844d2263a3ba4846eb", "2H Test Axe"},
    {"ad003b21922bfebe4e84f69693923382", "Enhanced Rail Hammer"},
    {"b5d0b43bf17e5eba49bc99bb2425e254", "N/A: IT_1H_SWORD_BSK_05"},
    {"908a2346614025a8487a799f8dec06a8", "Simple Sword"},
    {"26a40844ef4f50b5455c3936986ede49", "N/A: IT_2H_AXE_02"},
    {"df8180cfff4398a949130f2879e084ca", "Production Log"},
    {"ee23420c3f3f138f41666e3d52d739df", "Slaughter Axe"},
    {"51eb6ec23fc1a9aa4e5dbb0c959af41a", "Sphere Edge"},
    {"cea8e320ace742a247ed81dcaf631616", "Metal Scrap"},
    {"79416bdaa6dff0974b8f8cce0b207d25", "Lamp"},
    {"ddb2d3df43b27e8c4eaf3b9631b43403", "N/A: TPL_WPN_1H_SHIELD_MOR_05_L1"},
    {"390f656a6d3300af4c0e2089ed42bc38", "Note"},
    {"c6349b1a0162ce9d480526f8eef915d9", "Nail"},
    {"a2bc79fb11383fb64c775a6ad5e58747", "Small Notebook 1"},
    {"fe8c9066f4dc9bb34ce9b428845dd625", "Stolen Cultivator Safe 1"},
    {"254ff0d7bcdfcf9549f0df73d36dbfdb", "Scrap"},
    {"c19dee8403dcf6a94e026ef776023b8b", "Large Rubble"},
    {"5c2da3f5478b01a44161d5b0b4f859dc", "Fried Meat"},
    {"8e8e6186ff0c5cb2404c8948d1924460", "Garlic"},
    {"b6479a6980361b954777496d7a902210", "Damaged Mace"},
    {"1379677158724c9a447dc75e524629ea", "Enhanced Captain Axe"},
    {"c25dd9306f26728d454468bc62acc4f2", "Plastic Ring"},
    {"1d5aa8a48ef953bf4842f2df5b7e7a59", "Very Cood Berserker Pants"},
    {"6e8837b0e515799c48d6e4bb326301aa", "Raavac's Commandment 3"},
    {"1e5986e8e6e811b04bca1055c8d1faa8", "Axe"},
    {"f431d175324d589141447e6c56b28de8", "Thunderclap"},
    {"19dd9e8030488db441291ac1fcb35711", "Damaged Patriarch Axe"},
    {"d42901e56c45158f447b72a25038449b", "A Final Word"},
    {"5af5be656406cd8d4cacbb40d5ba704a", "My Sixth Sense"},
    {"8af966778503f79b47e366d060a91c5e", "N/A: IT_WRI_LETTER_DATAPAD_DUMMY"},
    {"d86c9e0d646d23ab4662e6961c3d0db2", "Moonshine"},
    {"47243c424583af974432348bed5ef2a2", "Enhanced Slaughter Club"},
    {"8ac40022d17bdc904dcc90a4da07cd6a", "Picture Of a Cherry Tree"},
    {"202dc092133bbf8c413230c4e52f0e72", "Potion Of Dexterity Recipe"},
    {"9d3e7b8f7b1705ac4fc84b5a1da7530c", "Collector's Recordings"},
    {"d85bcca8f1743d8f43df82708f9a67f5", "Alb's Diary"},
    {"e39e49f116d10bae473d75f314dc3546", "Damaged Mace MK2"},
    {"45c9d8d171baaea8427862f23c9391cd", "Enhanced Great Axe"},
    {"988bb443acbc51ba41e6c5bde1799718", "Enhanced Cultivator Blade"},
    {"418560e86b2e17ad42d118ab1c85fe62", "Raw Rat Meat"},
    {"35acd93ece6265ab4f5dee4469ef48cc", "Warrior Bow"},
    {"4ab37d624cd9e596496177bac724c38d", "Valuables"},
    {"22d91e74f67222bd4826af8db610ae82", "Wake Up!"},
    {"80a5057a57681bb64a46d90940e29619", "Runner"},
    {"1d61b65736168bbe41de9ed9a37fb1a8", "Excellent Cleric Armor"},
    {"2dc988fa7fc2db844f292c7f8ed10f69", "Enhanced Great Bow"},
    {"4ae1596679571eb94a023385f8152afe", "N/A: IT_2H_HAMMER_01"},
    {"f91a0a4d4660bca8490dc37aa54c1773", "N/A: TPL_WPN_1H_MACE_ALB_03"},
    {"c014c9b51d4a7da74379773eb1c9b279", "Damaged Dual Axe"},
    {"01c5367ee3e1f88a42936cdc8b8e1d6c", "Simple Berserker Pants"},
    {"dff0ab2c6ccf30ad451a7d711a54e1a9", "Blood-Stained Journal"},
    {"41f2f73efc4e11a040afdc253e5ac770", "Damaged Slaughter Axe"},
    {"49bf18db83186998475e7b2a3852e4d9", "Car"},
    {"d749e3be9d5dadbc4a37941b98ae391c", "Morkon's Report"},
    {"d29c8eeb8fe37bab410ac563faf885e9", "Leadspreader"},
    {"6fea9fe103a3b49043a884c96775cd90", "Excellent Alb Armor"},
    {"75a68de9b181cb9b4302cb12bf6eb76b", "Scrap"},
    {"826f62ec75dba88241047c9889c308bb", "Cultivator's Loaf"},
    {"38118e854f26fabd4ed9f4c6d48c7ba7", "Endurance Modifier"},
    {"efd511a0c6b7cf8d463081ed0fbc2c20", "Business Card"},
    {"4859880a5c577bbe40177363f98661eb", "Calaan's Light"},
    {"d4ec0a60946b188d4ae09ffd6dcf58a2", "Damaged Captain Sword"},
    {"bc027a975a03df9f40d0df3156dc9d51", "Holoprojector"},
    {"d01a15390110cf85441610301639f389", "N/A: IT_COMBATHELPERSWORD_1H"},
    {"c7b345bb523b58b246f6e2eb4006c41e", "N/A: IT_WPN_PROXY_2H_AXE_05"},
    {"934e178ee9c7fd9f41c58364398892dc", "Damaged Battleaxe"},
    {"c782a5a1ae8900a547142a68f3a67d91", "Damaged Runner Crossbow"},
    {"13704c77484fe09c42f1a7ad3834ea94", "N/A: IT_1H_SWORD_OUT_02"},
    {"49d2a307cf1c6f89401b0887fae46971", "Very Good Alb Armor"},
    {"e39f1673c3843ea54dc6ea450f356e2c", "N/A: TPL_WPN_1H_MACE_BSK_01"},
    {"462d7c9ec3ce7e984f019726abf9acc3", "Damaged Warlord Axe"},
    {"8ec53051a2cc26a34bf75178e4cf9b06", "N/A: IT_BODY_TUNINGLVL25 (1)"},
    {"bac5c13fb445c7b0411d3e866c0629ad", "Map Piece 14"},
    {"04318e46fdc681984c39675b0e2637b2", "Reaver's Message From Tomsontown 1"},
    {"286f5a82db62f3b84485af61367d72f3", "N/A: IT_JETPACK_FEMALE"},
    {"2649672efe897b944b571de9a0c5684a", "N/A: IT_1H_TUNINGLVL35 (1)"},
    {"6afd325f6cb5909d4844b277cdfe4e06", "Standard Morkon Pants"},
    {"9eb66bb486e231864fe8bda285b85945", "Enhanced Basher"},
    {"53f28eed6018e2954310c11a65235f85", "Simple Bow"},
    {"18ec77cfb1360aa146e434b3679deb5e", "Mighty Healing Potion"},
    {"55e00f60c63991984de8dc2d48eecbec", "Iron Lung Chem Recipe"},
    {"b4cf9ca0822485a244c40479bc3fd3fb", "Standard Cleric Helmet"},
    {"54ff6e7db5c297974b9730d4adc31ae9", "Water"},
    {"5b5aad9d49ecbab748dc1954616e44ea", "N/A: IT_1H_SWORD_NEUT_04"},
    {"b9782b0e2d2e7bb044947ebd544bc7aa", "Enforcer Sword"},
    {"c4810d03fb840bac4785aa8a7e557816", "Plasma Cells"},
    {"9d42fdd07cbac081411387a7e6a6b4bc", "Potion"},
    {"766be4dcac726ebf4610aab0839008ce", "Enhanced Scout Blade"},
    {"5db3871055c8ce95468053e8e56d17ea", "Strong Healing Potion"},
    {"865f37082b8c39864c5c654e697fa1e3", "Damaged Alb Shield"},
    {"87661d0afd4e29864dde918e507b3f06", "Very Good Skyand Helmet"},
    {"9fd83866653b0cbb44f2dd269bbc8ac7", "Frostshroom"},
    {"951aad052cb5a38a438a47f9709c977c", "Work Instructions"},
    {"0493427ce4f570b543d9ca75889d211f", "Damaged Speargun"},
    {"ad9ab2e39770869548f8f6b39a9fe5ae", "N/A: IT_1H_AXE_04"},
    {"f2f1b6bdf6055fa241b2b7f6ca3054f1", "Energy Broth"},
    {"1cce4dd634596e924fb9d8ba560e294e", "Damaged Runner Axe"},
    {"0bf6dce79c29e29e4df6fc7b718d53df", "Old History Book 1"},
    {"f387864de3b0618f486bd3e9d9f6c1e8", "Picture Of a Meadow With Flowers"},
    {"d75bb8ece060268145174ae0fe1fc8d8", "Fire Fist"},
    {"729c8ea1f0db4f874a83f53f94a4985c", "N/A: IT_1H_SWORD_BSK_01"},
    {"621f27eb3652b4ae454b59d09d24dda3", "N/A: TPL_WPN_1H_SHIELD_MOR_07_L1"},
    {"93e50924bb6730a84089f630a4da48e7", "World Heart Specialist Literature"},
    {"054d92627b1bfebc42defdc0beb1e843", "Cry For Help"},
    {"b82ec54770eef18f46b4f83249083c5f", "Broom"},
    {"480f6ccf3c474382425bf6b1a75709fc", "Marksman Potion"},
    {"5930dd13c61e678340699d0c2e336dae", "Standard Cleric Shirt"},
    {"47e7489ceecd5489406b94cd56965c5f", "Safety Instructions"},
    {"1e82a85e95d573b54dac1bf22c03bf1c", "Skinny's Special Soup"},
    {"25a6dff3651c069643d718e6d050cbb9", "Very Good Rebel Hat"},
    {"3987389bd020daa145d1a3804a8a947f", "Good Outlaw Pants"},
    {"86f599478539d8864013263717884632", "N/A: IT_BODY_TUNINGLVL90 (1)"},
    {"d99955481ce133ba451124b9f58ed267", "N/A: TPL_WPN_1H_MACE_MOR_02"},
    {"7272bcc032a9a1a04ec3a5812172097f", "Enhanced Vandal Axe"},
    {"346635f4bf640c9f47e06e5ad8fc3e18", "N/A: TPL_WPN_1H_SHIELD_BSK_06_L1"},
    {"925ceb998e3c13974dd2b18108728c15", "N/A: IT_MF_TROLLRANGED"},
    {"4c126c66faae60964bf208833f030045", "Damaged Legate Sword"},
    {"b79ab22e5e4bb08b41f46afd612f568b", "Cannon Ammunition"},
    {"9c6b45748113d5b047642ae5b842030f", "Mission: Free Roads"},
    {"e7c8c05778f8d38f47c6a053435b8eba", "Leather"},
    {"76811d58951e4fbf4c2775c256d9cb58", "Enhanced Serrated Shield"},
    {"f580bae575d0afab4c2fbafc22bc3aa1", "Chewed Piece Of Paper"},
    {"f78cf158efcb02b64a3d372c6a3bcc63", "Object Lesson"},
    {"0e332c1fadde6e9e415585592d4a8d64", "Thumper"},
    {"b2b449e48ceb5b83407936216f625a39", "Butter Knife"},
    {"1180b82539a09f8e441d57ff3352b043", "Simple Cleric Pants"},
    {"f94295a8059ca1994ec150f03575ecdf", "Enhanced Grenade Launcher"},
    {"f7f1bb0afe9649a14ab2dc601e5313ea", "Picture Of a Butterfly"},
    {"8a691b9e2796f09a4c8999cf69ce5661", "Reaver Note"},
    {"9285329493381d8243245e7ee025afa9", "Slugthrower"},
    {"f9d69d7a692a9c8f4ea5fd5b5bd21b78", "Standard Alb Pants"},
    {"415dd96cd1c1d28b4ee8bb9e92885db7", "Energy Shield"},
    {"3b178c8a5e874e8046b85e001e9f26b1", "Crumpled Note"},
    {"d414bf8cfe4ea28043a0300baed75d4a", "Neatly Written Letter"},
    {"32468eae3f70848b43c7d9f46de40877", "Laser Rifle PT3"},
    {"3c8b0361ac5b50bf46ffbb8eea2e9465", "Miner's Notes 4"},
    {"0e6699b45174e9a04772f375a21b65ed", "Picture Of a Red Car"},
    {"545cdbc0ee15d8934d914b9967a7df54", "Fisher's Notes"},
    {"3ac8448a2f4a36b949c9d677f9650d7b", "Improved Tranquilizer"},
    {"6ac83194560ae28f4200e2784ee9d4ca", "Enhanced Double Crossbow"},
    {"d5db2910b9a1ab9340c354d2e74d7eac", "Alb Sword"},
    {"badce087b7a330ba42d6ed4e2e0ac706", "Guardian"},
    {"5398beb4250eeb824d9bdbe4739f69cf", "Enhanced Acolyte Blaster"},
    {"e1f2b35608e8319448befb03ba28a5d6", "Laser Rifle MK3"},
    {"6f242624b6d67cb241c3e16e008e98d3", "Very Good Berserker Armor"},
    {"b54ad494ddfc249c46b81ec8bd62ad4f", "Strength Modifier"},
    {"6eca0776313959ae4cc07605bbefbb78", "Simple Outlaw Headgear"},
    {"139bf6020e8f29bf46cb81136b5ab7eb", "Map Piece 05"},
    {"dfe80c98129b4789461b72600ea16388", "Potato Saute Recipe"},
    {"f3de4e6b3f9eb2af43496ed514770389", "Lifeblood Chem Recipe"},
    {"373e522e77fde09d4c3f4b9a77f053fd", "Skibor's Special Food"},
    {"9155fbf37b82568b4a426379ffa8ddf9", "Small Mana Potion"},
    {"7044f567356991ba454b9a2f5ed47898", "Ale's Belongings"},
    {"845b119a5422eab44a4f22e7f22c4a0d", "Light Drone"},
    {"eb8530f32540b4a4404c61c80e0b659b", "Good Skyand Helmet"},
    {"e3379d535651a09b46c0b6f8523416ab", "Damaged Destroyer Axe"},
    {"9d4c81b6bc57a690422fda0df12f00a5", "Alb Gun"},
    {"d95155a6d65cce9f410fc1790b9cfcd4", "Large Horn"},
    {"c008d3a9ec94c48147f124e060e46359", "Bernhard"},
    {"51298c89591be3af440d698dbdb6775a", "Adventurer Specialization"},
    {"fa901e16e38821b74562d8741f736558", "Large Blue Gemstone"},
    {"08fe53937ca3baa4421cb957877a6ecc", "Enhanced Double Barrel Shotgun"},
    {"b5f03524b5be63b345fd034fb63262c8", "Plant Pot"},
    {"9fed1c29f22c1dbb40add24d8181dae8", "Green Gemstone"},
    {"a583fe0e385a4e91473a21019e7b792d", "Bringer Of Blessings"},
    {"61d5485cd46dd3a24372a5212ddcc9ad", "Enhanced Warlord Sword"},
    {"a348ea27f425ef9d426bbd6131d320f8", "Mana"},
    {"40ace03fe07d5cb6457be9c4a79da756", "Simple Outlaw Shirt"},
    {"5c3bf10fba3d11904784315b09e7fcd8", "Legate Sword"},
    {"ac5bed0f6142ef994ba2887c8381f2e4", "N/A: IT_2H_AXE_05"},
    {"1b258d62a2e2419c45454debc63742ae", "Large Elex Drink"},
    {"a0b51c9b2f8d359c4e9f2ee9b044f944", "The Dollmaker's Diary 1"},
    {"256cbebccbc5eeb14cf7d25dcf4d181d", "N/A: TPL_WPN_1H_MACE_BSK_06"},
    {"62002b460d0680bb48fbc0bd6e697614", "Mace MK2.1"},
    {"c65fa773632cca89428fa94682d32382", "Skyand Blaster"},
    {"1a7a7f30e7a80a8f4ec2fba931c6cb60", "Good Alb Helmet"},
    {"2c38a91ff0325d9549e8e9f18924a464", "Reaver's Message 3"},
    {"d984e267cb89d8a24a905fa903f04349", "Complaint About Jax"},
    {"e23c1ff2eb0f1bad40a6c0bbcca6869b", "Enhanced Tunnel Cannon"},
    {"1eb3d2666f02c6b34e0f5eb8287a17f7", "Scrap"},
    {"7992b939f51d148d46c5bb2bfe388c37", "Rules Of Conduct"},
    {"7d3995fcae3a52934669df75739a414e", "Medium Healing Potion"},
    {"60f504f2f9f390b44e93f2b383d65a2d", "Simple Morkon Headgear"},
    {"8c49d36327b1658c44241b6d85c7e08c", "Damaged Sphere Blade"},
    {"2ac43a098e4d65a0420765422574884c", "Might Modifier"},
    {"8f8c20f181b9e08c41b023d6fec22801", "Astrid's Valuables"},
    {"e8fa919d5e60bcb145c8ad55593757a3", "Retrorockets"}
};

std::map<std::string, std::string> name_items_elex1 = {
    {"51a683b1b9174cb341f24af318ba5b7b", "Small Healling Potion"},
    {"ce200e40733e658849fc85c400587898", "Oil Lamp"},
    {"38030003e57a58804cfe4a635ec1bdb8", "Small Mana Potion"},
    {"15e8b1b48ed5458c406b42867cffd998", "Shotgun Shell"},
    {"b0489fb88be4958742ed2dd01715cacc", "Picklock"},
    {"c4da1938678c08a14b3aff59a102bbf3", "Canned Food"},
    {"062eff59b6813cae42070e43bd4e3f53", "Warrior's Sword 3"},
    {"2651713b457e4f9544b7c69dae163655", "Kaboom"},
    {"8f67280176978c894ac1104f7a7177fa", "Warrior's Fire Sword 3"},
    {"402634b020ea349e4d623b177a1f3e56", "Socketed Reaperblade 1"},
    {"69f5f782622260ba47c0a98b881834ea", "Warhammer 2"},
    {"d0d2aa6b506929b848fb74295f89507a", "PSI Dual Hammer 1"},
    {"f3e97e7a2b70bdbd444897ded86d2e8b", "Socketed Warrior's Sword 3"},
    {"b47d2574dd05bdb9447fabf18788e951", "Gold Nugget"},
    {"3397232efc53318d4983960f8d5e5db0", "Warrior's Sword"},
    {"4d68d9850d46e88142d27092ef349540", "Gore Slaughterblade 1"},
    {"fd91314062f66e9c4f92404807dab97e", "Metal Scrap"},
    {"6e0d39412a3f22ba4e7b295a6568be9d", "Nuclear Shredder 2"},
    {"142e7c1b0760ec924659d3d499092a37", "Reflector Reaper 2"},
    {"79f99b01d8d03c9149a770ab58cc40a1", "Warrior's Sword 1"},
    {"102e564fce1091ae443c143238be1b43", "Two-handed Ice Sword 1"},
    {"bd9007376b5834af4b18cf0cfda3535a", "Slaughterblade 3"},
    {"74d18f860524eabe4caaf20afcb33208", "Rocket Launcher"},
    {"c80283d70ddf4d8f402c567539683f3f", "Socketed Dual Hammer 3"},
    {"47ac65a3d3b28a964170c3b5925cbeab", "Electronic Scrap"},
    {"bf1422ad5d87b1bd429354e6d39b14ea", "Ripblade 2"},
    {"a319866d35743183435a371d9ea46d28", "Commander's Helmet"},
    {"b4474e294e84058a4a61931b96fa304a", "Iron Hammer 3"},
    {"8fefb645166b5c9248e121ae26131a1f", "Socketed Reaperblade 3"},
    {"7a892b793a1c1cb944f2f208c00113e7", "Metal Scrap"},
    {"381eef6523836ca744f454dd3abfbd42", "Poison Warhammer 1"},
    {"ea324b05678ece8a435127a985c7386d", "Casket"},
    {"dcd673985cef0f954e9403a3eda4a30b", "Toy Car"},
    {"f8760cc582634aae433b3ffdc6eb6b8d", "Grenade Launcher 2"},
    {"e8c43cd972f79cbb4b43ebfc5e2a1faf", "Modified Grenade Launcher 2"},
    {"a741ac075c310fb14530a19fd56ab3d7", "Casket"},
    {"a3d3f1670f8862994bdf286868070e7a", "Mana"},
    {"56d839d05af409b042cad57729bd6c0e", "Electronic Scrap"},
    {"9fa044dc50bce7bd497f296d0a5ab37d", "Warrior's Ice Sword 3"},
    {"f3afeac27681719f4de7071dd7a07376", "Gore Reaperblade 1"},
    {"4a9db85daf8194824cde085dfe76ecfc", "Recipe Explosive Rocket"},
    {"782228cccb9d54b940f7cfa68a50e23b", "Flamethrower Mark B 2"},
    {"9389c07cb1f06f9f43c00c5e76056eca", "Socketed Slaughterblade 1"},
    {"9084b66d951360a842f34e0ed7e65450", "Warrior's Fire Sword 1"},
    {"aa2eaace799cdf9b4656b0ab2cc9266d", "Recipe Explosive Grenade"},
    {"55ecbcbd1fcc7abf43279a81176aea04", "Reaperblade 2"},
    {"78c56a6562eadaa6493cd30d4c41e99f", "Blood Reaper 2"},
    {"639a12f0dd845c9c49726bfa66ac7e2c", "Flamethrower Type A 3"},
    {"731bb7d29d86219a4ce2ef4c1cd6fda8", "Reflector Reaper 3"},
    {"cbf0a68e288fe6a7456b94188fc748a1", "Slaughterblade"},
    {"3964f51ecda45589445d1faa6bbae017", "Recipe Radioactive Projectile"},
    {"1691ca4cf03e05b142cb20a5dd49e7a6", "Classic Sunglasses"},
    {"a92938a35e5cf4a84891b190e359fb56", "One with the Weapon"},
    {"5c19d96bff321a854e15920ef4c03b5a", "Flamethrower Mark B"}
};
