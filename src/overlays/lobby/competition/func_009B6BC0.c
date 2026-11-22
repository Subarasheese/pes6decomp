/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_002DF730(s32, s32);
extern s8 *D_00A7DC08[];

s32 func_009B6BC0(s32 arg0) {
    return func_002DF730(*(s32 *)((s8 *)(D_00A7DC08[0]) + 0x2AC), arg0);
}
