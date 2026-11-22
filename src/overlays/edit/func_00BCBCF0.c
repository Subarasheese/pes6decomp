/* compiler: mwcc-3.0.1b210 */
#include "pes6/edit_player_params.h"
s32 func_00BCBCF0(const Pes6EditPlayerRecord *left, const Pes6EditPlayerRecord *right) {
    const Pes6EditPlayerParams *a = &left->params;
    const Pes6EditPlayerParams *b = &right->params;
    if (a->field_27_0 != b->field_27_0 || a->field_26_4 != b->field_26_4 ||
        a->height != b->height || a->weight != b->weight || a->field_26_0 != b->field_26_0 ||
        a->field_35_0 != b->field_35_0 || a->field_27_4 != b->field_27_4 ||
        a->field_35_4 != b->field_35_4 || a->field_36_0 != b->field_36_0 ||
        a->field_36_4 != b->field_36_4 || a->field_37_4 != b->field_37_4 ||
        a->field_37_0 != b->field_37_0 || a->field_38_0 != b->field_38_0 ||
        a->field_38_4 != b->field_38_4 || a->field_39_0 != b->field_39_0)
        return 1;
    return 0;
}
