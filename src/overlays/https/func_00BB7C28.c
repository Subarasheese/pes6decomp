/* compiler: ee-gcc-2.9-nsa-G0 */
/* OpenSSL_0_9_3a, crypto/objects/o_names.c (OBJ_NAME_cleanup). See THIRD_PARTY.md. */

typedef struct lhash_st {
    unsigned char reserved_00[40];
    unsigned long down_load;
    unsigned char reserved_30[120];
} LHASH;
extern void func_00BB6148(LHASH *lh);
extern void func_00BB63D0(LHASH *lh, void (*func)());
typedef struct stack_st STACK;
extern void func_00BDA038(STACK *);
typedef struct obj_name_st OBJ_NAME;
extern LHASH *D_00C3DAC0;
extern STACK *D_00C3DAC8;
extern STACK *D_00C3DACC;
extern STACK *D_00C3DAD0;
extern int D_00CC9628;
extern void func_00BB7BF8(OBJ_NAME *onp, int type);

void func_00BB7C28(int type) {
    unsigned long down_load;
    if (D_00C3DAC0 == ((void *)0))
        return;
    D_00CC9628 = type;
    down_load = D_00C3DAC0->down_load;
    D_00C3DAC0->down_load = 0;
    func_00BB63D0(D_00C3DAC0, func_00BB7BF8);
    if (type < 0) {
        func_00BB6148(D_00C3DAC0);
        func_00BDA038(D_00C3DACC);
        func_00BDA038(D_00C3DAC8);
        func_00BDA038(D_00C3DAD0);
        D_00C3DAC0 = (void *)0;
        D_00C3DACC = (void *)0;
        D_00C3DAC8 = (void *)0;
        D_00C3DAD0 = (void *)0;
    } else
        D_00C3DAC0->down_load = down_load;
}
