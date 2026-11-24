/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved00[0x54];
    void *marker[13][4];
} MarkerPanel;
extern void func_001EF900(void *, s8);
void func_008D20A0(MarkerPanel *panel, s32 row, s8 show) {
    s32 i;
    for (i = 0; i < 4; i++)
        func_001EF900(panel->marker[row][i], show);
}
