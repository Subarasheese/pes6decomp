/* compiler: ee-gcc-2.96 */
#include "types.h"
typedef struct SoftKeyboard SoftKeyboard;
typedef struct KeyList KeyList;
typedef struct KeyTexture KeyTexture;
extern const char D_005F8CE8[], D_006024C8[], D_005F8D08[], D_005F8D58[], D_005F8D68[];
extern void func_001AD620(const char *file, s32 line, const char *expression);
extern void func_00112450(SoftKeyboard *, KeyList *, KeyTexture *, KeyTexture *, void *);
extern void func_00116D64(SoftKeyboard *, KeyList *, KeyTexture *);
extern void func_00116FF4(SoftKeyboard *, KeyList *);
void func_00116C70(SoftKeyboard *keyboard, KeyList *keys, KeyTexture *buttonTexture,
                   KeyTexture *characterTexture, void *context) {
    if (!keyboard)
        func_001AD620(D_005F8CE8, 224, D_006024C8);
    if (!keys)
        func_001AD620(D_005F8CE8, 225, D_005F8D08);
    if (!buttonTexture)
        func_001AD620(D_005F8CE8, 226, D_005F8D58);
    if (!characterTexture)
        func_001AD620(D_005F8CE8, 227, D_005F8D68);
    func_00112450(keyboard, keys, buttonTexture, characterTexture, context);
    func_00116D64(keyboard, keys, buttonTexture);
    func_00116FF4(keyboard, keys);
}
