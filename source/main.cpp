#include <iostream>
#include "SaveDataFactory.h"

#ifdef __SWITCH__
#include <switch.h>
#endif

void dumpSaveInfo(SaveDataFactory::SaveFile* save) {
    printf("SaveDataCmn:\n");
    printf("    Inkling Gender: %u\n", save->SaveDataCmn.InklingPlayerModelType);
    printf("    Inkling Hair ID: %u\n", save->SaveDataCmn.InklingPlayerHairId);
    printf("    Inkling Pants ID: %u\n", save->SaveDataCmn.InklingPlayerSkinColorId);
    printf("    Inkling Eye Color ID: %u\n", save->SaveDataCmn.InklingPlayerEyeColorId);
    printf("    Equipped Weapon:\n");
    printf("        Main ID: %u\n", save->SaveDataCmn.EquippedWeapon.Main);
    printf("        Sub ID: %u\n", save->SaveDataCmn.EquippedWeapon.Sub);
    printf("        Special ID: %u\n", save->SaveDataCmn.EquippedWeapon.Special);
    printf("        Ink Turfed: %u\n", save->SaveDataCmn.EquippedWeapon.InkTurfed);
    printf("    Equipped Shoes: %u\n", save->SaveDataCmn.EquippedShoes);
    printf("    Equipped Shirt: %u\n", save->SaveDataCmn.EquippedClothes);
    printf("    Equipped Hat: %u\n", save->SaveDataCmn.EquippedHeadGear);
    printf("    Handheld Stick Sensitivity: %.1f\n", save->SaveDataCmn.HandheldStickSensitivity);
    printf("    Handheld Motion Sensitivity: %.1f\n", save->SaveDataCmn.HandheldMotionSensitivity);
    printf("    Detached Stick Sensitivity: %.1f\n", save->SaveDataCmn.DetachedStickSensitivity);
    printf("    Detached Motion Sensitivity: %.1f\n", save->SaveDataCmn.DetachedMotionSensitivity);
    printf("    Money: %u\n", save->SaveDataCmn.Money);
    printf("    Super Sea Snails: %u\n", save->SaveDataCmn.SuperSeaSnails);
    printf("    Octoling Gender: %u\n", save->SaveDataCmn.OctolingPlayerModelType);
    printf("    Octoling Hair ID: %u\n", save->SaveDataCmn.OctolingPlayerHairId);
    printf("    Octoling Pants ID: %u\n", save->SaveDataCmn.OctolingPlayerSkinColorId);
    printf("    Octoling Eye Color ID: %u\n", save->SaveDataCmn.OctolingPlayerEyeColorId);
    printf("    Is Octoling: %u\n", save->SaveDataCmn.IsOctoling);
    printf("SaveDataVss:\n");
    printf("    Level: %u\n", save->SaveDataVss.Level);
    printf("    Experience: %u\n", save->SaveDataVss.Exp);
    printf("    Star Count: %u\n", save->SaveDataVss.Stars);
    printf("    Rainmaker Rank: %u\n", save->SaveDataVss.RainmakerRank);
    printf("    Splat Zones Rank: %u\n", save->SaveDataVss.SplatZonesRank);
    printf("    Tower Control Rank: %u\n", save->SaveDataVss.TowerControlRank);
    printf("    Clam Blitz Rank: %u\n", save->SaveDataVss.ClamBlitzRank);
    printf("    MMR Data:\n");
    printf("        Turf War: \n");
    printf("            Power: %.5f\n", save->SaveDataVss.MMR[0].Power);
    printf("            Rating Deviation: %.5f\n", save->SaveDataVss.MMR[0].Rd);
    printf("            Volatility: %.5f\n", save->SaveDataVss.MMR[0].Volatility);
    printf("        Rainmaker: \n");
    printf("            Power: %.5f\n", save->SaveDataVss.MMR[1].Power);
    printf("            Rating Deviation: %.5f\n", save->SaveDataVss.MMR[1].Rd);
    printf("            Volatility: %.5f\n", save->SaveDataVss.MMR[1].Volatility);
    printf("        Splat Zones: \n");
    printf("            Power: %.5f\n", save->SaveDataVss.MMR[2].Power);
    printf("            Rating Deviation: %.5f\n", save->SaveDataVss.MMR[2].Rd);
    printf("            Volatility: %.5f\n", save->SaveDataVss.MMR[2].Volatility);
    printf("        Tower Control: \n");
    printf("            Power: %.5f\n", save->SaveDataVss.MMR[3].Power);
    printf("            Rating Deviation: %.5f\n", save->SaveDataVss.MMR[3].Rd);
    printf("            Volatility: %.5f\n", save->SaveDataVss.MMR[3].Volatility);
    printf("        Clam Blitz: \n");
    printf("            Power: %.5f\n", save->SaveDataVss.MMR[4].Power);
    printf("            Rating Deviation: %.5f\n", save->SaveDataVss.MMR[4].Rd);
    printf("            Volatility: %.5f\n", save->SaveDataVss.MMR[4].Volatility);
    printf("    Pair League Results:\n");
    int pair_league_index;
    for ( pair_league_index = 0; pair_league_index < 0x20; pair_league_index++ ) {
        if (save->SaveDataVss.PairLeagueResults[pair_league_index].Time != 0) {
            printf("        Pair League Results #%d:\n", pair_league_index);
            printf("            Time: %llu\n", save->SaveDataVss.PairLeagueResults[pair_league_index].Time);
            printf("            Players:\n");
            printf("                Player 1 NEX UID: 0x%llx\n", save->SaveDataVss.PairLeagueResults[pair_league_index].Players.Player1NexUid);
            printf("                Player 1 Name: %ls\n", save->SaveDataVss.PairLeagueResults[pair_league_index].Players.Player1SystemInfo.Name);
            printf("                Player 2 NEX UID: 0x%llx\n", save->SaveDataVss.PairLeagueResults[pair_league_index].Players.Player2NexUid);
            printf("                Player 2 Name: %ls\n", save->SaveDataVss.PairLeagueResults[pair_league_index].Players.Player2SystemInfo.Name);
            printf("            MMR Data:\n");
            printf("                Rainmaker: \n");
            printf("                    Power: %.5f\n", save->SaveDataVss.PairLeagueResults[pair_league_index].MMR[1].Power);
            printf("                    Rating Deviation: %.5f\n", save->SaveDataVss.PairLeagueResults[pair_league_index].MMR[1].Rd);
            printf("                    Volatility: %.5f\n", save->SaveDataVss.PairLeagueResults[pair_league_index].MMR[1].Volatility);
            printf("                Splat Zones: \n");
            printf("                    Power: %.5f\n", save->SaveDataVss.PairLeagueResults[pair_league_index].MMR[2].Power);
            printf("                    Rating Deviation: %.5f\n", save->SaveDataVss.PairLeagueResults[pair_league_index].MMR[2].Rd);
            printf("                    Volatility: %.5f\n", save->SaveDataVss.PairLeagueResults[pair_league_index].MMR[2].Volatility);
            printf("                Tower Control: \n");
            printf("                    Power: %.5f\n", save->SaveDataVss.PairLeagueResults[pair_league_index].MMR[3].Power);
            printf("                    Rating Deviation: %.5f\n", save->SaveDataVss.PairLeagueResults[pair_league_index].MMR[3].Rd);
            printf("                    Volatility: %.5f\n", save->SaveDataVss.PairLeagueResults[pair_league_index].MMR[3].Volatility);
            printf("                Clam Blitz: \n");
            printf("                    Power: %.5f\n", save->SaveDataVss.PairLeagueResults[pair_league_index].MMR[4].Power);
            printf("                    Rating Deviation: %.5f\n", save->SaveDataVss.PairLeagueResults[pair_league_index].MMR[4].Rd);
            printf("                    Volatility: %.5f\n", save->SaveDataVss.PairLeagueResults[pair_league_index].MMR[4].Volatility);
        }
    }
    printf("    Team League Results:\n");
    int team_league_index;
    for ( team_league_index = 0; team_league_index < 0x20; team_league_index++ ) {
        if (save->SaveDataVss.TeamLeagueResults[team_league_index].Time != 0) {
            printf("        Team League Results #%d:\n", team_league_index);
            printf("            Time: %llu\n", save->SaveDataVss.TeamLeagueResults[team_league_index].Time);
            printf("            Players:\n");
            printf("                Player 1 NEX UID: 0x%llx\n", save->SaveDataVss.TeamLeagueResults[team_league_index].Players.Player1NexUid);
            printf("                Player 1 Name: %ls\n", save->SaveDataVss.TeamLeagueResults[team_league_index].Players.Player1SystemInfo.Name);
            printf("                Player 2 NEX UID: 0x%llx\n", save->SaveDataVss.TeamLeagueResults[team_league_index].Players.Player2NexUid);
            printf("                Player 2 Name: %ls\n", save->SaveDataVss.TeamLeagueResults[team_league_index].Players.Player2SystemInfo.Name);
            printf("                Player 3 NEX UID: 0x%llx\n", save->SaveDataVss.TeamLeagueResults[team_league_index].Players.Player3NexUid);
            printf("                Player 3 Name: %ls\n", save->SaveDataVss.TeamLeagueResults[team_league_index].Players.Player3SystemInfo.Name);
            printf("                Player 4 NEX UID: 0x%llx\n", save->SaveDataVss.TeamLeagueResults[team_league_index].Players.Player4NexUid);
            printf("                Player 4 Name: %ls\n", save->SaveDataVss.TeamLeagueResults[team_league_index].Players.Player4SystemInfo.Name);
            printf("            MMR Data:\n");
            printf("                Rainmaker: \n");
            printf("                    Power: %.5f\n", save->SaveDataVss.TeamLeagueResults[team_league_index].MMR[1].Power);
            printf("                    Rating Deviation: %.5f\n", save->SaveDataVss.TeamLeagueResults[team_league_index].MMR[1].Rd);
            printf("                    Volatility: %.5f\n", save->SaveDataVss.TeamLeagueResults[team_league_index].MMR[1].Volatility);
            printf("                Splat Zones: \n");
            printf("                    Power: %.5f\n", save->SaveDataVss.TeamLeagueResults[team_league_index].MMR[5].Power);
            printf("                    Rating Deviation: %.5f\n", save->SaveDataVss.TeamLeagueResults[team_league_index].MMR[5].Rd);
            printf("                    Volatility: %.5f\n", save->SaveDataVss.TeamLeagueResults[team_league_index].MMR[5].Volatility);
            printf("                Tower Control: \n");
            printf("                    Power: %.5f\n", save->SaveDataVss.TeamLeagueResults[team_league_index].MMR[3].Power);
            printf("                    Rating Deviation: %.5f\n", save->SaveDataVss.TeamLeagueResults[team_league_index].MMR[3].Rd);
            printf("                    Volatility: %.5f\n", save->SaveDataVss.TeamLeagueResults[team_league_index].MMR[3].Volatility);
            printf("                Clam Blitz: \n");
            printf("                    Power: %.5f\n", save->SaveDataVss.TeamLeagueResults[team_league_index].MMR[4].Power);
            printf("                    Rating Deviation: %.5f\n", save->SaveDataVss.TeamLeagueResults[team_league_index].MMR[4].Rd);
            printf("                    Volatility: %.5f\n", save->SaveDataVss.TeamLeagueResults[team_league_index].MMR[4].Volatility);
        }
    }
    printf("    Plaza NPCs:\n");
    int plaza_npc_index;
    for ( plaza_npc_index = 0; plaza_npc_index < 0x19; plaza_npc_index++ ) {
            printf("        Plaza NPC #%d:\n", plaza_npc_index);
            printf("            Name: %ls\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].Name);
            printf("            Gender/ModelType: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].PlayerModelType);
            printf("            Hair ID: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].PlayerHairId);
            printf("            Skin Color ID: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].PlayerSkinColorId);
            printf("            Eye Color ID: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].PlayerEyeColorId);
            printf("            Equipped Weapon:\n");
            printf("                Main ID: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].Weapon.Main);
            printf("                Sub ID: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].Weapon.Sub);
            printf("                Special ID: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].Weapon.Special);
            printf("                Ink Turfed: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].Weapon.InkTurfed);
            printf("            Equipped Shoes:\n");
            printf("                Gear ID: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].Shoes.Id);
            printf("                Level: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].Shoes.Level);
            printf("                Slots: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].Shoes.Slots);
            printf("                Main Ability ID: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].Shoes.MainAbility);
            printf("                Sub Ability 1 ID: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].Shoes.SubAbility1);
            printf("                Sub Ability 2 ID: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].Shoes.SubAbility2);
            printf("                Sub Ability 3 ID: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].Shoes.SubAbility3);
            printf("                Experience: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].Shoes.Exp);
            printf("            Equipped Shirt:\n");
            printf("                Gear ID: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].Clothes.Id);
            printf("                Level: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].Clothes.Level);
            printf("                Slots: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].Clothes.Slots);
            printf("                Main Ability ID: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].Clothes.MainAbility);
            printf("                Sub Ability 1 ID: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].Clothes.SubAbility1);
            printf("                Sub Ability 2 ID: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].Clothes.SubAbility2);
            printf("                Sub Ability 3 ID: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].Clothes.SubAbility3);
            printf("                Experience: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].Clothes.Exp);
            printf("            Equipped Hat:\n");
            printf("                Gear ID: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].HeadGear.Id);
            printf("                Level: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].HeadGear.Level);
            printf("                Slots: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].HeadGear.Slots);
            printf("                Main Ability ID: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].HeadGear.MainAbility);
            printf("                Sub Ability 1 ID: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].HeadGear.SubAbility1);
            printf("                Sub Ability 2 ID: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].HeadGear.SubAbility2);
            printf("                Sub Ability 3 ID: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].HeadGear.SubAbility3);
            printf("                Experience: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].HeadGear.Exp);
            printf("            Tank ID: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].Tank);
            printf("            Pants ID: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].PlayerBottomId);
            printf("            Level: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].Level);
            printf("            Stars: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].Stars);
            printf("            Rainmaker Rank: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].RainmakerRank);
            printf("            Splat Zones Rank: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].SplatZonesRank);
            printf("            Tower Control Rank: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].TowerControlRank);
            printf("            Clam Blitz Rank: %d\n", save->SaveDataVss.PlazaNPCs[plaza_npc_index].ClamBlitzRank);
    }
    printf("    X Rank Info 1:\n");
    printf("        Rainmaker:\n");
    printf("            Last Updated (Localized): %llu\n", save->SaveDataVss.UdemaeX1[1].LastUpdated);
    printf("            Current Season Start (GMT): %llu\n", save->SaveDataVss.UdemaeX1[1].CurrentSeasonStart);
    printf("            Next Season Start (GMT): %llu\n", save->SaveDataVss.UdemaeX1[1].NextSeasonStart);
    printf("            MMR Data 1:\n");
    printf("                Power: %.5f\n", save->SaveDataVss.UdemaeX1[1].MMR1.Power);
    printf("                Rating Deviation: %.5f\n", save->SaveDataVss.UdemaeX1[1].MMR1.Rd);
    printf("                Volatility: %.5f\n", save->SaveDataVss.UdemaeX1[1].MMR1.Volatility);
    printf("            MMR Data 2:\n");
    printf("                Power: %.5f\n", save->SaveDataVss.UdemaeX1[1].MMR2.Power);
    printf("                Rating Deviation: %.5f\n", save->SaveDataVss.UdemaeX1[1].MMR2.Rd);
    printf("                Volatility: %.5f\n", save->SaveDataVss.UdemaeX1[1].MMR2.Volatility);
    printf("        Splat Zones:\n");
    printf("            Last Updated (Localized): %llu\n", save->SaveDataVss.UdemaeX1[2].LastUpdated);
    printf("            Current Season Start (GMT): %llu\n", save->SaveDataVss.UdemaeX1[2].CurrentSeasonStart);
    printf("            Next Season Start (GMT): %llu\n", save->SaveDataVss.UdemaeX1[2].NextSeasonStart);
    printf("            MMR Data 1:\n");
    printf("                Power: %.5f\n", save->SaveDataVss.UdemaeX1[2].MMR1.Power);
    printf("                Rating Deviation: %.5f\n", save->SaveDataVss.UdemaeX1[2].MMR1.Rd);
    printf("                Volatility: %.5f\n", save->SaveDataVss.UdemaeX1[2].MMR1.Volatility);
    printf("            MMR Data 2:\n");
    printf("                Power: %.5f\n", save->SaveDataVss.UdemaeX1[2].MMR2.Power);
    printf("                Rating Deviation: %.5f\n", save->SaveDataVss.UdemaeX1[2].MMR2.Rd);
    printf("                Volatility: %.5f\n", save->SaveDataVss.UdemaeX1[2].MMR2.Volatility);
    printf("        Tower Control:\n");
    printf("            Last Updated (Localized): %llu\n", save->SaveDataVss.UdemaeX1[3].LastUpdated);
    printf("            Current Season Start (GMT): %llu\n", save->SaveDataVss.UdemaeX1[3].CurrentSeasonStart);
    printf("            Next Season Start (GMT): %llu\n", save->SaveDataVss.UdemaeX1[3].NextSeasonStart);
    printf("            MMR Data 1:\n");
    printf("                Power: %.5f\n", save->SaveDataVss.UdemaeX1[3].MMR1.Power);
    printf("                Rating Deviation: %.5f\n", save->SaveDataVss.UdemaeX1[3].MMR1.Rd);
    printf("                Volatility: %.5f\n", save->SaveDataVss.UdemaeX1[3].MMR1.Volatility);
    printf("            MMR Data 2:\n");
    printf("                Power: %.5f\n", save->SaveDataVss.UdemaeX1[3].MMR2.Power);
    printf("                Rating Deviation: %.5f\n", save->SaveDataVss.UdemaeX1[3].MMR2.Rd);
    printf("                Volatility: %.5f\n", save->SaveDataVss.UdemaeX1[3].MMR2.Volatility);
    printf("        Clam Blitz:\n");
    printf("            Last Updated (Localized): %llu\n", save->SaveDataVss.UdemaeX1[4].LastUpdated);
    printf("            Current Season Start (GMT): %llu\n", save->SaveDataVss.UdemaeX1[4].CurrentSeasonStart);
    printf("            Next Season Start (GMT): %llu\n", save->SaveDataVss.UdemaeX1[4].NextSeasonStart);
    printf("            MMR Data 1:\n");
    printf("                Power: %.5f\n", save->SaveDataVss.UdemaeX1[4].MMR1.Power);
    printf("                Rating Deviation: %.5f\n", save->SaveDataVss.UdemaeX1[4].MMR1.Rd);
    printf("                Volatility: %.5f\n", save->SaveDataVss.UdemaeX1[4].MMR1.Volatility);
    printf("            MMR Data 2:\n");
    printf("                Power: %.5f\n", save->SaveDataVss.UdemaeX1[4].MMR2.Power);
    printf("                Rating Deviation: %.5f\n", save->SaveDataVss.UdemaeX1[4].MMR2.Rd);
    printf("                Volatility: %.5f\n", save->SaveDataVss.UdemaeX1[4].MMR2.Volatility);
    printf("    X Rank Info 2:\n");
    printf("        Rainmaker:\n");
    printf("            Last Updated (Localized): %llu\n", save->SaveDataVss.UdemaeX2[1].LastUpdated);
    printf("            Current Season Start (GMT): %llu\n", save->SaveDataVss.UdemaeX2[1].CurrentSeasonStart);
    printf("            Next Season Start (GMT): %llu\n", save->SaveDataVss.UdemaeX2[1].NextSeasonStart);
    printf("            MMR Data 1:\n");
    printf("                Power: %.5f\n", save->SaveDataVss.UdemaeX2[1].MMR1.Power);
    printf("                Rating Deviation: %.5f\n", save->SaveDataVss.UdemaeX2[1].MMR1.Rd);
    printf("                Volatility: %.5f\n", save->SaveDataVss.UdemaeX2[1].MMR1.Volatility);
    printf("            MMR Data 2:\n");
    printf("                Power: %.5f\n", save->SaveDataVss.UdemaeX2[1].MMR2.Power);
    printf("                Rating Deviation: %.5f\n", save->SaveDataVss.UdemaeX2[1].MMR2.Rd);
    printf("                Volatility: %.5f\n", save->SaveDataVss.UdemaeX2[1].MMR2.Volatility);
    printf("        Splat Zones:\n");
    printf("            Last Updated (Localized): %llu\n", save->SaveDataVss.UdemaeX2[2].LastUpdated);
    printf("            Current Season Start (GMT): %llu\n", save->SaveDataVss.UdemaeX2[2].CurrentSeasonStart);
    printf("            Next Season Start (GMT): %llu\n", save->SaveDataVss.UdemaeX2[2].NextSeasonStart);
    printf("            MMR Data 1:\n");
    printf("                Power: %.5f\n", save->SaveDataVss.UdemaeX2[2].MMR1.Power);
    printf("                Rating Deviation: %.5f\n", save->SaveDataVss.UdemaeX2[2].MMR1.Rd);
    printf("                Volatility: %.5f\n", save->SaveDataVss.UdemaeX2[2].MMR1.Volatility);
    printf("            MMR Data 2:\n");
    printf("                Power: %.5f\n", save->SaveDataVss.UdemaeX2[2].MMR2.Power);
    printf("                Rating Deviation: %.5f\n", save->SaveDataVss.UdemaeX2[2].MMR2.Rd);
    printf("                Volatility: %.5f\n", save->SaveDataVss.UdemaeX2[2].MMR2.Volatility);
    printf("        Tower Control:\n");
    printf("            Last Updated (Localized): %llu\n", save->SaveDataVss.UdemaeX2[3].LastUpdated);
    printf("            Current Season Start (GMT): %llu\n", save->SaveDataVss.UdemaeX2[3].CurrentSeasonStart);
    printf("            Next Season Start (GMT): %llu\n", save->SaveDataVss.UdemaeX2[3].NextSeasonStart);
    printf("            MMR Data 1:\n");
    printf("                Power: %.5f\n", save->SaveDataVss.UdemaeX2[3].MMR1.Power);
    printf("                Rating Deviation: %.5f\n", save->SaveDataVss.UdemaeX2[3].MMR1.Rd);
    printf("                Volatility: %.5f\n", save->SaveDataVss.UdemaeX2[3].MMR1.Volatility);
    printf("            MMR Data 2:\n");
    printf("                Power: %.5f\n", save->SaveDataVss.UdemaeX2[3].MMR2.Power);
    printf("                Rating Deviation: %.5f\n", save->SaveDataVss.UdemaeX2[3].MMR2.Rd);
    printf("                Volatility: %.5f\n", save->SaveDataVss.UdemaeX2[3].MMR2.Volatility);
    printf("        Clam Blitz:\n");
    printf("            Last Updated (Localized): %llu\n", save->SaveDataVss.UdemaeX2[4].LastUpdated);
    printf("            Current Season Start (GMT): %llu\n", save->SaveDataVss.UdemaeX2[4].CurrentSeasonStart);
    printf("            Next Season Start (GMT): %llu\n", save->SaveDataVss.UdemaeX2[4].NextSeasonStart);
    printf("            MMR Data 1:\n");
    printf("                Power: %.5f\n", save->SaveDataVss.UdemaeX2[4].MMR1.Power);
    printf("                Rating Deviation: %.5f\n", save->SaveDataVss.UdemaeX2[4].MMR1.Rd);
    printf("                Volatility: %.5f\n", save->SaveDataVss.UdemaeX2[4].MMR1.Volatility);
    printf("            MMR Data 2:\n");
    printf("                Power: %.5f\n", save->SaveDataVss.UdemaeX2[4].MMR2.Power);
    printf("                Rating Deviation: %.5f\n", save->SaveDataVss.UdemaeX2[4].MMR2.Rd);
    printf("                Volatility: %.5f\n", save->SaveDataVss.UdemaeX2[4].MMR2.Volatility);
}

int splatsave(int argc, char const* argv[]) {
    std::string path;
    if (argc < 2)
        path = "save.dat";
    else
        path = argv[1];

    try {
        SaveDataFactory svFactory(path);

        const uint8_t* save_write = nullptr;
        size_t save_write_size = 0;
        std::string save_output_path;
        bool isDecode = false;
        if (svFactory.getInitialEncodeState() == SaveDataFactory::ENCODED) {
            isDecode = true;
            save_output_path = path + ".dec";
            save_write = svFactory.getSaveDecodedPtr();
            save_write_size = svFactory.getDecodedSaveFileSize();
        } else {
            save_output_path = path + ".enc";
            save_write = svFactory.getSaveEncodedPtr();
            save_write_size = svFactory.getEncodedSaveFileSize();
        }

        std::ifstream fileExistCheck(save_output_path);
        if (fileExistCheck.good()) {
            std::cout << "Overwrite existing " << save_output_path
                      << "? (y or n) ";
            std::string userInput;
            getline(std::cin, userInput);
            char firstLetter = userInput.at(0);
            if(firstLetter != 'y' and firstLetter != 'Y') {
                std::cout << "Aborted." << std::endl;
                return 0;
            }
        }

        std::ofstream fileos(save_output_path, std::fstream::binary);
        if (!fileos) {
            std::cout << "Could not open " << save_output_path << std::endl;
            return -5;
        }
        fileos.write((char*)save_write, save_write_size);
        fileos.close();

        if (isDecode) {
            std::cout << "Decrypted " << path << " to " << save_output_path
                      << "!" << std::endl;
            SaveDataFactory::SaveFile* save_file;
            save_file = svFactory.parseSave();
            dumpSaveInfo(save_file);
        } else {
            std::cout << "Encrypted " << path << " to " << save_output_path
                      << "!" << std::endl;
        }
    } catch (SaveDataFactory::SaveSizeUnknown& e) {
        if (e.m_version == 6) {
            std::cout << "Save version 6 was never seen before. If your save "
                         "was previously unmodified, please submit an issue "
                         "on the project's GitHub page or send me an email at "
                         "contact@the3096.com! Thank you."
                      << std::endl;
        } else {
            std::cout << "Save size incorrect: 0x" << std::hex << e.m_size
                  << std::endl;
        }
        return -4;
    } catch (SaveDataFactory::UnsupportedSaveVersion& e) {
        std::cout << "Save version unsupported: " << e.m_version << std::endl;
        return -3;
    } catch (SaveDataFactory::DecodeFailToVerify& e) {
        std::cout << "Cannot verify save. If you believe this is a mistake, "
                     "and your save is intact, please submit an issue "
                     "on the project's GitHub page or send me an email at "
                     "contact@the3096.com! Thank you."
                  << std::endl;
        return -2;
    } catch (SaveDataFactory::CouldNotOpenFile& e) {
        std::cout << "Could not open " << path << std::endl;
        std::cout << "Usage: " << std::endl;
        std::cout << *argv
                  << " {encrypted save file path} {decrypted output path}"
                  << std::endl;
        std::cout << *argv
                  << " {decrypted save file path} {re-encrypted output path}"
                  << std::endl;
        std::cout << "Decrypt or re-encrypt mode is determined by file size."
                  << std::endl;
        return -1;
    }

    return 0;
}

int main(int argc, char const* argv[]) {
#ifdef __SWITCH__
    gfxInitDefault();
    consoleInit(NULL);
#endif

    int ret = splatsave(argc, argv);

#ifdef __SWITCH__
    std::cout << "Press + to exit..." << std::endl;
    while (appletMainLoop()) {
        hidScanInput();
        u64 kDown = hidKeysDown(CONTROLLER_P1_AUTO);
        if (kDown & KEY_PLUS) break;
        gfxFlushBuffers();
        gfxSwapBuffers();
        gfxWaitForVsync();
    }
    gfxExit();
#endif

    return ret;
}
