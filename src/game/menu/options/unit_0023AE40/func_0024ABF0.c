/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_pad_setup.h"

typedef struct {
    u8 r, g, b, a;
} MatchTint;

extern void func_001D7960(void *, s8);
extern void func_001D78E0(void *, const MatchTint *);
extern const char D_003D8D40[];
extern const char D_003D8D48[];
extern s32 sprintf(char *, const char *, ...);
extern MatchTint D_003E7508;

void func_0024ABF0(void) {
    MatchTint tint = D_003E7508;
    char text[256];
    s32 i;
    for (i = 0; i < MATCH_PAD_COUNT; i++) {
        s32 side = Pes6PadAssign[i].side;
        switch (matchPadSideKind(side)) {
        case 1:
        case 2:
            func_001D7960((void *)D_003E9B18->handles[4 + i], 0);
            func_008B31A0(D_003E9B18->handles[4 + i], 1);
            break;
        case 4:
        case 11:
            func_001D7960((void *)D_003E9B18->handles[4 + i], 3);
            func_001D78E0((void *)D_003E9B18->handles[4 + i], &tint);
            func_008B31A0(D_003E9B18->handles[4 + i], 1);
            break;
        default:
            func_001D7960((void *)D_003E9B18->handles[4 + i], 0);
            func_008B31A0(D_003E9B18->handles[4 + i], 0);
            break;
        }
        if (D_003E9B14[4 + i]) {
            if (Pes6PadAssign[i].nameMode == 0) {
                side = Pes6PadAssign[i].side;
                side = matchPadSideKind(side);
                switch (side) {
                case 4:
                case 11:
                    sprintf(text, D_003D8D40); /* "c" */
                    break;
                default:
                    sprintf(text, D_003D8D48, i + 1); /* "%d" */
                    break;
                }
                func_008B2F30(D_003E9B14[4 + i], text);
            } else if (Pes6PadAssign[i].nameMode == 1) {
                func_008B2F30(D_003E9B14[4 + i], Pes6PadAssign[i].name);
            } else if (Pes6PadAssign[i].nameMode == 2) {
                func_008B2F10(D_003E9B14[4 + i], 0x1000b);
            } else {
                func_008B2F10(D_003E9B14[4 + i], 0x1000c);
            }
        }
    }
}
