/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct AdxTrack AdxTrack;
extern s32 D_003E9B34;
extern AdxTrack *D_00583330[];
extern const s32 D_003AA780[];
extern s32 ADXT_SetOutVol(AdxTrack *track, s32 volume);
void func_0024EF60(s32 track, s32 volume) {
    if ((D_003E9B34 != 0) ^ 1)
        return;
    ADXT_SetOutVol(D_00583330[track], D_003AA780[volume]);
}
