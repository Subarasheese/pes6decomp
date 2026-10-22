/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from recvx-decomp (src/cri/mwlib/ee/lib/libadxe/adx_tlk.c). */
typedef signed char Sint8;
typedef unsigned short Uint16;
typedef signed int Sint32;
Sint32 ADXT_IsHeader(Sint8 *adr, Sint32 siz, Sint32 *hdrsiz);
Sint32 ADXT_IsEndcode(Sint8 *adr, Sint32 siz, Sint32 *endsiz);
Sint32 ADXT_IsEndcode(Sint8 *adr, Sint32 siz, Sint32 *endsiz);
Sint32 ADXT_IsHeader(Sint8 *adr, Sint32 siz, Sint32 *hdrsiz);
Sint32 ADXT_IsHeader(Sint8 *adr, Sint32 siz, Sint32 *hdrsiz);
Sint32 ADXT_IsEndcode(Sint8 *adr, Sint32 siz, Sint32 *endsiz)
{
    if (siz <= 1)
    {
        return 0;
    }
    if ((Uint16)((*(Uint16*)adr >> 8) | (*(Uint16*)adr << 8)) != 0x8001)
    {
        return 0;
    }
    *endsiz = siz;
    return 1;
}