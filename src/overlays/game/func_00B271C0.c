/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 reserved00[0x94];
    s32 side[2], outgoing[2], incoming[2];
} SubstitutionQueue;
typedef struct {
    u8 pending : 1;
    u8 : 7;
} QueueFlags;
extern SubstitutionQueue D_00CBBE60;
extern QueueFlags D_00CBBEEC[];
extern s32 D_00CBBEF0[];
void func_00B271C0(s32 count, const s32 *sides, const s32 *outgoing, const s32 *incoming) {
    s32 i;
    if (count > 2)
        count = 2;
    for (i = 0; i < count; ++i) {
        D_00CBBE60.side[i] = sides[i];
        D_00CBBE60.outgoing[i] = outgoing[i];
        D_00CBBE60.incoming[i] = incoming[i];
    }
    D_00CBBEEC[0].pending = 1;
    D_00CBBEF0[0] = count;
}
