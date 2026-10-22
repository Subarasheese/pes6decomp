/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/sjr_clt.c). */
typedef int s32;
typedef s32 intptr_t;
typedef char Sint8;
typedef unsigned int Uint32;
typedef signed int Sint32;
intptr_t DTX_CallUrpc(Uint32 call_id, intptr_t* snd_buf, Sint32 snd_buf_len, intptr_t* rcv_buf, Sint32 rcv_buf_len);
extern intptr_t D_00510C00[64];
extern intptr_t D_00510B00[52];
void* SJUNI_CreateRmt(Sint32 arg0, Sint8* arg1, Sint32 arg2) {
    D_00510B00[0] = arg0;
    D_00510B00[1] = (intptr_t)arg1;
    D_00510B00[2] = arg2;
    DTX_CallUrpc(34, D_00510B00, 3, D_00510C00, 1);
    return (void*)D_00510C00[0];
}