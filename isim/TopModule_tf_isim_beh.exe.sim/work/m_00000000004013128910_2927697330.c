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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Sandeep Kooner/Desktop/360Labs/Project1DebouncedCounter/pixel_controller.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {7U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {2032U, 0U};
static unsigned int ng10[] = {2025U, 0U};
static unsigned int ng11[] = {2010U, 0U};
static unsigned int ng12[] = {1979U, 0U};
static unsigned int ng13[] = {1916U, 0U};
static unsigned int ng14[] = {1789U, 0U};
static unsigned int ng15[] = {1534U, 0U};
static unsigned int ng16[] = {1023U, 0U};
static unsigned int ng17[] = {2040U, 0U};



static void Always_26_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 5104);
    *((int *)t2) = 1;
    t3 = (t0 + 4320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB20;

LAB21:
LAB23:
LAB22:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB24:    goto LAB2;

LAB6:    xsi_set_current_line(30, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 3368);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 3);
    goto LAB24;

LAB8:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB24;

LAB10:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB24;

LAB12:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB24;

LAB14:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB24;

LAB16:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB24;

LAB18:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB24;

LAB20:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB24;

}

static void Always_42_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5120);
    *((int *)t2) = 1;
    t3 = (t0 + 4568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);

LAB10:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(44, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3208);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 3);
    goto LAB7;

LAB8:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 3368);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 3208);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 3);
    goto LAB10;

}

static void Always_50_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 5136);
    *((int *)t2) = 1;
    t3 = (t0 + 4816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB20;

LAB21:
LAB23:
LAB22:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 3, 0, 1);
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t2, 4, 0, 1);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t2, 5, 0, 1);
    t9 = (t0 + 2568);
    xsi_vlogvar_assign_value(t9, t2, 6, 0, 1);
    t10 = (t0 + 2408);
    xsi_vlogvar_assign_value(t10, t2, 7, 0, 1);
    t11 = (t0 + 2248);
    xsi_vlogvar_assign_value(t11, t2, 8, 0, 1);
    t12 = (t0 + 2088);
    xsi_vlogvar_assign_value(t12, t2, 9, 0, 1);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t2, 10, 0, 1);

LAB24:    goto LAB2;

LAB6:    xsi_set_current_line(54, ng0);
    t9 = ((char*)((ng9)));
    t10 = (t0 + 1768);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 3);
    t11 = (t0 + 3048);
    xsi_vlogvar_assign_value(t11, t9, 3, 0, 1);
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t9, 4, 0, 1);
    t13 = (t0 + 2728);
    xsi_vlogvar_assign_value(t13, t9, 5, 0, 1);
    t14 = (t0 + 2568);
    xsi_vlogvar_assign_value(t14, t9, 6, 0, 1);
    t15 = (t0 + 2408);
    xsi_vlogvar_assign_value(t15, t9, 7, 0, 1);
    t16 = (t0 + 2248);
    xsi_vlogvar_assign_value(t16, t9, 8, 0, 1);
    t17 = (t0 + 2088);
    xsi_vlogvar_assign_value(t17, t9, 9, 0, 1);
    t18 = (t0 + 1928);
    xsi_vlogvar_assign_value(t18, t9, 10, 0, 1);
    goto LAB24;

LAB8:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t3, 3, 0, 1);
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t3, 4, 0, 1);
    t9 = (t0 + 2728);
    xsi_vlogvar_assign_value(t9, t3, 5, 0, 1);
    t10 = (t0 + 2568);
    xsi_vlogvar_assign_value(t10, t3, 6, 0, 1);
    t11 = (t0 + 2408);
    xsi_vlogvar_assign_value(t11, t3, 7, 0, 1);
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t3, 8, 0, 1);
    t13 = (t0 + 2088);
    xsi_vlogvar_assign_value(t13, t3, 9, 0, 1);
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t3, 10, 0, 1);
    goto LAB24;

LAB10:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t3, 3, 0, 1);
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t3, 4, 0, 1);
    t9 = (t0 + 2728);
    xsi_vlogvar_assign_value(t9, t3, 5, 0, 1);
    t10 = (t0 + 2568);
    xsi_vlogvar_assign_value(t10, t3, 6, 0, 1);
    t11 = (t0 + 2408);
    xsi_vlogvar_assign_value(t11, t3, 7, 0, 1);
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t3, 8, 0, 1);
    t13 = (t0 + 2088);
    xsi_vlogvar_assign_value(t13, t3, 9, 0, 1);
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t3, 10, 0, 1);
    goto LAB24;

LAB12:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t3, 3, 0, 1);
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t3, 4, 0, 1);
    t9 = (t0 + 2728);
    xsi_vlogvar_assign_value(t9, t3, 5, 0, 1);
    t10 = (t0 + 2568);
    xsi_vlogvar_assign_value(t10, t3, 6, 0, 1);
    t11 = (t0 + 2408);
    xsi_vlogvar_assign_value(t11, t3, 7, 0, 1);
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t3, 8, 0, 1);
    t13 = (t0 + 2088);
    xsi_vlogvar_assign_value(t13, t3, 9, 0, 1);
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t3, 10, 0, 1);
    goto LAB24;

LAB14:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t3, 3, 0, 1);
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t3, 4, 0, 1);
    t9 = (t0 + 2728);
    xsi_vlogvar_assign_value(t9, t3, 5, 0, 1);
    t10 = (t0 + 2568);
    xsi_vlogvar_assign_value(t10, t3, 6, 0, 1);
    t11 = (t0 + 2408);
    xsi_vlogvar_assign_value(t11, t3, 7, 0, 1);
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t3, 8, 0, 1);
    t13 = (t0 + 2088);
    xsi_vlogvar_assign_value(t13, t3, 9, 0, 1);
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t3, 10, 0, 1);
    goto LAB24;

LAB16:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t3, 3, 0, 1);
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t3, 4, 0, 1);
    t9 = (t0 + 2728);
    xsi_vlogvar_assign_value(t9, t3, 5, 0, 1);
    t10 = (t0 + 2568);
    xsi_vlogvar_assign_value(t10, t3, 6, 0, 1);
    t11 = (t0 + 2408);
    xsi_vlogvar_assign_value(t11, t3, 7, 0, 1);
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t3, 8, 0, 1);
    t13 = (t0 + 2088);
    xsi_vlogvar_assign_value(t13, t3, 9, 0, 1);
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t3, 10, 0, 1);
    goto LAB24;

LAB18:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t3, 3, 0, 1);
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t3, 4, 0, 1);
    t9 = (t0 + 2728);
    xsi_vlogvar_assign_value(t9, t3, 5, 0, 1);
    t10 = (t0 + 2568);
    xsi_vlogvar_assign_value(t10, t3, 6, 0, 1);
    t11 = (t0 + 2408);
    xsi_vlogvar_assign_value(t11, t3, 7, 0, 1);
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t3, 8, 0, 1);
    t13 = (t0 + 2088);
    xsi_vlogvar_assign_value(t13, t3, 9, 0, 1);
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t3, 10, 0, 1);
    goto LAB24;

LAB20:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t3, 3, 0, 1);
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t3, 4, 0, 1);
    t9 = (t0 + 2728);
    xsi_vlogvar_assign_value(t9, t3, 5, 0, 1);
    t10 = (t0 + 2568);
    xsi_vlogvar_assign_value(t10, t3, 6, 0, 1);
    t11 = (t0 + 2408);
    xsi_vlogvar_assign_value(t11, t3, 7, 0, 1);
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t3, 8, 0, 1);
    t13 = (t0 + 2088);
    xsi_vlogvar_assign_value(t13, t3, 9, 0, 1);
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t3, 10, 0, 1);
    goto LAB24;

}


extern void work_m_00000000004013128910_2927697330_init()
{
	static char *pe[] = {(void *)Always_26_0,(void *)Always_42_1,(void *)Always_50_2};
	xsi_register_didat("work_m_00000000004013128910_2927697330", "isim/TopModule_tf_isim_beh.exe.sim/work/m_00000000004013128910_2927697330.didat");
	xsi_register_executes(pe);
}
