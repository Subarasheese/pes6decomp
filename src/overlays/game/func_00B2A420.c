/* compiler: mwcc-3.0.1b151 */
#include "pes6/paired_player_action.h"

extern PairedContext D_00CBCA00[];

PairedContext *func_00B2A420(u32 player) {
    return &D_00CBCA00[player % 23U];
}
