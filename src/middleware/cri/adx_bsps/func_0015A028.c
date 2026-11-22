/* compiler: ee-gcc-2.96-G0 */
/* Raikaru/Persona4-Decompilation, src/cri/re4/adx_dcd.c (ADX_ScanInfoCode). See THIRD_PARTY.md. */

typedef unsigned char Uint8;
typedef unsigned short Uint16;
typedef signed short Sint16;
typedef signed int Sint32;

Sint32 func_0015A028(Uint8 *data, Sint32 len, Sint16 *ofst) {
    Sint32 i;
    Sint32 pos;
    Uint16 code;
    pos = 0x7FFFFFFF;
    code = 0x80;
    for (i = 0; i < (len - 1); i += 2) {
        if ((*((Uint16 *)(data + i))) == code) {
            pos = (i < pos) ? (i) : (pos);
            break;
        }
    }

    if (pos != 0x7FFFFFFF) {
        *ofst = pos;
        return 0;
    }
    *ofst = 0;
    return -1;
}
