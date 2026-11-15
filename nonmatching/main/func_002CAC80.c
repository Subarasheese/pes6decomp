/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void Pes6HeapZone_SetRange(s8, s32, s32);
M2C_UNK Pes6HeapZone_Open(M2C_UNK);                     /* extern */
M2C_UNK Pes6HeapZone_Close(M2C_UNK);                     /* extern */
extern s32 D_003E9AB0;
extern s8 D_003E9D58;
extern char D_00E07000[];

void func_002CAC80(void) {
    if (D_003E9AB0 != 0) {
        Pes6HeapZone_Open(9);
        Pes6HeapZone_Open(0xA);
        Pes6HeapZone_Close(5);
        Pes6HeapZone_SetRange(5, (s32) ((void *)D_00E07000), 0x1CE000);
        Pes6HeapZone_Open(5);
    } else {
        Pes6HeapZone_Open(0x17);
        Pes6HeapZone_Open(0xB);
        Pes6HeapZone_Open(9);
        Pes6HeapZone_Open(0xA);
        Pes6HeapZone_Close(5);
        Pes6HeapZone_SetRange(5, (s32) ((void *)D_00E07000), 0x1CE000);
        Pes6HeapZone_Open(5);
    }
    D_003E9D58 = 1;
}
