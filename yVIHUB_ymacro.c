/*============================---beg-of-source---============================*/
/*---(headers)---------------------------*/
#include    "yVIHUB.h"
#include    "yVIHUB_priv.h"


static char   s_macro_mode = '-';

char
yvihub_ymacro_stub     (void)
{
   return s_macro_mode;
}

char
yVIHUB_unit_macro_mode   (char a_mode)
{
   s_macro_mode = a_mode;
   return 0;
}


static char     (*s_ymacro_hmode)     (uchar, uchar)                   = NULL;
static char     (*s_ymacro_rec_mode)  (void)                           = yvihub_ymacro_stub;
static char     (*s_ymacro_rec_key)   (uchar, uchar)                   = NULL;
static char     (*s_ymacro_exe)       (uchar)                          = NULL;
static char     (*s_ymacro_exe_mode)  (void)                           = yvihub_ymacro_stub;
static char     (*s_ymacro_exe_pos)   (char*, short *)                 = NULL;
static char     (*s_ymacro_exe_cur)   (uchar*, short*, short *, uchar*, uchar*)  = NULL;
static char     (*s_ymacro_exe_repos) (int)                            = NULL;
static char     (*s_ymacro_agrios)    (uchar, uchar)                   = NULL;

char
yVIHUB_from_yMACRO       (void *f_hmode, void *f_rec_mode, void *f_rec_key, void *f_exe, void *f_exe_mode, void *f_exe_pos, void *f_exe_cur, void *f_exe_repos, void *f_agrios)
{
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   s_ymacro_hmode     = f_hmode;
   s_ymacro_rec_mode  = f_rec_mode;
   s_ymacro_rec_key   = f_rec_key;
   s_ymacro_exe       = f_exe;
   s_ymacro_exe_mode  = f_exe_mode;
   s_ymacro_exe_pos   = f_exe_pos;
   s_ymacro_exe_cur   = f_exe_cur;
   s_ymacro_exe_repos = f_exe_repos;
   s_ymacro_agrios    = f_agrios;
   yVIHUB_yMODE_yvihub_set  (SMOD_MACRO);
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return 0;
}

char
yVIHUB_yMACRO_hmode      (uchar a_major, uchar a_minor)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ymacro_hmode);
   if (s_ymacro_hmode != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ymacro_hmode (a_major, a_minor);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
      switch (a_minor) {
      case '@'      :
         DEBUG_YMODE   yLOG_note    ("macro execution");
         yMODE_enter  (SMOD_MACRO   );
         rc = a_minor;
         break;
      case 'q'      :
         DEBUG_YMODE   yLOG_note    ("begin macro recording");
         yMODE_enter  (SMOD_MACRO   );
         rc = a_minor;
         break;
      case 'Q'      :
         DEBUG_YMODE   yLOG_note    ("reset macro recording");
         break;
      }
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yMACRO_rec_mode   (char *a_test)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   char        x_mode      =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ymacro_rec_mode);
   if (s_ymacro_rec_mode != yvihub_ymacro_stub) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      x_mode = s_ymacro_rec_mode ();
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
      if (x_mode > 0)   rc = x_mode;
      else              rc = '-';
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
      if        (strcmp (a_test, "record"  ) == 0) {
         if (s_macro_mode == 'r')  rc = 1;
      }
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yMACRO_rec_key    (uchar a_key, uchar a_mode)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ymacro_rec_key);
   if (s_ymacro_rec_key != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ymacro_rec_key (a_key, a_mode);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yMACRO_exec       (uchar a_play)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ymacro_exe);
   if (s_ymacro_exe != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ymacro_exe (a_play);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yMACRO_exe_mode   (char *a_test)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   char        x_mode      =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_info    ("a_test"    , a_test);
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ymacro_exe_mode);
   if (s_ymacro_exe_mode != yvihub_ymacro_stub) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      x_mode = s_ymacro_exe_mode ();
      DEBUG_YVIHUB   yLOG_char    ("x_mode"    , x_mode);
      if (x_mode > 0) {
         if        (strcmp (a_test, "stop"    ) == 0) {
            DEBUG_YVIHUB   yLOG_note    ("testing stop");
            if (x_mode == '-')  rc = 1;
         } else if (strcmp (a_test, "run"     ) == 0) {
            DEBUG_YVIHUB   yLOG_note    ("testing run");
            if (x_mode == 'M')  rc = 1;
         } else if (strcmp (a_test, "playback") == 0) {
            DEBUG_YVIHUB   yLOG_note    ("testing playback");
            if (x_mode == 'P')  rc = 1;
         } else if (strcmp (a_test, "playing" ) == 0) {
            DEBUG_YVIHUB   yLOG_note    ("testing playing");
            if (x_mode != '-')  rc = 1;
         } else if (strcmp (a_test, "notplay" ) == 0) {
            DEBUG_YVIHUB   yLOG_note    ("testing not playing");
            if (x_mode == '-')  rc = 1;
         } else if (strcmp (a_test, "show"    ) == 0) {
            DEBUG_YVIHUB   yLOG_note    ("testing show");
            rc = x_mode;
         }
      }
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
      x_mode = s_macro_mode;
      if        (strcmp (a_test, "stop"    ) == 0) {
         DEBUG_YVIHUB   yLOG_note    ("testing stop");
         if (x_mode == '-')  rc = 1;
      } else if (strcmp (a_test, "run"     ) == 0) {
         DEBUG_YVIHUB   yLOG_note    ("testing run");
         if (x_mode == 'M')  rc = 1;
      } else if (strcmp (a_test, "playback") == 0) {
         DEBUG_YVIHUB   yLOG_note    ("testing playback");
         if (x_mode == 'P')  rc = 1;
      } else if (strcmp (a_test, "playing" ) == 0) {
         DEBUG_YVIHUB   yLOG_note    ("testing playing");
         if (x_mode != '-')  rc = 1;
      } else if (strcmp (a_test, "notplay" ) == 0) {
         DEBUG_YVIHUB   yLOG_note    ("testing not playing");
         if (x_mode == '-')  rc = 1;
      } else if (strcmp (a_test, "show"    ) == 0) {
         DEBUG_YVIHUB   yLOG_note    ("testing show");
         rc = x_mode;
      }
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yMACRO_exe_pos    (char *a_name, short *a_pos)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ymacro_exe_pos);
   if (s_ymacro_exe_pos != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ymacro_exe_pos (a_name, a_pos);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yMACRO_exe_cur    (uchar *a_abbr, short *a_len, short *a_pos, uchar *a_prev, uchar *a_curr)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ymacro_exe_cur);
   if (s_ymacro_exe_cur != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ymacro_exe_cur (a_abbr, a_len, a_pos, a_prev, a_curr);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yMACRO_exe_repos  (int a_pos)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ymacro_exe_repos);
   if (s_ymacro_exe_repos != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ymacro_exe_repos (a_pos);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yMACRO_agrios     (uchar a_major, uchar a_minor)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ymacro_agrios);
   if (s_ymacro_agrios != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ymacro_agrios (a_major, a_minor);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

