#include <cstdint>
#include "util.h"
#include "CommonStructs.h"

class SaveDataCmn {
    public:
        typedef struct {
            CommonStructs::Weapon Weapon;
            uint64_t LastEquip;
            uint32_t Freshness;
            uint32_t FlagColor;
            uint8_t Unknown[0x108];
            uint32_t New;
            INSERT_PADDING_BYTES(4);
        } HaveWeapon;
        static_assert(sizeof(HaveWeapon) == 0x130, "SaveDataCmn::HaveWeapon must be 0x130 bytes long");

        typedef struct {
            CommonStructs::Gear Gear;
            uint64_t LastEquip;
            uint32_t New;
            INSERT_PADDING_BYTES(4);
        } HaveGear;
        static_assert(sizeof(HaveGear) == 0x30, "SaveDataCmn::HaveGear must be 0x30 bytes long");

        typedef struct {
            uint32_t Id;
            uint32_t Amount;
        } HaveSkillChip;
        static_assert(sizeof(HaveSkillChip) == 8, "SaveDataCmn::HaveSkillChip must be 8 bytes long");

        typedef struct {
            uint32_t Id;
            uint32_t BoostedId;
            uint32_t Amount;
        } HaveBoostTicket;
        static_assert(sizeof(HaveBoostTicket) == 0xC, "SaveDataCmn::HaveBoostTicket must be 0xC bytes long");

        typedef struct {
            // Inkling attributes
            uint32_t InklingPlayerModelType;
            uint32_t InklingPlayerHairId;
            uint32_t InklingPlayerBottomId;
            uint32_t InklingPlayerSkinColorId;
            uint32_t InklingPlayerEyeColorId;

            // Weapon data
            CommonStructs::Weapon EquippedWeapon;
            INSERT_PADDING_BYTES(4);
            HaveWeapon WeaponInventory[0x100];
            uint32_t EquippedShoes;
            uint32_t EquippedClothes;
            uint32_t EquippedHeadGear;
            INSERT_PADDING_BYTES(4);

            // Gear data
            HaveGear ShoeInventory[0x200];
            HaveGear ClothesInventory[0x200];
            HaveGear HeadGearInventory[0x200];

            // Crusty Sean and Murch-related data
            HaveSkillChip AbilityChunkInventory[0x40];
            HaveBoostTicket TicketInventory[0x40];

            uint32_t TutorialResult;

            // Control options
            float HandheldStickSensitivity;
            float HandheldMotionSensitivity;
            uint8_t HandheldMotionEnabled;
            uint8_t HandheldMotionInvertY;
            uint8_t HandheldMotionInvertX;
            INSERT_PADDING_BYTES(0x41);
            float DetachedStickSensitivity;
            float DetachedMotionSensitivity;
            uint8_t DetachedMotionEnabled;
            uint8_t DetachedMotionInvertY;
            uint8_t DetachedMotionInvertX;
            INSERT_PADDING_BYTES(0x41);

            uint32_t OnlinePlayPenalty[4]; // TODO: Look into this
            uint64_t PenaltyEndTime;

            INSERT_PADDING_BYTES(0x188);

            uint32_t Money;
            uint32_t SuperSeaSnails;

            INSERT_PADDING_BYTES(0x108);

            uint64_t SaveTime;

            INSERT_PADDING_BYTES(0x54);

            uint8_t ColorLock;
            uint8_t ShowPlazaPosts;

            INSERT_PADDING_BYTES(0x2BEA);

            // Octoling attributes
            uint32_t OctolingPlayerModelType;
            uint32_t OctolingPlayerHairId;
            uint32_t OctolingPlayerBottomId;
            uint32_t OctolingPlayerSkinColorId;
            uint32_t OctolingPlayerEyeColorId;
            uint32_t IsOctoling;

            INSERT_PADDING_BYTES(0x2D2C);
        } Section;
        //static_assert(sizeof(Section) == 0x2B210, "SaveDataCmn::Section must be 0x2B210 bytes long"); // currently 0x2B218 bytes long :/
};