/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001CDA50(M2C_UNK);                         /* extern */
M2C_UNK func_001D8720();                            /* extern */
M2C_UNK func_001DAA10(f32 *);                       /* extern */
M2C_UNK func_001DAA60(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_001DAA90(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_001DB020();                            /* extern */
M2C_UNK func_001DCC30();                            /* extern */
M2C_UNK func_001DDAE0(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_001DE9F0(s32);                         /* extern */
M2C_UNK func_001E4560(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_001E6280();                            /* extern */
M2C_UNK func_001E69A0(M2C_UNK);                     /* extern */
M2C_UNK func_001E69D0(M2C_UNK *);                   /* extern */
M2C_UNK func_001F1FB0();                            /* extern */
M2C_UNK func_001F4F70(M2C_UNK);                     /* extern */
M2C_UNK func_00268600();                            /* extern */
extern char D_00397008[];
extern char D_0039700C[];
extern char D_00397010[];
extern char D_003B2750[];
extern char D_003B2840[];
extern char D_003B2930[];
extern char D_003B2A20[];
extern char D_003B2B10[];
extern char D_003B2C00[];
extern char D_003B2CF0[];
extern char D_003B2DE0[];
extern char D_003B2ED0[];
extern char D_003CCBA0[];
extern char D_003CFB10[];
extern char D_003D1120[];
extern char D_003DF3A0[];

void func_001817C0(void) {
    f32 sp10;
    f32 sp14;
    f32 sp18;

    func_001E6280();
    func_001E69D0(((void *)D_003CFB10));
    func_001E69A0(0x100);
    func_001DE9F0(func_001CDA50(1));
    func_001DDAE0(0x20, ((void *)D_003D1120));
    func_001E4560(0x17, ((void *)D_003B2750));
    func_001E4560(0x18, ((void *)D_003B2840));
    func_001E4560(0xA, ((void *)D_003B2930));
    func_001E4560(0xB, ((void *)D_003B2A20));
    func_001E4560(0xC, ((void *)D_003B2B10));
    func_001E4560(0xF, ((void *)D_003B2C00));
    func_001E4560(0x10, ((void *)D_003B2CF0));
    func_001E4560(0x15, ((void *)D_003B2DE0));
    func_001E4560(0x16, ((void *)D_003B2ED0));
    func_001DCC30();
    func_001DB020();
    func_001DAA90(3, ((void *)D_003CCBA0));
    func_001DAA60(0xB1, ((void *)D_003DF3A0));
    sp10 = (*(f32 *)D_00397008);
    sp14 = (*(f32 *)D_0039700C);
    sp18 = (*(f32 *)D_00397010);
    func_001DAA10(&sp10);
    func_001F4F70(0x60);
    func_001F1FB0();
    func_001D8720();
    func_00268600();
}
