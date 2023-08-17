/*============================---beg-of-source---============================*/
/*---(headers)---------------------------*/
#include    "yVIHUB.h"
#include    "yVIHUB_priv.h"



static char     (*s_ycmd_direct)      (uchar*)                                   = NULL;
static char     (*s_ycmd_add)         (uchar,uchar*,uchar*,uchar*,void*,uchar*)  = NULL;

char
yVIHUB_from_yCMD          (void *f_direct, void *f_add)
{
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   s_ycmd_direct       = f_direct;
   s_ycmd_add          = f_add;
   yVIHUB_yMODE_yvihub_set  (MODE_COMMAND);
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return 0;
}

char
yVIHUB_yCMD_direct       (uchar *a_command)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ycmd_direct);
   if (s_ycmd_direct != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ycmd_direct   (a_command);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yCMD_add              (uchar a_menu, uchar *a_name, uchar *a_abbr, uchar *a_terms, void *a_func, uchar *a_desc)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_ycmd_add);
   if (s_ycmd_add != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_ycmd_add   (a_menu, a_name, a_abbr, a_terms, a_func, a_desc);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}




