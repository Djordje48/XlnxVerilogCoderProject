/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/Desktop/djordje_ilic_648_projekat/koder.v";
static int ng1[] = {40, 0};
static int ng2[] = {0, 0};
static int ng3[] = {3, 0, 0, 0};
static int ng4[] = {5, 0, 0, 0};
static int ng5[] = {4, 0};
static int ng6[] = {3, 0};
static int ng7[] = {5, 0};



static void Always_53_0(char *t0)
{
    char t6[8];
    char t11[8];
    char t33[16];
    char t36[16];
    char t38[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    char *t37;

LAB0:    t1 = (t0 + 2680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3000);
    *((int *)t2) = 1;
    t3 = (t0 + 2712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1008U);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t5, t8, 2, t9, 32, 1);
    t10 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t12 = (t6 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB9;

LAB6:    if (t23 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t11) = 1;

LAB9:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    xsi_vlog_unsigned_minus(t36, 41, t3, 41, t2, 32);
    xsi_vlogtype_concat(t33, 41, 41, 1U, t36, 41);
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t33, 0, 0, 40);

LAB12:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1168U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t9 = (t6 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB16;

LAB13:    if (t23 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t11) = 1;

LAB16:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t3, 13, t2, 32);
    xsi_vlogtype_concat(t6, 32, 32, 1U, t11, 32);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 12);

LAB19:    goto LAB2;

LAB8:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(56, ng0);
    t34 = (t0 + 1048U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng3)));
    xsi_vlog_unsigned_minus(t36, 41, t35, 41, t34, 32);
    xsi_vlogtype_concat(t33, 41, 41, 1U, t36, 41);
    t37 = (t0 + 1608);
    xsi_vlogvar_assign_value(t37, t33, 0, 0, 40);
    goto LAB12;

LAB15:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(61, ng0);
    t26 = (t0 + 1208U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng6)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_minus(t39, 32, t27, 13, t26, 32);
    xsi_vlogtype_concat(t38, 32, 32, 1U, t39, 32);
    t34 = (t0 + 1768);
    xsi_vlogvar_assign_value(t34, t38, 0, 0, 12);
    goto LAB19;

}


extern void work_m_16651912248596310450_2258601366_init()
{
	static char *pe[] = {(void *)Always_53_0};
	xsi_register_didat("work_m_16651912248596310450_2258601366", "isim/test_isim_beh.exe.sim/work/m_16651912248596310450_2258601366.didat");
	xsi_register_executes(pe);
}
