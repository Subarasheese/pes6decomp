/* compiler: ee-gcc-2.9-G0 */
/* Voicedrew11/kfiv-decomp, src/sce/libvu0/libvu0.c (sceVu0TransposeMatrix). See THIRD_PARTY.md. */
/* 128-bit lq/sq and MMI moves plus VU0 code: Sony writes the whole function in assembly: Sony's libvu0 writes it as assembly. */

#define VU0_MEM(insn) __asm__ __volatile__(insn : : : "memory")
#define VU0_REG(insn) __asm__ __volatile__(insn)
#define VU0_LSV(mnem, vf, off, base) VU0_MEM(#mnem " $vf" #vf ", " #off "($" #base ")")
#define VU0_LSGP(mnem, gp, off, base) VU0_MEM(#mnem " $" #gp ", " #off "($" #base ")")
#define VU0_V2OP(mnem, d, a) VU0_REG(#mnem " $vf" #d ", $vf" #a)
#define VU0_V3OP(mnem, d, a, b) VU0_REG(#mnem " $vf" #d ", $vf" #a ", $vf" #b)
#define VU0_V3OP_BC(mnem, d, a, b, bc) VU0_REG(#mnem " $vf" #d ", $vf" #a ", $vf" #b #bc)
#define VU0_V3OP_ACC(mnem, a, b) VU0_REG(#mnem " ACC, $vf" #a ", $vf" #b)
#define VU0_V3OP_ACC_BC(mnem, a, b, bc) VU0_REG(#mnem " ACC, $vf" #a ", $vf" #b #bc)
#define VU0_MFC1(gp, fp) VU0_REG("mfc1 $" #gp ", $f" #fp)
#define VU0_QMTC2_NI(gp, vf) VU0_REG("qmtc2.ni $" #gp ", $vf" #vf)
/* vwaitq: no memory effect, sequences later VU0 ops with prior compute. */
#define VU0_WAIT() __asm__ __volatile__("vwaitq")
/* Several COP2 transfer pairs have a load-delay or Q-pipeline interlock that
   gas's default `.set reorder` would fill with a nop; those runs are written
   noreorder. */
#define VU0_NOREORDER_BEGIN() __asm__ __volatile__(".set noreorder")
#define VU0_NOREORDER_END() __asm__ __volatile__(".set reorder")

__asm__(".section .text\n"
        "    .align 3\n"
        "    .set noat\n"
        "    .set noreorder\n"
        "    .global sceVu0TransposeMatrix\n"
        "    .type sceVu0TransposeMatrix, @function\n"
        "sceVu0TransposeMatrix:\n"
        "    lq    $8, 0x0($5)\n"
        "    lq    $9, 0x10($5)\n"
        "    lq    $10, 0x20($5)\n"
        "    lq    $11, 0x30($5)\n"
        "    pextlw $12, $9, $8\n"
        "    pextuw $13, $9, $8\n"
        "    pextlw $14, $11, $10\n"
        "    pextuw $15, $11, $10\n"
        "    pcpyld $8, $14, $12\n"
        "    pcpyud $9, $12, $14\n"
        "    pcpyld $10, $15, $13\n"
        "    pcpyud $11, $13, $15\n"
        "    sq    $8, 0x0($4)\n"
        "    sq    $9, 0x10($4)\n"
        "    sq    $10, 0x20($4)\n"
        "    jr    $31\n"
        "    sq    $11, 0x30($4)\n"
        "    .size sceVu0TransposeMatrix, . - sceVu0TransposeMatrix\n"
        "    nop\n"
        "    .set reorder\n"
        "    .set at\n");
