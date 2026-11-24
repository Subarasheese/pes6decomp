/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern s16 func_00BB1310(s32);
s16 func_00C22D10(s32 kind, s32 incoming) {
    s32 clips[9][2] = {{228, 229}, {226, 227}, {236, 237}, {234, 235}, {220, 221},
                       {222, 223}, {224, 225}, {232, 233}, {230, 231}};
    return func_00BB1310(clips[kind][(u8)incoming]);
}
