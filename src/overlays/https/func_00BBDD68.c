/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
#include "pes6/https/key_object.h"
void func_00BBDD68(KeyObject *key) {
    const KeyMethods *methods = key->methods;
    if (methods)
        methods->destroy(key);
    if (key->parameters)
        func_00BBFDA0(key->parameters);
    if (key->flags & 1)
        func_00BC0A88(key);
}
