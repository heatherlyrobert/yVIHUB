/*============================---beg-of-source---============================*/
/*---(headers)---------------------------*/
#include    "yVIHUB.h"
#include    "yVIHUB_priv.h"


static char     (*s_yview_keys)       (uchar*)                         = NULL;
static char     (*s_yview_modes)      (uchar*)                         = NULL;
static char     (*s_yview_switch_add) (char,char*,char*,void*,char*)   = NULL;

char
yVIHUB_from_yVIEW        (void *f_keys, void *f_modes, void *f_switch_add)
{
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   s_yview_keys       = f_keys;
   s_yview_modes      = f_modes;
   s_yview_switch_add = f_switch_add;
   yVIHUB_yMODE_yvihub_set  (FMOD_VIEW);
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return 0;
}

char
yVIHUB_yVIEW_keys        (char *a_text)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_yview_keys);
   if (s_yview_keys != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_yview_keys (a_text);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yVIEW_modes       (char *a_text)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_yview_modes);
   if (s_yview_modes != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_yview_modes (a_text);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

char
yVIHUB_yVIEW_switch_add      (char a_part, char *a_opt, char *a_terse, void *a_source, char *a_desc)
{
   /*---(locals)-----------+-----+-----+-*/
   char        rc          =    0;
   /*---(header)-------------------------*/
   DEBUG_YVIHUB   yLOG_enter   (__FUNCTION__);
   /*---(call)---------------------------*/
   DEBUG_YVIHUB   yLOG_point   ("func"      , s_yview_switch_add);
   if (s_yview_switch_add != NULL) {
      DEBUG_YVIHUB   yLOG_note    ("calling");
      rc = s_yview_switch_add (a_part, a_opt, a_terse, a_source, a_desc);
      DEBUG_YVIHUB   yLOG_value   ("rc"        , rc);
   } else {
      DEBUG_YVIHUB   yLOG_note    ("never configured");
   }
   /*---(complete)-----------------------*/
   DEBUG_YVIHUB   yLOG_exit    (__FUNCTION__);
   return rc;
}

