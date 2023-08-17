/*============================---beg-of-source---============================*/
/*---(headers)---------------------------*/
#include    "yVIHUB.h"
#include    "yVIHUB_priv.h"


static char     (*s_ysrc_sel_live)    (void)                           = NULL;
static char     (*s_ysrc_start)       (char *)                         = NULL;
static char     (*s_ysrc_size)        (short, short)                   = NULL;
static char     (*s_ysrc_push)        (uchar, char*)                   = NULL;
static char     (*s_ysrc_swap)        (char*)                          = NULL;

char
yVIHUB_from_ySRC          (void *f_sel_live, void *f_start, void *f_size, void *f_push, void *f_swap)
{
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   s_ysrc_sel_live     = f_sel_live;
   s_ysrc_start        = f_start;
   s_ysrc_size         = f_size;
   s_ysrc_push         = f_push;
   s_ysrc_swap         = f_swap;
   yVIHUB_yMODE_yvihub_set  (MODE_SOURCE);
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return 0;
}

char
yVIHUB_ySRC_select_islive    (void)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ysrc_sel_live);
   if (s_ysrc_sel_live != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ysrc_sel_live ();
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_ySRC_start        (char *a_prefix)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ysrc_start);
   if (s_ysrc_start != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ysrc_start (a_prefix);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_ySRC_size             (short a_formula, short a_command)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ysrc_size);
   if (s_ysrc_size != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ysrc_size  (a_formula, a_command);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_ySRC_push             (uchar a_sreg, char *a_data)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ysrc_push);
   if (s_ysrc_push != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ysrc_push  (a_sreg, a_data);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_ySRC_swap             (char *a_new)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ysrc_swap);
   if (s_ysrc_swap != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ysrc_swap  (a_new);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}


