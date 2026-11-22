/* compiler: mwcc-3.0.1b210 */
#include "pes6/edit_player_params.h"
s32 func_00BCBB20(const Pes6EditPlayerRecord *left, const Pes6EditPlayerRecord *right) {
    const Pes6EditPlayerParams *a = &left->params;
    const Pes6EditPlayerParams *b = &right->params;
    if (a->field_47_5 != b->field_47_5 || a->field_42_7 != b->field_42_7 ||
        a->field_42_1 != b->field_42_1 || a->field_42_4 != b->field_42_4 ||
        a->field_40_5 != b->field_40_5 || a->field_41_0 != b->field_41_0 ||
        a->field_41_6 != b->field_41_6 || a->field_41_3 != b->field_41_3 ||
        a->field_46_1 != b->field_46_1 || a->field_45_6 != b->field_45_6 ||
        a->field_43_5 != b->field_43_5 || a->field_45_0 != b->field_45_0 ||
        a->field_44_5 != b->field_44_5 || a->field_46_7 != b->field_46_7 ||
        a->field_47_2 != b->field_47_2)
        return 1;
    return 0;
}
