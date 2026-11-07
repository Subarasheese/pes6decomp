/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_005E5D90[];
extern char D_005E5D92[];
void func_002D5AA0(void) {
    char *state = D_005E5D90;
    switch (*(unsigned char *)D_005E5D92) {
    case 0:
        M2C_FIELD(state, int *, 0x58) = 14;
        ++M2C_FIELD(state, unsigned char *, 2);
        break;
    case 1:
        if (--M2C_FIELD(state, int *, 0x58) == 0) {
            ++M2C_FIELD(state, unsigned char *, 2);
        }
        break;
    case 2:
        if (M2C_FIELD(state, void (**)(int, int, void *), 0x4C) != 0) {
            ++M2C_FIELD(state, unsigned char *, 2);
            M2C_FIELD(state, void (**)(int, int, void *), 0x4C)(2, *(unsigned char *)D_005E5D92, state);
        }
        break;
    }
}
