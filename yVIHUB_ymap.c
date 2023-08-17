/*============================---beg-of-source---============================*/
/*---(headers)---------------------------*/
#include    "yVIHUB.h"
#include    "yVIHUB_priv.h"



static char     (*s_ymap_refresh)     (void)                           = NULL;
static char     (*s_ymap_refresh_disp)(void)                           = NULL;
static char     (*s_ymap_refresh_full)(void)                           = NULL;
static char     (*s_ymap_visu_live)   (void)                           = NULL;
static char     (*s_ymap_range)       (char*, char*)                   = NULL;
static char     (*s_ymap_jump)        (short,short,short,short)        = NULL;
static char     (*s_ymap_beg)         (char*,ushort*,ushort*,ushort*,ushort*) = NULL;
static char     (*s_ymap_current)     (char*,ushort*,ushort*,ushort*,ushort*) = NULL;
static char     (*s_ymap_locator)     (char*,ushort*,ushort*,ushort*,ushort*) = NULL;
static char     (*s_ymap_addresser)   (char*,ushort,ushort,ushort,ushort)     = NULL;
static char     (*s_ymap_move_hmode)  (uchar,uchar)                    = NULL;

char
yVIHUB_from_yMAP         (void *f_refresh, void *f_refresh_disp, void *f_refresh_full, void *f_visu_live, void *f_range, void *f_jump, void *f_beg, void *f_current, void *f_locator, void *f_addresser, void *f_move_hmode)
{
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   s_ymap_refresh      = f_refresh;
   s_ymap_refresh_disp = f_refresh_disp;
   s_ymap_refresh_full = f_refresh_full;
   s_ymap_visu_live    = f_visu_live;
   s_ymap_range        = f_range;
   s_ymap_jump         = f_jump;
   s_ymap_beg          = f_beg;
   s_ymap_current      = f_current;
   s_ymap_locator      = f_locator;
   s_ymap_addresser    = f_addresser;
   s_ymap_move_hmode   = f_move_hmode;
   yVIHUB_yMODE_yvihub_set  (MODE_MAP);
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return 0;
}

char
yVIHUB_yMAP_refresh      (void)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ymap_refresh);
   if (s_ymap_refresh != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ymap_refresh ();
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yMAP_refresh_disponly (void)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ymap_refresh_disp);
   if (s_ymap_refresh_disp != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ymap_refresh_disp ();
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yMAP_refresh_full (void)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ymap_refresh_full);
   if (s_ymap_refresh_full != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ymap_refresh_full ();
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yMAP_visual_islive    (void)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ymap_visu_live);
   if (s_ymap_visu_live != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ymap_visu_live ();
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yMAP_range            (char *a_beg, char *a_end)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ymap_range);
   if (s_ymap_range != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ymap_range (a_beg, a_end);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yMAP_jump            (ushort u, ushort x, ushort y, ushort z)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ymap_jump);
   if (s_ymap_jump != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ymap_jump (u, x, y, z);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yMAP_beg             (char *a_label, ushort *u, ushort *x, ushort *y, ushort *z)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ymap_beg);
   if (s_ymap_beg != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ymap_beg (a_label, u, x, y, z);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yMAP_current         (char *a_label, ushort *u, ushort *x, ushort *y, ushort *z)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ymap_current);
   if (s_ymap_current != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ymap_current (a_label, u, x, y, z);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yMAP_locator         (char *a_label, ushort *u, ushort *x, ushort *y, ushort *z)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ymap_locator);
   if (s_ymap_locator != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ymap_locator (a_label, u, x, y, z);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yMAP_addresser       (char *a_label, ushort u, ushort x, ushort y, ushort z)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ymap_addresser);
   if (s_ymap_addresser != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ymap_addresser (a_label, u, x, y, z);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yMAP_move_hmode      (uchar a_major, uchar a_minor)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ymap_move_hmode);
   if (s_ymap_move_hmode != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ymap_move_hmode (a_major, a_minor);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}




