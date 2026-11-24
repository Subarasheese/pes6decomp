/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_squad_setup.h"
extern void *memcpy(void *, const void *, u32);
void func_00256BE0(Pes6LineupProfile *out, const Pes6ProfileParams *params, u16 player) {
    memcpy(out, params, sizeof(out->base));
    out->profile.word.nationality = params->profile.word.nationality;
    out->age = params->profile.fields.age;
    out->weight = params->weight;
    out->profile.low.height = params->height;
    out->nationalityBelow31 = (out->profile.word.nationality < 31);
    out->nationalityIs26 = (out->profile.word.nationality == 26);
    if (player != 0x04cc && player != 0x0ea8)
        out->profile.low.special = 0;
    else
        out->profile.low.special = 1;
}
