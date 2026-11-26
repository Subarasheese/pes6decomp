/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern s32 func_00C01090(s32 flag);
#define PREFER_DEFAULT_STATE()                                                                     \
    (func_00C01090(2) || func_00C01090(3) || func_00C01090(6) || func_00C01090(5) ||               \
     func_00C01090(8) || func_00C01090(9) || func_00C01090(0) || func_00C01090(1) ||               \
     func_00C01090(10) || func_00C01090(45))
#define PREFER_REQUESTED_STATE()                                                                   \
    (func_00C01090(11) || func_00C01090(12) || func_00C01090(13) || func_00C01090(14) ||           \
     func_00C01090(15) || func_00C01090(16) || func_00C01090(17) || func_00C01090(18) ||           \
     func_00C01090(20) || func_00C01090(21) || func_00C01090(22) || func_00C01090(23) ||           \
     func_00C01090(24) || func_00C01090(25) || func_00C01090(26) || func_00C01090(28) ||           \
     func_00C01090(29) || func_00C01090(30) || func_00C01090(31) || func_00C01090(32) ||           \
     func_00C01090(7) || func_00C01090(44))
#define USE_DEFAULT_AFTER_PRIORITY_CHECKS()                                                        \
    (func_00C01090(33) || func_00C01090(34) || func_00C01090(35) || func_00C01090(36) ||           \
     func_00C01090(37) || func_00C01090(38) || func_00C01090(39) || func_00C01090(40) ||           \
     func_00C01090(41) || func_00C01090(43))
s32 func_00BF5C40(u8 state) {
    s32 result = 7;
    switch (state) {
    case 0:
        if (PREFER_DEFAULT_STATE())
            result = 7;
        else if (PREFER_REQUESTED_STATE())
            result = 1;
        else if (USE_DEFAULT_AFTER_PRIORITY_CHECKS())
            result = 7;
        else
            result = 1;
        break;
    case 1:
        if (PREFER_DEFAULT_STATE())
            result = 7;
        else if (PREFER_REQUESTED_STATE())
            result = 5;
        else if (USE_DEFAULT_AFTER_PRIORITY_CHECKS())
            result = 7;
        else
            result = 5;
        break;
    case 5:
        if (func_00C01090(4))
            result = 6;
        else
            result = 7;
        break;
    case 6:
        result = 7;
        break;
    }
    return result;
}
