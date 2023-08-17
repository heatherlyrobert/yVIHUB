/*============================---beg-of-source---============================*/
/*---(headers)---------------------------*/
#include    "yVIHUB.h"
#include    "yVIHUB_priv.h"


/*
 *
 *  this is only to support yMODE to untangle a circular relationship. all
 *  other vikeys libraries should use yKEYS directly.
 *
 */

char     yvihub_stub () { return 0; }


static char     (*s_ykeys_init)      (void)                           = NULL;
static char     (*s_ykeys_quit)      (void)                           = NULL;
static char     (*s_ykeys_warning)   (void)                           = NULL;
static char     (*s_ykeys_check_rpt) (void)                           = NULL;
static char     (*s_ykeys_rpt_umode) (uchar, uchar)                   = NULL;
static char     (*s_ykeys_grp_hmode) (uchar, uchar)                   = NULL;
static char     (*s_ykeys_rpt_check) (uchar, uchar, char, char, char) = NULL;

char
yVIHUB_from_yKEYS       (void *f_init, void *f_quit, void *f_warning, void *f_check_rpt, void *f_repeat_umode, void *f_group_hmode, void *f_rpt_check)
{
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   s_ykeys_init      = f_init;
   s_ykeys_quit      = f_quit;
   s_ykeys_warning   = f_warning;
   s_ykeys_check_rpt = f_check_rpt;
   s_ykeys_rpt_umode = f_repeat_umode;
   s_ykeys_grp_hmode = f_group_hmode;
   s_ykeys_rpt_check = f_rpt_check;
   yVIHUB_yMODE_yvihub_set  (FMOD_KEYS);
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return 0;
}

char
yVIHUB_yKEYS_init       (void)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ykeys_init);
   if (s_ykeys_init != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ykeys_init ();
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yKEYS_quit       (void)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ykeys_quit);
   if (s_ykeys_quit != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ykeys_quit ();
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yKEYS_set_warning     (void)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ykeys_warning);
   if (s_ykeys_warning != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ykeys_warning ();
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yKEYS_check_repeat   (void)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ykeys_check_rpt);
   if (s_ykeys_check_rpt != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ykeys_check_rpt ();
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yKEYS_repeat_umode   (uchar a_major, uchar a_minor)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ykeys_rpt_umode);
   if (s_ykeys_rpt_umode != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ykeys_rpt_umode (a_major, a_minor);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yKEYS_group_hmode   (uchar a_major, uchar a_minor)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ykeys_grp_hmode);
   if (s_ykeys_grp_hmode != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ykeys_grp_hmode (a_major, a_minor);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yKEYS_repeat_check   (uchar a_major, uchar a_minor, char a, char b, char c)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ykeys_rpt_check);
   if (s_ykeys_rpt_check != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ykeys_rpt_check (a_major, a_minor, a, b, c);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}



