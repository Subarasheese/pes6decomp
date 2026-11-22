/* compiler: mwcc-3.0.1b210 */
#include "pes6/edit_appearance.h"
#include "pes6/edit_player_params.h"

extern s32 D_00CE5660[];
extern Pes6HairPreset *D_00CE5668[];

static inline s32 find_hair_preset(const Pes6EditAppearance *values) {
    s32 count = D_00CE5660[0];
    s32 i;
    for (i = 0; i < count; i++) {
        Pes6HairPreset *preset = &D_00CE5668[0][i];
        if (values->hairStyle == preset->style && values->hairModel == preset->model &&
            values->hairDetail0 == preset->detail[0] && values->hairDetail1 == preset->detail[1] &&
            values->hairDetail2 == preset->detail[2] && values->hairDetail3 == preset->detail[3])
            return i;
    }
    return 0;
}

void func_00BD3350(Pes6EditPlayerParams *player, const Pes6EditAppearance *values) {
    player->faceType = values->faceType;
    player->skin = values->skin;
    player->field_26_4 = values->field_014 + 7;
    player->field_27_0 = values->field_018 + 7;
    player->field_30_5 = values->field_01C;
    player->field_2A_6 = values->field_020;
    player->field_29_3 = values->field_024;
    player->skin = values->field_028;
    player->field_26_4 = values->field_02C + 7;
    player->field_27_0 = values->field_030 + 7;
    player->field_47_5 = values->field_034 + 3;
    player->field_40_0 = values->field_03C;
    player->field_42_7 = values->field_040 + 3;
    player->field_42_1 = values->field_044 + 3;
    player->field_42_4 = values->field_048 + 3;
    player->field_3F_3 = values->field_050;
    player->field_40_5 = values->field_054 + 3;
    player->field_41_0 = values->field_058 + 3;
    player->field_41_3 = values->field_05C + 3;
    player->field_41_6 = values->field_060 + 3;
    player->field_2A_6 = values->field_064;
    player->field_29_3 = values->field_068;
    player->field_45_3 = values->field_070;
    player->field_46_1 = values->field_074 + 3;
    player->field_45_6 = values->field_078 + 3;
    player->field_43_2 = values->field_080;
    player->field_43_5 = values->field_084 + 3;
    player->field_44_0 = values->field_08C;
    player->field_45_0 = values->field_090 + 3;
    player->field_44_5 = values->field_094 + 3;
    player->field_46_4 = values->field_09C;
    player->field_46_7 = values->field_0A0 + 3;
    player->field_47_2 = values->field_0A4 + 3;
    player->hair = find_hair_preset(values);
    player->field_2A_0 = values->field_0D8;
    player->field_32_2 = values->field_0E0;
    player->field_33_0 = values->field_0E4;
    player->field_34_0 = values->field_0E8;
    player->field_39_4 = values->field_0F4;
    player->field_2B_0 = values->field_108;
    player->field_2C_0 = values->field_10C;
    player->height = values->height;
    player->weight = values->weight;
    player->field_35_0 = values->dimensions[0] + 7;
    player->field_27_4 = values->dimensions[1] + 7;
    player->field_38_4 = values->dimensions[2] + 7;
    player->field_39_0 = values->dimensions[3] + 7;
    player->field_35_4 = values->dimensions[4] + 7;
    player->field_36_4 = values->dimensions[5] + 7;
    player->field_36_0 = values->dimensions[6] + 7;
    player->field_37_0 = values->dimensions[7] + 7;
    player->field_37_4 = values->dimensions[8] + 7;
    player->field_38_0 = values->dimensions[9] + 7;
    player->field_2D_4 = values->field_160;
    player->field_2F_5 = values->field_164;
    player->field_29_7 = values->field_170;
    player->field_2D_2 = values->field_178;
    player->field_2E_0 = values->field_17C;
    player->field_2E_3 = values->field_184;
    player->field_2E_5 = values->field_188;
    player->field_2F_0 = values->field_190;
    player->field_2F_2 = values->field_194;
    player->field_34_7 = values->field_198;
    player->field_33_6 = values->field_19C;
    player->field_25_7 = values->field_1A0;
    player->field_2C_6 = values->field_1A4;
    player->field_2F_7 = values->field_1AC;
    player->field_30_0 = values->field_1B0;
    player->field_30_3 = values->field_1B4;
    player->field_34_6 = values->field_1B8;
    player->field_2B_7 = values->field_0FC;
    player->field_3A_3 = values->field_100;
    player->field_2D_0 = values->field_114;
    player->field_3A_0 = values->field_118;
}
