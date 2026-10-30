/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_002DF960(s32);                         /* extern */
extern char D_008B2470[];
extern void *D_008B2474;
extern void *D_008B2478;
extern void *D_008B247C;
extern void *D_008B2480;
extern void *D_008B2484;
extern void *D_008B2488;
extern void *D_008B248C;
extern void *D_008B2494;
extern char D_008B24C0[];

s32 func_00881680(void) {
    if ((*(s32 *)D_008B2470) != 0) {
        func_001D7F10(D_008B2474);
        func_001D7F10(D_008B2478);
        func_001D7F10(D_008B247C);
        func_001D7F10(D_008B2494);
        func_001D7F10(D_008B248C);
        func_002DF960((*(s32 *)D_008B24C0));
        func_001D7F10(D_008B2480);
        func_001D7F10(D_008B2484);
        func_001D7F10(D_008B2488);
        (*(s32 *)D_008B2470) = 0;
    }
    return 0;
}
