/* compiler: ee-gcc-2.96-G0-g */
/* GCC 2000-10-03 exception runtime, execute_cfa_insn, via gustavocanepa/gt4-decomp src/runtime/unit_0059BE80/execute_cfa_insn.c.
 * See THIRD_PARTY.md and LICENSES/GPL-2.0.txt. */
/* Copyright (C) 1997, 1998, 1999, 2000 Free Software Foundation, Inc.
   Contributed by Jason Merrill <jason@cygnus.com>.

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

In addition to the permissions in the GNU General Public License, the
Free Software Foundation gives you unlimited permission to link the
compiled version of this file into combinations with other programs,
and to distribute those combinations without any restriction coming
from the use of this file.  (The General Public License restrictions
do apply in other respects; for example, they cover modification of
the file, and distribution when not linked into a combine
executable.)

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

/* ANSI and traditional C compatibility macros.
   Copyright (C) 1996, 1997, 1998, 1999 Free Software Foundation, Inc.

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

/* ANSI and traditional C compatability macros
   Copyright 1991, 1992, 1996, 1999 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.  */

/* Get common system includes and various definitions and declarations
   based on target macros.
   Copyright (C) 2000 Free Software Foundation, Inc.

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

typedef unsigned int size_t;
typedef int ptrdiff_t;

extern void *func_001ADB70(size_t);

extern void func_001ADBC8(void *);

/* Definitions of various defaults for how to do assembler output
   (most of which are designed to be appropriate for GAS or for
   some BSD assembler).
   Copyright (C) 1992, 1996, 1997, 1998, 1999, 2000
   Free Software Foundation, Inc.
   Contributed by Ron Guilmette (rfg@monkeys.com)

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

/* Declarations and definitions of codes relating to the DWARF2 symbolic
   debugging information format.
   Copyright (C) 1992, 1993, 1995, 1996, 1997, 2000
   Free Software Foundation, Inc.
   Contributed by Gary Funck (gary@intrepid.com).  Derived from the
   DWARF 1 implementation written by Ron Guilmette (rfg@monkeys.com).

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

enum dwarf_tag {
    DW_TAG_padding = 0x00,
    DW_TAG_array_type = 0x01,
    DW_TAG_class_type = 0x02,
    DW_TAG_entry_point = 0x03,
    DW_TAG_enumeration_type = 0x04,
    DW_TAG_formal_parameter = 0x05,
    DW_TAG_imported_declaration = 0x08,
    DW_TAG_label = 0x0a,
    DW_TAG_lexical_block = 0x0b,
    DW_TAG_member = 0x0d,
    DW_TAG_pointer_type = 0x0f,
    DW_TAG_reference_type = 0x10,
    DW_TAG_compile_unit = 0x11,
    DW_TAG_string_type = 0x12,
    DW_TAG_structure_type = 0x13,
    DW_TAG_subroutine_type = 0x15,
    DW_TAG_typedef = 0x16,
    DW_TAG_union_type = 0x17,
    DW_TAG_unspecified_parameters = 0x18,
    DW_TAG_variant = 0x19,
    DW_TAG_common_block = 0x1a,
    DW_TAG_common_inclusion = 0x1b,
    DW_TAG_inheritance = 0x1c,
    DW_TAG_inlined_subroutine = 0x1d,
    DW_TAG_module = 0x1e,
    DW_TAG_ptr_to_member_type = 0x1f,
    DW_TAG_set_type = 0x20,
    DW_TAG_subrange_type = 0x21,
    DW_TAG_with_stmt = 0x22,
    DW_TAG_access_declaration = 0x23,
    DW_TAG_base_type = 0x24,
    DW_TAG_catch_block = 0x25,
    DW_TAG_const_type = 0x26,
    DW_TAG_constant = 0x27,
    DW_TAG_enumerator = 0x28,
    DW_TAG_file_type = 0x29,
    DW_TAG_friend = 0x2a,
    DW_TAG_namelist = 0x2b,
    DW_TAG_namelist_item = 0x2c,
    DW_TAG_packed_type = 0x2d,
    DW_TAG_subprogram = 0x2e,
    DW_TAG_template_type_param = 0x2f,
    DW_TAG_template_value_param = 0x30,
    DW_TAG_thrown_type = 0x31,
    DW_TAG_try_block = 0x32,
    DW_TAG_variant_part = 0x33,
    DW_TAG_variable = 0x34,
    DW_TAG_volatile_type = 0x35,

    DW_TAG_MIPS_loop = 0x4081,

    DW_TAG_format_label = 0x4101,
    DW_TAG_function_template = 0x4102,
    DW_TAG_class_template = 0x4103,
    DW_TAG_GNU_BINCL = 0x4104,
    DW_TAG_GNU_EINCL = 0x4105
};

enum dwarf_form {
    DW_FORM_addr = 0x01,
    DW_FORM_block2 = 0x03,
    DW_FORM_block4 = 0x04,
    DW_FORM_data2 = 0x05,
    DW_FORM_data4 = 0x06,
    DW_FORM_data8 = 0x07,
    DW_FORM_string = 0x08,
    DW_FORM_block = 0x09,
    DW_FORM_block1 = 0x0a,
    DW_FORM_data1 = 0x0b,
    DW_FORM_flag = 0x0c,
    DW_FORM_sdata = 0x0d,
    DW_FORM_strp = 0x0e,
    DW_FORM_udata = 0x0f,
    DW_FORM_ref_addr = 0x10,
    DW_FORM_ref1 = 0x11,
    DW_FORM_ref2 = 0x12,
    DW_FORM_ref4 = 0x13,
    DW_FORM_ref8 = 0x14,
    DW_FORM_ref_udata = 0x15,
    DW_FORM_indirect = 0x16
};

enum dwarf_attribute {
    DW_AT_sibling = 0x01,
    DW_AT_location = 0x02,
    DW_AT_name = 0x03,
    DW_AT_ordering = 0x09,
    DW_AT_subscr_data = 0x0a,
    DW_AT_byte_size = 0x0b,
    DW_AT_bit_offset = 0x0c,
    DW_AT_bit_size = 0x0d,
    DW_AT_element_list = 0x0f,
    DW_AT_stmt_list = 0x10,
    DW_AT_low_pc = 0x11,
    DW_AT_high_pc = 0x12,
    DW_AT_language = 0x13,
    DW_AT_member = 0x14,
    DW_AT_discr = 0x15,
    DW_AT_discr_value = 0x16,
    DW_AT_visibility = 0x17,
    DW_AT_import = 0x18,
    DW_AT_string_length = 0x19,
    DW_AT_common_reference = 0x1a,
    DW_AT_comp_dir = 0x1b,
    DW_AT_const_value = 0x1c,
    DW_AT_containing_type = 0x1d,
    DW_AT_default_value = 0x1e,
    DW_AT_inline = 0x20,
    DW_AT_is_optional = 0x21,
    DW_AT_lower_bound = 0x22,
    DW_AT_producer = 0x25,
    DW_AT_prototyped = 0x27,
    DW_AT_return_addr = 0x2a,
    DW_AT_start_scope = 0x2c,
    DW_AT_stride_size = 0x2e,
    DW_AT_upper_bound = 0x2f,
    DW_AT_abstract_origin = 0x31,
    DW_AT_accessibility = 0x32,
    DW_AT_address_class = 0x33,
    DW_AT_artificial = 0x34,
    DW_AT_base_types = 0x35,
    DW_AT_calling_convention = 0x36,
    DW_AT_count = 0x37,
    DW_AT_data_member_location = 0x38,
    DW_AT_decl_column = 0x39,
    DW_AT_decl_file = 0x3a,
    DW_AT_decl_line = 0x3b,
    DW_AT_declaration = 0x3c,
    DW_AT_discr_list = 0x3d,
    DW_AT_encoding = 0x3e,
    DW_AT_external = 0x3f,
    DW_AT_frame_base = 0x40,
    DW_AT_friend = 0x41,
    DW_AT_identifier_case = 0x42,
    DW_AT_macro_info = 0x43,
    DW_AT_namelist_items = 0x44,
    DW_AT_priority = 0x45,
    DW_AT_segment = 0x46,
    DW_AT_specification = 0x47,
    DW_AT_static_link = 0x48,
    DW_AT_type = 0x49,
    DW_AT_use_location = 0x4a,
    DW_AT_variable_parameter = 0x4b,
    DW_AT_virtuality = 0x4c,
    DW_AT_vtable_elem_location = 0x4d,

    DW_AT_MIPS_fde = 0x2001,
    DW_AT_MIPS_loop_begin = 0x2002,
    DW_AT_MIPS_tail_loop_begin = 0x2003,
    DW_AT_MIPS_epilog_begin = 0x2004,
    DW_AT_MIPS_loop_unroll_factor = 0x2005,
    DW_AT_MIPS_software_pipeline_depth = 0x2006,
    DW_AT_MIPS_linkage_name = 0x2007,
    DW_AT_MIPS_stride = 0x2008,
    DW_AT_MIPS_abstract_name = 0x2009,
    DW_AT_MIPS_clone_origin = 0x200a,
    DW_AT_MIPS_has_inlines = 0x200b,

    DW_AT_sf_names = 0x2101,
    DW_AT_src_info = 0x2102,
    DW_AT_mac_info = 0x2103,
    DW_AT_src_coords = 0x2104,
    DW_AT_body_begin = 0x2105,
    DW_AT_body_end = 0x2106
};

enum dwarf_location_atom {
    DW_OP_addr = 0x03,
    DW_OP_deref = 0x06,
    DW_OP_const1u = 0x08,
    DW_OP_const1s = 0x09,
    DW_OP_const2u = 0x0a,
    DW_OP_const2s = 0x0b,
    DW_OP_const4u = 0x0c,
    DW_OP_const4s = 0x0d,
    DW_OP_const8u = 0x0e,
    DW_OP_const8s = 0x0f,
    DW_OP_constu = 0x10,
    DW_OP_consts = 0x11,
    DW_OP_dup = 0x12,
    DW_OP_drop = 0x13,
    DW_OP_over = 0x14,
    DW_OP_pick = 0x15,
    DW_OP_swap = 0x16,
    DW_OP_rot = 0x17,
    DW_OP_xderef = 0x18,
    DW_OP_abs = 0x19,
    DW_OP_and = 0x1a,
    DW_OP_div = 0x1b,
    DW_OP_minus = 0x1c,
    DW_OP_mod = 0x1d,
    DW_OP_mul = 0x1e,
    DW_OP_neg = 0x1f,
    DW_OP_not = 0x20,
    DW_OP_or = 0x21,
    DW_OP_plus = 0x22,
    DW_OP_plus_uconst = 0x23,
    DW_OP_shl = 0x24,
    DW_OP_shr = 0x25,
    DW_OP_shra = 0x26,
    DW_OP_xor = 0x27,
    DW_OP_bra = 0x28,
    DW_OP_eq = 0x29,
    DW_OP_ge = 0x2a,
    DW_OP_gt = 0x2b,
    DW_OP_le = 0x2c,
    DW_OP_lt = 0x2d,
    DW_OP_ne = 0x2e,
    DW_OP_skip = 0x2f,
    DW_OP_lit0 = 0x30,
    DW_OP_lit1 = 0x31,
    DW_OP_lit2 = 0x32,
    DW_OP_lit3 = 0x33,
    DW_OP_lit4 = 0x34,
    DW_OP_lit5 = 0x35,
    DW_OP_lit6 = 0x36,
    DW_OP_lit7 = 0x37,
    DW_OP_lit8 = 0x38,
    DW_OP_lit9 = 0x39,
    DW_OP_lit10 = 0x3a,
    DW_OP_lit11 = 0x3b,
    DW_OP_lit12 = 0x3c,
    DW_OP_lit13 = 0x3d,
    DW_OP_lit14 = 0x3e,
    DW_OP_lit15 = 0x3f,
    DW_OP_lit16 = 0x40,
    DW_OP_lit17 = 0x41,
    DW_OP_lit18 = 0x42,
    DW_OP_lit19 = 0x43,
    DW_OP_lit20 = 0x44,
    DW_OP_lit21 = 0x45,
    DW_OP_lit22 = 0x46,
    DW_OP_lit23 = 0x47,
    DW_OP_lit24 = 0x48,
    DW_OP_lit25 = 0x49,
    DW_OP_lit26 = 0x4a,
    DW_OP_lit27 = 0x4b,
    DW_OP_lit28 = 0x4c,
    DW_OP_lit29 = 0x4d,
    DW_OP_lit30 = 0x4e,
    DW_OP_lit31 = 0x4f,
    DW_OP_reg0 = 0x50,
    DW_OP_reg1 = 0x51,
    DW_OP_reg2 = 0x52,
    DW_OP_reg3 = 0x53,
    DW_OP_reg4 = 0x54,
    DW_OP_reg5 = 0x55,
    DW_OP_reg6 = 0x56,
    DW_OP_reg7 = 0x57,
    DW_OP_reg8 = 0x58,
    DW_OP_reg9 = 0x59,
    DW_OP_reg10 = 0x5a,
    DW_OP_reg11 = 0x5b,
    DW_OP_reg12 = 0x5c,
    DW_OP_reg13 = 0x5d,
    DW_OP_reg14 = 0x5e,
    DW_OP_reg15 = 0x5f,
    DW_OP_reg16 = 0x60,
    DW_OP_reg17 = 0x61,
    DW_OP_reg18 = 0x62,
    DW_OP_reg19 = 0x63,
    DW_OP_reg20 = 0x64,
    DW_OP_reg21 = 0x65,
    DW_OP_reg22 = 0x66,
    DW_OP_reg23 = 0x67,
    DW_OP_reg24 = 0x68,
    DW_OP_reg25 = 0x69,
    DW_OP_reg26 = 0x6a,
    DW_OP_reg27 = 0x6b,
    DW_OP_reg28 = 0x6c,
    DW_OP_reg29 = 0x6d,
    DW_OP_reg30 = 0x6e,
    DW_OP_reg31 = 0x6f,
    DW_OP_breg0 = 0x70,
    DW_OP_breg1 = 0x71,
    DW_OP_breg2 = 0x72,
    DW_OP_breg3 = 0x73,
    DW_OP_breg4 = 0x74,
    DW_OP_breg5 = 0x75,
    DW_OP_breg6 = 0x76,
    DW_OP_breg7 = 0x77,
    DW_OP_breg8 = 0x78,
    DW_OP_breg9 = 0x79,
    DW_OP_breg10 = 0x7a,
    DW_OP_breg11 = 0x7b,
    DW_OP_breg12 = 0x7c,
    DW_OP_breg13 = 0x7d,
    DW_OP_breg14 = 0x7e,
    DW_OP_breg15 = 0x7f,
    DW_OP_breg16 = 0x80,
    DW_OP_breg17 = 0x81,
    DW_OP_breg18 = 0x82,
    DW_OP_breg19 = 0x83,
    DW_OP_breg20 = 0x84,
    DW_OP_breg21 = 0x85,
    DW_OP_breg22 = 0x86,
    DW_OP_breg23 = 0x87,
    DW_OP_breg24 = 0x88,
    DW_OP_breg25 = 0x89,
    DW_OP_breg26 = 0x8a,
    DW_OP_breg27 = 0x8b,
    DW_OP_breg28 = 0x8c,
    DW_OP_breg29 = 0x8d,
    DW_OP_breg30 = 0x8e,
    DW_OP_breg31 = 0x8f,
    DW_OP_regx = 0x90,
    DW_OP_fbreg = 0x91,
    DW_OP_bregx = 0x92,
    DW_OP_piece = 0x93,
    DW_OP_deref_size = 0x94,
    DW_OP_xderef_size = 0x95,
    DW_OP_nop = 0x96
};

enum dwarf_type {
    DW_ATE_void = 0x0,
    DW_ATE_address = 0x1,
    DW_ATE_boolean = 0x2,
    DW_ATE_complex_float = 0x3,
    DW_ATE_float = 0x4,
    DW_ATE_signed = 0x5,
    DW_ATE_signed_char = 0x6,
    DW_ATE_unsigned = 0x7,
    DW_ATE_unsigned_char = 0x8
};

enum dwarf_array_dim_ordering { DW_ORD_row_major = 0, DW_ORD_col_major = 1 };

enum dwarf_access_attribute {
    DW_ACCESS_public = 1,
    DW_ACCESS_protected = 2,
    DW_ACCESS_private = 3
};

enum dwarf_visibility_attribute { DW_VIS_local = 1, DW_VIS_exported = 2, DW_VIS_qualified = 3 };

enum dwarf_virtuality_attribute {
    DW_VIRTUALITY_none = 0,
    DW_VIRTUALITY_virtual = 1,
    DW_VIRTUALITY_pure_virtual = 2
};

enum dwarf_id_case {
    DW_ID_case_sensitive = 0,
    DW_ID_up_case = 1,
    DW_ID_down_case = 2,
    DW_ID_case_insensitive = 3
};

enum dwarf_calling_convention { DW_CC_normal = 0x1, DW_CC_program = 0x2, DW_CC_nocall = 0x3 };

enum dwarf_inline_attribute {
    DW_INL_not_inlined = 0,
    DW_INL_inlined = 1,
    DW_INL_declared_not_inlined = 2,
    DW_INL_declared_inlined = 3
};

enum dwarf_discrim_list { DW_DSC_label = 0, DW_DSC_range = 1 };

enum dwarf_line_number_ops {
    DW_LNS_extended_op = 0,
    DW_LNS_copy = 1,
    DW_LNS_advance_pc = 2,
    DW_LNS_advance_line = 3,
    DW_LNS_set_file = 4,
    DW_LNS_set_column = 5,
    DW_LNS_negate_stmt = 6,
    DW_LNS_set_basic_block = 7,
    DW_LNS_const_add_pc = 8,
    DW_LNS_fixed_advance_pc = 9
};

enum dwarf_line_number_x_ops {
    DW_LNE_end_sequence = 1,
    DW_LNE_set_address = 2,
    DW_LNE_define_file = 3
};

enum dwarf_call_frame_info {
    DW_CFA_advance_loc = 0x40,
    DW_CFA_offset = 0x80,
    DW_CFA_restore = 0xc0,
    DW_CFA_nop = 0x00,
    DW_CFA_set_loc = 0x01,
    DW_CFA_advance_loc1 = 0x02,
    DW_CFA_advance_loc2 = 0x03,
    DW_CFA_advance_loc4 = 0x04,
    DW_CFA_offset_extended = 0x05,
    DW_CFA_restore_extended = 0x06,
    DW_CFA_undefined = 0x07,
    DW_CFA_same_value = 0x08,
    DW_CFA_register = 0x09,
    DW_CFA_remember_state = 0x0a,
    DW_CFA_restore_state = 0x0b,
    DW_CFA_def_cfa = 0x0c,
    DW_CFA_def_cfa_register = 0x0d,
    DW_CFA_def_cfa_offset = 0x0e,
    DW_CFA_def_cfa_expression = 0x0f,
    DW_CFA_expression = 0x10,

    DW_CFA_MIPS_advance_loc8 = 0x1d,

    DW_CFA_GNU_window_save = 0x2d,
    DW_CFA_GNU_args_size = 0x2e,
    DW_CFA_GNU_negative_offset_extended = 0x2f
};

enum dwarf_source_language {
    DW_LANG_C89 = 0x0001,
    DW_LANG_C = 0x0002,
    DW_LANG_Ada83 = 0x0003,
    DW_LANG_C_plus_plus = 0x0004,
    DW_LANG_Cobol74 = 0x0005,
    DW_LANG_Cobol85 = 0x0006,
    DW_LANG_Fortran77 = 0x0007,
    DW_LANG_Fortran90 = 0x0008,
    DW_LANG_Pascal83 = 0x0009,
    DW_LANG_Modula2 = 0x000a,
    DW_LANG_Java = 0x000b,
    DW_LANG_Mips_Assembler = 0x8001
};

enum dwarf_macinfo_record_type {
    DW_MACINFO_define = 1,
    DW_MACINFO_undef = 2,
    DW_MACINFO_start_file = 3,
    DW_MACINFO_end_file = 4,
    DW_MACINFO_vendor_ext = 255
};

/* Copyright (C) 1997, 1998, 1999, 2000 Free Software Foundation, Inc.
   Contributed by Jason Merrill <jason@cygnus.com>.

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

typedef struct frame_state {
    void *cfa;
    void *eh_ptr;
    long cfa_offset;
    long base_offset;
    long args_size;
    long reg_or_offset[122 + 1];
    unsigned short cfa_reg;
    unsigned short retaddr_column;
    char saved[122 + 1];
    char indirect;
} frame_state;

struct object {
    void *pc_begin;
    void *pc_end;
    struct dwarf_fde *fde_begin;

    struct dwarf_fde **fde_array;
    size_t count;
    struct object *next;
};

extern void func_005BECB0(void *);
extern void func_005BED48(void *);
extern void func_005BEE38(void *);

extern void func_005BEC48(void *, struct object *);

extern void func_005BECE0(void *, struct object *);

extern void *func_005BED78(void *);

extern struct frame_state *func_005BF910(void *, struct frame_state *);

/* Copyright (C) 1997, 1999, 2000 Free Software Foundation, Inc.

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

typedef int __gthread_mutex_t;

static __inline__ int __gthread_active_p(void)

{
    return 0;
}

static __inline__ int __gthread_mutex_lock(__gthread_mutex_t *mutex __attribute__((__unused__)))

{
    return 0;
}

static __inline__ int __gthread_mutex_trylock(__gthread_mutex_t *mutex __attribute__((__unused__)))

{
    return 0;
}

static __inline__ int __gthread_mutex_unlock(__gthread_mutex_t *mutex __attribute__((__unused__)))

{
    return 0;
}

typedef int sword __attribute__((mode(SI)));
typedef unsigned int uword __attribute__((mode(SI)));
typedef unsigned int uaddr __attribute__((mode(pointer)));
typedef int saddr __attribute__((mode(pointer)));
typedef unsigned char ubyte;

struct dwarf_cie {
    uword length;
    sword CIE_id;
    ubyte version;
    char augmentation[0];
} __attribute__((packed, aligned(__alignof__(void *))));

struct dwarf_fde {
    uword length;
    sword CIE_delta;
    void *pc_begin;
    uaddr pc_range;
} __attribute__((packed, aligned(__alignof__(void *))));

typedef struct dwarf_fde fde;

extern struct object *objects;

struct cie_info {
    char *augmentation;
    void *eh_ptr;
    int code_align;
    int data_align;
    unsigned ra_regno;
};

struct frame_state_internal {
    struct frame_state s;
    struct frame_state_internal *saved_state;
};

static void *func_001ABB58(unsigned char *buf, unsigned *r);

static void *decode_sleb128(unsigned char *buf, int *r);

union unaligned {
    void *p;
    unsigned b2 __attribute__((mode(HI)));
    unsigned b4 __attribute__((mode(SI)));
    unsigned b8 __attribute__((mode(DI)));
} __attribute__((packed));
static __inline__ void *read_pointer(void *p)

{
    union unaligned *up = p;
    return up->p;
}
static __inline__ unsigned read_1byte(void *p)

{
    return *(unsigned char *)p;
}
static __inline__ unsigned read_2byte(void *p)

{
    union unaligned *up = p;
    return up->b2;
}
static __inline__ unsigned read_4byte(void *p)

{
    union unaligned *up = p;
    return up->b4;
}
static __inline__ unsigned long read_8byte(void *p)

{
    union unaligned *up = p;
    return up->b8;
}

static __inline__ saddr fde_compare(fde *x, fde *y)

{
    return (saddr)x->pc_begin - (saddr)y->pc_begin;
}

static __inline__ fde *next_fde(fde *p)

{
    return (fde *)(((char *)p) + p->length + sizeof(p->length));
}

/* Copyright (C) 1997, 1998, 1999, 2000 Free Software Foundation, Inc.
   Contributed by Jason Merrill <jason@cygnus.com>.

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

In addition to the permissions in the GNU General Public License, the
Free Software Foundation gives you unlimited permission to link the
compiled version of this file into combinations with other programs,
and to distribute those combinations without any restriction coming
from the use of this file.  (The General Public License restrictions
do apply in other respects; for example, they cover modification of
the file, and distribution when not linked into a combine
executable.)

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

typedef struct fde_vector {
    fde **array;
    size_t count;
} fde_vector;

typedef struct fde_accumulator {
    fde_vector linear;
    fde_vector erratic;
} fde_accumulator;

static __inline__ int start_fde_sort(fde_accumulator *accu, size_t count)

{
    accu->linear.array = count ? (fde **)func_001ADB70(sizeof(fde *) * count) : 0;
    accu->erratic.array = accu->linear.array ? (fde **)func_001ADB70(sizeof(fde *) * count) : 0;
    accu->linear.count = 0;
    accu->erratic.count = 0;

    return accu->linear.array != 0;
}

static __inline__ void fde_insert(fde_accumulator *accu, fde *this_fde)

{
    if (accu->linear.array)
        accu->linear.array[accu->linear.count++] = this_fde;
}

static __inline__ void fde_split(fde_vector *linear, fde_vector *erratic)

{
    extern fde *D_0088D944;
#define marker D_0088D944
    size_t count = linear->count;
    fde **chain_end = &marker;
    size_t i, j, k;

    if (sizeof(fde *) != sizeof(fde **))
        func_001AD608();

    for (i = 0; i < count; i++) {
        fde **probe;

        for (probe = chain_end; probe != &marker && fde_compare(linear->array[i], *probe) < 0;
             probe = chain_end) {
            chain_end = (fde **)erratic->array[probe - linear->array];
            erratic->array[probe - linear->array] = 0;
        }
        erratic->array[i] = (fde *)chain_end;
        chain_end = &linear->array[i];
    }

    for (i = j = k = 0; i < count; i++)
        if (erratic->array[i])
            linear->array[j++] = linear->array[i];
        else
            erratic->array[k++] = linear->array[i];
    linear->count = j;
    erratic->count = k;
}

static __inline__ void frame_heapsort(fde_vector *erratic)

{
    fde **a = erratic->array;

    size_t n = erratic->count;
    size_t m = n;
    size_t i;

    while (m > 0) {
        m--;
        for (i = m; 2 * i + 1 < n;) {
            if (2 * i + 2 < n && fde_compare(a[2 * i + 2], a[2 * i + 1]) > 0 &&
                fde_compare(a[2 * i + 2], a[i]) > 0) {
                do {
                    fde *tmp = a[i];
                    a[i] = a[2 * i + 2];
                    a[2 * i + 2] = tmp;
                } while (0);
                i = 2 * i + 2;
            } else if (fde_compare(a[2 * i + 1], a[i]) > 0) {
                do {
                    fde *tmp = a[i];
                    a[i] = a[2 * i + 1];
                    a[2 * i + 1] = tmp;
                } while (0);
                i = 2 * i + 1;
            } else
                break;
        }
    }
    while (n > 1) {
        n--;
        do {
            fde *tmp = a[0];
            a[0] = a[n];
            a[n] = tmp;
        } while (0);
        for (i = 0; 2 * i + 1 < n;) {
            if (2 * i + 2 < n && fde_compare(a[2 * i + 2], a[2 * i + 1]) > 0 &&
                fde_compare(a[2 * i + 2], a[i]) > 0) {
                do {
                    fde *tmp = a[i];
                    a[i] = a[2 * i + 2];
                    a[2 * i + 2] = tmp;
                } while (0);
                i = 2 * i + 2;
            } else if (fde_compare(a[2 * i + 1], a[i]) > 0) {
                do {
                    fde *tmp = a[i];
                    a[i] = a[2 * i + 1];
                    a[2 * i + 1] = tmp;
                } while (0);
                i = 2 * i + 1;
            } else
                break;
        }
    }
}

static void fde_merge(fde_vector *v1, const fde_vector *v2);

static fde **end_fde_sort(fde_accumulator *accu, size_t count);

void func_005BEC48(void *begin, struct object *ob);

void func_005BECB0(void *begin);

void func_005BECE0(void *begin, struct object *ob);

void func_005BED48(void *begin);

void *func_005BED78(void *begin);

void func_005BEE38(void *begin);

static size_t count_fdes(fde *this_fde);

static void add_fdes(fde *this_fde, fde_accumulator *accu, void **beg_ptr, void **end_ptr);

static fde *search_fdes(fde *this_fde, void *pc);

static void frame_init(struct object *ob);

static fde *find_fde(void *pc);

static __inline__ struct dwarf_cie *get_cie(fde *f)

{
    return ((void *)&f->CIE_delta) - f->CIE_delta;
}

static void *extract_cie_info(fde *f, struct cie_info *c);

static void *func_001AC9C0(unsigned char *buf, struct frame_state *state);

static void *func_001ACAE0(void *p, struct frame_state_internal *state, struct cie_info *info,
                           void **pc)

{
    unsigned insn = *(unsigned char *)p++;
    unsigned reg;
    int offset;

    if (insn & DW_CFA_advance_loc)
        *pc += ((insn & 0x3f) * info->code_align);
    else if (insn & DW_CFA_offset) {
        reg = (insn & 0x3f);
        p = func_001ABB58(p, &offset);
        if (reg == state->s.cfa_reg)

            ;

        else {
            offset *= info->data_align;
            state->s.saved[reg] = 1;
            state->s.reg_or_offset[reg] = offset;
        }
    } else if (insn & DW_CFA_restore) {
        reg = (insn & 0x3f);
        state->s.saved[reg] = 0;
    } else
        switch (insn) {
        case DW_CFA_set_loc:
            *pc = read_pointer(p);
            p += sizeof(void *);
            break;
        case DW_CFA_advance_loc1:
            *pc += read_1byte(p);
            p += 1;
            break;
        case DW_CFA_advance_loc2:
            *pc += read_2byte(p);
            p += 2;
            break;
        case DW_CFA_advance_loc4:
            *pc += read_4byte(p);
            p += 4;
            break;

        case DW_CFA_offset_extended:
            p = func_001ABB58(p, &reg);
            p = func_001ABB58(p, &offset);
            if (reg == state->s.cfa_reg)
                ;
            else {
                offset *= info->data_align;
                state->s.saved[reg] = 1;
                state->s.reg_or_offset[reg] = offset;
            }
            break;
        case DW_CFA_restore_extended:
            p = func_001ABB58(p, &reg);
            state->s.saved[reg] = 0;
            break;

        case DW_CFA_undefined:
        case DW_CFA_same_value:
        case DW_CFA_nop:
            break;

        case DW_CFA_register: {
            unsigned reg2;
            p = func_001ABB58(p, &reg);
            p = func_001ABB58(p, &reg2);
            state->s.saved[reg] = 2;
            state->s.reg_or_offset[reg] = reg2;
        } break;

        case DW_CFA_def_cfa:
            p = func_001ABB58(p, &reg);
            p = func_001ABB58(p, &offset);
            state->s.cfa_reg = reg;
            state->s.cfa_offset = offset;
            break;
        case DW_CFA_def_cfa_register:
            p = func_001ABB58(p, &reg);
            state->s.cfa_reg = reg;
            break;
        case DW_CFA_def_cfa_offset:
            p = func_001ABB58(p, &offset);
            state->s.cfa_offset = offset;
            break;
        case DW_CFA_def_cfa_expression: {
            void *end;
            state->s.cfa_reg = 0;
            state->s.cfa_offset = 0;
            state->s.base_offset = 0;
            state->s.indirect = 0;

            p = func_001ABB58(p, &offset);
            end = p + offset;
            while (p < end)
                p = func_001AC9C0(p, &(state->s));
            break;
        }

        case DW_CFA_remember_state: {
            struct frame_state_internal *save =
                (struct frame_state_internal *)func_001ADB70(sizeof(struct frame_state_internal));
            memcpy(save, state, sizeof(struct frame_state_internal));
            state->saved_state = save;
        } break;
        case DW_CFA_restore_state: {
            struct frame_state_internal *save = state->saved_state;
            memcpy(state, save, sizeof(struct frame_state_internal));
            func_001ADBC8(save);
        } break;

        case DW_CFA_GNU_window_save:
            for (reg = 16; reg < 32; ++reg) {
                state->s.saved[reg] = 1;
                state->s.reg_or_offset[reg] = (reg - 16) * sizeof(void *);
            }
            break;

        case DW_CFA_GNU_args_size:
            p = func_001ABB58(p, &offset);
            state->s.args_size = offset;
            break;

        case DW_CFA_GNU_negative_offset_extended:
            p = func_001ABB58(p, &reg);
            p = func_001ABB58(p, &offset);
            offset *= info->data_align;
            state->s.saved[reg] = 1;
            state->s.reg_or_offset[reg] = -offset;
            break;

        default:
            func_001AD608();
        }
    return p;
}

struct frame_state *func_005BF910(void *pc_target, struct frame_state *state_in);
