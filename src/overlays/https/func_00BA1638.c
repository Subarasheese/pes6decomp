/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
typedef struct {
    u8 reserved00[0x10];
    int tag;
    u8 tagClass;
    u8 reserved15[0x1];
    u8 flags;
} Asn1Tag;
void func_00BA1638(Asn1Tag *record, int tagClass, int tag, int flags) {
    u8 tagBits = ((u8)(tagClass & 0xc0U)) | (((u8)flags) & 0x2f);
    record->tagClass = tagBits;
    record->flags = record->flags | 8;
    if (((tagClass & 0xc0U) == 0) && ((tag - 0x10U) < 2)) {
        record->tagClass = tagBits | 0x20;
    }
    record->tag = tag;
}
