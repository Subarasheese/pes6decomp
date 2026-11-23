/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
#include "pes6/https/key_object.h"
s32 func_00BAE430(KeyOwner *owner) {
    KeyObject *key = func_00BBDD20();
    owner->key = key;
    return key ? 0 : 0x2715;
}
