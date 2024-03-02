/*============================----beg-of-source---============================*/
#ifndef yVIHUB
#define yVIHUB yes


#include    "yVIHUB_solo.h"


typedef  unsigned char        uchar;
typedef  unsigned short       ushort;




/*===[[ yVIHUB_init.c ]]======================================================*/
/*··········´·······················´····´····································*/
char        yVIHUB_init             (char a_env, char *a_title, char *a_version, char a_mode, void *f_cleanse, void *f_prep, void *f_cursor, void *f_refresh);
/*---(done)-----------------*/



/*===[[ yVIHUB_ymode.c ]]=====================================================*/
/*··········´·······················´····´····································*/
/*---(configure)------------*/
char        yVIHUB_from_yMODE            (void *f_yvihub);
/*---(use)------------------*/
char        yVIHUB_yMODE_yvihub_set      (char a_abbr);
/*---(done)-----------------*/



/*===[[ yVIHUB_ykeys.c ]]=====================================================*/
/*··········´·······················´····´····································*/
/*---(configure)------------*/
char        yVIHUB_from_yKEYS            (void *f_init, void *f_quit, void *f_warning, void *f_check_rpt, void *f_repeat_umode, void *f_group_hmode, void *f_rpt_check);
/*---(use)------------------*/
char        yVIHUB_yKEYS_init            (void);
char        yVIHUB_yKEYS_quit            (void);
char        yVIHUB_yKEYS_set_warning     (void);
char        yVIHUB_yKEYS_check_repeat    (void);
char        yVIHUB_yKEYS_repeat_umode    (uchar a_major, uchar a_minor);
char        yVIHUB_yKEYS_group_hmode     (uchar a_major, uchar a_minor);
char        yVIHUB_yKEYS_repeat_check    (uchar a_major, uchar a_minor, char a, char b, char c);
/*---(done)-----------------*/



/*===[[ yVIHUB_ymacro.c ]]====================================================*/
/*··········´·······················´····´····································*/
/*---(configure)------------*/
char        yVIHUB_from_yMACRO           (void *f_hmode, void *f_rec_mode, void *f_rec_key, void *f_exe, void *f_exe_mode, void *f_exe_pos, void *f_exe_cur, void *f_exe_repos, void *f_agrios);
/*---(use)------------------*/
char        yVIHUB_yMACRO_hmode          (uchar a_major, uchar a_minor);
char        yVIHUB_yMACRO_rec_mode       (char *a_test);
char        yVIHUB_yMACRO_rec_key        (uchar a_key, uchar a_mode);
char        yVIHUB_yMACRO_exec           (uchar a_play);
char        yVIHUB_yMACRO_exe_mode       (char *a_test);
char        yVIHUB_yMACRO_exe_pos        (char *a_name, short *a_pos);
char        yVIHUB_yMACRO_exe_cur        (uchar *a_abbr, short *a_len, short *a_pos, uchar *a_prev, uchar *a_curr);
char        yVIHUB_yMACRO_exe_repos      (int a_pos);
char        yVIHUB_yMACRO_agrios         (uchar a_major, uchar a_minor);
/*---(macros)---------------*/
#define     IF_MACRO_OFF         if (yVIHUB_yMACRO_exe_mode ("stop")     == 1)
#define     IF_MACRO_PLAYBACK    if (yVIHUB_yMACRO_exe_mode ("playback") == 1)
#define     IF_MACRO_PLAYING     if (yVIHUB_yMACRO_exe_mode ("playing")  == 1)
#define     IF_MACRO_NOT_PLAYING if (yVIHUB_yMACRO_exe_mode ("notplay")  == 1)
#define     IF_MACRO_RECORDING   if (yVIHUB_yMACRO_rec_mode ("record")   == 'r')
#define     IF_MACRO_ANYTHING    if (yVIHUB_yMACRO_exe_mode ("stop")     != 1 || yVIHUB_yMACRO_rec_mode ("record")  == 'r')
/*---(unittest)-------------*/
char        yVIHUB_unit_macro_mode       (char a_mode);
/*---(done)-----------------*/



/*===[[ yVIHUB_yview.c ]]=====================================================*/
/*··········´·······················´····´····································*/
/*---(configure)------------*/
char        yVIHUB_from_yVIEW            (void *f_keys, void *f_modes, void *f_switch_add, void *f_history, void *f_stats, void *f_direct);
/*---(use)------------------*/
char        yVIHUB_yVIEW_keys            (char *a_text);
char        yVIHUB_yVIEW_modes           (char *a_text);
char        yVIHUB_yVIEW_switch_add      (char a_part, char *a_opt, char *a_terse, void *a_source, char *a_desc);
char        yVIHUB_yVIEW_history         (char a_mode, char *a_text);
char        yVIHUB_yVIEW_stats           (char a_rc, short a_count);
char        yVIHUB_yVIEW_direct          (char *b_text);
/*---(done)-----------------*/



/*===[[ yVIHUB_ymap.c ]]======================================================*/
/*··········´·······················´····´····································*/
/*---(configure)------------*/
char        yVIHUB_from_yMAP             (void *f_refresh, void *f_refresh_disp, void *f_refresh_full, void *f_visu_live, void *f_range, void *f_jump, void *f_beg, void *f_current, void *f_locator, void *f_addresser, void *f_move_hmode);
/*---(use)------------------*/
char        yVIHUB_yMAP_refresh          (void);
char        yVIHUB_yMAP_refresh_disponly (void);
char        yVIHUB_yMAP_refresh_full     (void);
char        yVIHUB_yMAP_visual_islive    (void);
char        yVIHUB_yMAP_range            (char *a_beg, char *a_end);
char        yVIHUB_yMAP_jump             (ushort u, ushort x, ushort y, ushort z);
char        yVIHUB_yMAP_beg              (char *a_label, ushort *u, ushort *x, ushort *y, ushort *z);
char        yVIHUB_yMAP_current          (char *a_label, ushort *u, ushort *x, ushort *y, ushort *z);
char        yVIHUB_yMAP_locator          (char *a_label, ushort *u, ushort *x, ushort *y, ushort *z);
char        yVIHUB_yMAP_addresser        (char *a_label, ushort u, ushort x, ushort y, ushort z);
char        yVIHUB_yMAP_move_hmode       (uchar a_major, uchar a_minor);
/*---(done)-----------------*/



/*===[[ yVIHUB_ysrc.c ]]======================================================*/
/*··········´·······················´····´····································*/
/*---(configure)------------*/
char        yVIHUB_from_ySRC             (void *f_sel_live, void *f_start, void *f_size, void *f_push, void *f_swap);
/*---(use)------------------*/
char        yVIHUB_ySRC_select_islive    (void);
char        yVIHUB_ySRC_start            (char *a_prefix);
char        yVIHUB_ySRC_size             (short a_formula, short a_command);
char        yVIHUB_ySRC_push             (uchar a_sreg, char *a_data);
char        yVIHUB_ySRC_swap             (char *a_new);
/*---(done)-----------------*/



/*===[[ yVIHUB_ycmd.c ]]======================================================*/
/*··········´·······················´····´····································*/
/*---(configure)------------*/
char        yVIHUB_from_yCMD             (void *f_direct, void *f_add);
/*---(use)------------------*/
char        yVIHUB_yCMD_direct           (uchar *a_command);
char        yVIHUB_yCMD_add              (uchar a_menu, uchar *a_name, uchar *a_abbr, uchar *a_terms, void *a_func, uchar *a_desc);
/*---(done)-----------------*/



/*===[[ yVIHUB_ycmd.c ]]======================================================*/
/*··········´·······················´····´····································*/
/*---(configure)------------*/
char        yVIHUB_from_yMARK            (void *f_hmode, void *f_execute);
/*---(use)------------------*/
char        yVIHUB_yMARK_hmode           (uchar a_major, uchar a_minor);
char        yVIHUB_yMARK_execute         (uchar *a_search);
/*---(done)-----------------*/



/*===[[ yVIHUB_yfile.c ]]=====================================================*/
/*··········´·······················´····´····································*/
/*---(configure)------------*/
char        yVIHUB_from_yFILE            (void *f_dump_add);
/*---(use)------------------*/
char        yVIHUB_yFILE_dump_add        (char *a_name, char *a_terse, char *a_desc, void *a_provider);
/*---(done)-----------------*/





#endif
