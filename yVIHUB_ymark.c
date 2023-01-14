/*============================---beg-of-source---============================*/
/*---(headers)---------------------------*/
#include    "yVIHUB.h"
#include    "yVIHUB_priv.h"



static char     (*s_ymark_hmode)      (uchar, uchar)                   = yvihub_stub;
static char     (*s_ymark_execute)    (uchar*)                         = yvihub_stub;

char
yVIHUB_from_yMARK        (void *f_hmode, void *f_execute)
{
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   s_ymark_hmode      = f_hmode;
   s_ymark_execute    = f_execute;
   yVIHUB_yMODE_yvihub_set  (MODE_SEARCH);
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return 0;
}

char
yVIHUB_yMARK_hmode       (uchar a_major, uchar a_minor)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ymark_hmode);
   if (s_ymark_hmode != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ymark_hmode (a_major, a_minor);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yMARK_execute     (uchar *a_search)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ymark_execute);
   if (s_ymark_execute != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ymark_execute (a_search);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}
