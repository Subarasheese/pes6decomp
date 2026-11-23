/* compiler: ee-gcc-2.96-nosib */
#include "types.h"
typedef struct ASN1String ASN1String;
extern ASN1String *func_00B9CF68(ASN1String **, unsigned char **, long, int);
ASN1String *func_00B9EA60(ASN1String **out, unsigned char **cursor, long length) {
    return func_00B9CF68(out, cursor, length, 0x1d16);
}
