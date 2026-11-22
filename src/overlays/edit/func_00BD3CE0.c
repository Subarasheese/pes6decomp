/* compiler: mwcc-3.0.1b210-inline-depth8 */
#include "pes6/edit_appearance.h"
#include "pes6/edit_player_params.h"

extern Pes6HairPreset *D_00CE5668[];

extern s8 (*D_003EAFE8)[10];

static inline void copy_dimensions(s32 group, s32 parts[10]) {
    if (group < 8) {
        const s8 *dimension = D_003EAFE8[group];
        s32 i = 0;
        s32 *out = parts;
        for (; i < 10; i++)
            *out++ = *dimension++;
    }
}

static inline s32 same_preset(const Pes6EditPlayerParams *player, s32 group) {
    s32 parts[10];
    if (group >= 8)
        return 0;
    copy_dimensions(group, parts);
    if (player->field_35_0 - 7 == parts[0] && player->field_27_4 - 7 == parts[1] &&
        player->field_38_4 - 7 == parts[2] && player->field_39_0 - 7 == parts[3] &&
        player->field_35_4 - 7 == parts[4] && player->field_36_4 - 7 == parts[5] &&
        player->field_36_0 - 7 == parts[6] && player->field_37_0 - 7 == parts[7] &&
        player->field_37_4 - 7 == parts[8] && player->field_38_0 - 7 == parts[9])
        return 1;
    return 0;
}

static inline u8 find_appearance_preset(const Pes6EditPlayerParams *player) {
    s32 group;
    for (group = 0; group < 8; group++) {
        if (same_preset(player, group))
            return group;
    }
    return 8;
}

void func_00BD3CE0(const Pes6EditPlayerParams *player, Pes6EditAppearance *values) {
    const Pes6HairPreset *hair;
    values->faceType = player->faceType;
    values->skin = player->skin;
    values->field_014 = player->field_26_4 - 7;
    values->field_018 = player->field_27_0 - 7;
    values->field_01C = player->field_30_5;
    values->field_020 = player->field_2A_6;
    values->field_024 = player->field_29_3;
    values->field_028 = player->skin;
    values->field_02C = player->field_26_4 - 7;
    values->field_030 = player->field_27_0 - 7;
    values->field_034 = player->field_47_5 - 3;
    values->field_03C = player->field_40_0;
    values->field_040 = player->field_42_7 - 3;
    values->field_044 = player->field_42_1 - 3;
    values->field_048 = player->field_42_4 - 3;
    values->field_050 = player->field_3F_3;
    values->field_054 = player->field_40_5 - 3;
    values->field_058 = player->field_41_0 - 3;
    values->field_05C = player->field_41_3 - 3;
    values->field_060 = player->field_41_6 - 3;
    values->field_064 = player->field_2A_6;
    values->field_068 = player->field_29_3;
    values->field_070 = player->field_45_3;
    values->field_074 = player->field_46_1 - 3;
    values->field_078 = player->field_45_6 - 3;
    values->field_080 = player->field_43_2;
    values->field_084 = player->field_43_5 - 3;
    values->field_08C = player->field_44_0;
    values->field_090 = player->field_45_0 - 3;
    values->field_094 = player->field_44_5 - 3;
    values->field_09C = player->field_46_4;
    values->field_0A0 = player->field_46_7 - 3;
    values->field_0A4 = player->field_47_2 - 3;
    hair = &D_00CE5668[0][player->hair];
    values->hairStyle = hair->style;
    values->hairModel = hair->model;
    values->hairDetail0 = hair->detail[0];
    values->hairDetail1 = hair->detail[1];
    values->hairDetail2 = hair->detail[2];
    if (player->field_2A_0 == 0x3E) {
        values->field_0D4 = 1;
        values->field_0DC = 1;
    } else {
        values->field_0D4 = 0;
        values->field_0DC = 0;
    }
    values->field_0D8 = player->field_2A_0;
    values->field_0E0 = player->field_32_2;
    values->field_0E4 = player->field_33_0;
    values->field_0E8 = player->field_34_0;
    values->hairDetail3 = hair->detail[3];
    values->field_0F4 = player->field_39_4;
    values->field_108 = player->field_2B_0;
    values->field_10C = player->field_2C_0;
    values->height = player->height;
    values->weight = player->weight;
    values->dimensions[0] = player->field_35_0 - 7;
    values->dimensions[1] = player->field_27_4 - 7;
    values->dimensions[2] = player->field_38_4 - 7;
    values->dimensions[3] = player->field_39_0 - 7;
    values->dimensions[4] = player->field_35_4 - 7;
    values->dimensions[5] = player->field_36_4 - 7;
    values->dimensions[6] = player->field_36_0 - 7;
    values->dimensions[7] = player->field_37_0 - 7;
    values->dimensions[8] = player->field_37_4 - 7;
    values->dimensions[9] = player->field_38_0 - 7;
    values->appearancePreset = find_appearance_preset(player);
    values->field_160 = player->field_2D_4;
    values->field_164 = player->field_2F_5;
    values->field_170 = player->field_29_7;
    values->field_178 = player->field_2D_2;
    values->field_17C = player->field_2E_0;
    values->field_184 = player->field_2E_3;
    values->field_188 = player->field_2E_5;
    values->field_190 = player->field_2F_0;
    values->field_194 = player->field_2F_2;
    values->field_198 = player->field_34_7;
    values->field_19C = player->field_33_6;
    values->field_1A0 = player->field_25_7;
    values->field_1A4 = player->field_2C_6;
    values->field_1AC = player->field_2F_7;
    values->field_1B0 = player->field_30_0;
    values->field_1B4 = player->field_30_3;
    values->field_1B8 = player->field_34_6;
    values->field_0FC = player->field_2B_7;
    values->field_100 = player->field_3A_3;
    values->field_114 = player->field_2D_0;
    values->field_118 = player->field_3A_0;
}
