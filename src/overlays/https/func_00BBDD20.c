/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
#include "pes6/https/key_object.h"
KeyObject *func_00BBDD20(void) {
    KeyObject *key = func_00BC0A38(sizeof(KeyObject));
    KeyObject *result = 0;
    if (key) {
        key->flags = 1;
        key->methods = &D_00C3F088;
        key->parameters = 0;
        key->privateData = 0;
        result = key;
    }
    return result;
}
