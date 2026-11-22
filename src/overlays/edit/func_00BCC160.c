/* compiler: mwcc-3.0.1b210 */
#include "pes6/edit_player_params.h"
extern u8 D_003E9E80;
s32 func_00BCC160(const Pes6EditPlayerRecord *left, const Pes6EditPlayerRecord *right, u8 mode) {
    const Pes6EditPlayerParams *a = &left->params;
    const Pes6EditPlayerParams *b = &right->params;
    if (a->faceType != b->faceType || a->skin != b->skin || a->field_30_5 != b->field_30_5 ||
        a->hair != b->hair || a->field_2C_6 != b->field_2C_6 || a->field_40_0 != b->field_40_0 ||
        a->field_3F_3 != b->field_3F_3 || a->field_45_3 != b->field_45_3 ||
        a->field_44_0 != b->field_44_0 || a->field_43_2 != b->field_43_2 ||
        a->field_46_4 != b->field_46_4 || mode != D_003E9E80)
        return 1;
    return 0;
}
