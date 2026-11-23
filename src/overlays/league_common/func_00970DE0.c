/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved00[4];
    char text[0x400];
    u8 changed;
    u8 reserved405;
    u8 active;
    u8 reserved407;
} LeagueTextPage;
extern LeagueTextPage *D_003EA94C;
extern const char D_009C40D0[];
extern int sprintf(char *, const char *, ...);
void func_00970DE0(s32 value) {
    LeagueTextPage *page = D_003EA94C;
    if (D_003EA94C) {
        sprintf(D_003EA94C->text, D_009C40D0, value);
        page->changed = 1;
    }
}
