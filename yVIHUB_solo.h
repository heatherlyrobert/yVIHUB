/*===[[ yMODE ]]==============================================================*/
/*---(foundation)------------------------*/
#define     FMOD_STATUS    '5'
#define     FMOD_FILE      'F'
#define     FMOD_MODE      '0'
#define     FMOD_KEYS      'L'
#define     FMOD_VIEW      'V'
#define     MODE_NONE      '-'
/*---(major modes)-----------------------*/
#define     MODE_GOD       'G'
#define     MODE_OMNI      'O'
#define     MODE_PROGRESS  'P'
#define     MODE_MAP       'M'
#define     MODE_SOURCE    'S'
#define     MODE_COMMAND   ':'
#define     MODE_SEARCH    '/'
#define     MODES_ONELINE  "S:/;"
#define     MODES_EDITING  "S:/;triw"
#define     MODES_GROUPING "GOPMS9"
/*---(sub-modes)-------------------------*/
#define     SMOD_ERROR     'e'    /* error reporting and actions              */
#define     SMOD_MREG      'R'    /* register actions                         */
#define     SMOD_SREG      't'    /* text register actions                    */
#define     SMOD_HINT      ';'    /* hint labels                              */
#define     SMOD_TAGS      '+'    /* grouping tags                            */
#define     SMOD_MACRO     '@'    /* macro processing                         */
#define     SMOD_MENUS     'g'    /* show menu system (gui)                   */
#define     SMOD_FILTER    '!'    /* data filtering                           */
/*---(micro-modes)-----------------------*/
#define     UMOD_UNIVERSE  ','    /* selecting universes, tabs, buffers       */
#define     UMOD_SUNDO     'u'    /* incremental text change undo/redo        */
#define     UMOD_MUNDO     'm'    /* incremental map change undo/redo         */
#define     UMOD_HISTORY   'H'    /* dislay command/search history            */
#define     UMOD_MARK      '\''   /* location and object marking              */
#define     UMOD_VISUAL    'v'    /* visual selection history                 */
#define     UMOD_REPLACE   'r'    /* replacing characters in source mode      */
#define     UMOD_INPUT     'i'    /* direct input of text                     */
#define     UMOD_WANDER    'w'    /* formula creation by pointing             */
#define     UMOD_SENDKEYS  'k'    /* sending keys (but pacing them)           */
/*---(pre-mode)--------------------------*/
#define     PMOD_REPEAT    '9'    /* accumulate multiplier                    */
/*---(external-modes)--------------------*/
#define     XMOD_FORMAT    '$'    /* content formatting                       */
#define     XMOD_PALETTE   'p'    /* palette/coloration                       */
#define     XMOD_UNITS     'K'    /* content units for scaling                */
#define     XMOD_OBJECT    'o'    /* object formatting                        */
/*---(done)------------------------------*/


/*===[[ yMACRO ]]=============================================================*/
/*---(speeds)----------*/
#define     MACRO_BLITZ        '0'
#define     MACRO_BLUR         '1'
#define     MACRO_THOU         '2'
#define     MACRO_HUND         '3'
#define     MACRO_TWENTY       '4'
#define     MACRO_TENTH        '5'
#define     MACRO_HALF         '6'
#define     MACRO_SEC          '7'
#define     MACRO_DOUBLE       '8'
#define     MACRO_TRIPLE       '9'
#define     MACRO_DELAYS       "0123456789"
/*---(updates)---------*/
#define     MACRO_FAST         'f'  /* fast   updates */
#define     MACRO_NORMAL       'n'  /* normal updates */
#define     MACRO_SLOWER       's'  /* slower updates */
#define     MACRO_BLINKS       'b'  /* stop action looking */
#define     MACRO_PEEKS        'p'  /* very slow screen updates */
#define     MACRO_BLIND        'd'  /* no screen updates */
#define     MACRO_UPDATES      "fnsbpd"
/*---(mode)------------*/
#define     MACRO_STOP         '-'      /* normal keyboard input              */
#define     MACRO_RUN          'M'      /* macro running with redisplay       */
#define     MACRO_DELAY        'D'      /* macro delay playback controls      */
#define     MACRO_PLAYBACK     'P'      /* macro under playback controls      */




/*===[[ YVIKEYS ]]============================================================*/
#define      YVIHUB_NONE        '-'
#define      YVIHUB_OPENGL      'g'
#define      YVIHUB_CURSES      'c'
#define      YVIHUB_ENVS        "gc"


#define      YVIHUB_RIGHT       'r'
#define      YVIHUB_OFFICE      'o'


/*===[[ YVIKEYS -- MENUS ]]===================================================*/
/*---(primary menus)------------------*//* microsoft, google, gnu, apple */
#define      YVIHUB_M_FILE      'f'
#define      YVIHUB_M_EDIT      'e'
#define      YVIHUB_M_VIEW      'v'
#define      YVIHUB_M_INSERT    'i'
#define      YVIHUB_M_FORMAT    'o'
/*---(extended menus)-----------------*//* microsoft, google, gnu, apple */
#define      YVIHUB_M_BUFFERS   'b'   /* replaces window */
#define      YVIHUB_M_DATASET   'd'   /* includes filters menu */
#define      YVIHUB_M_TOOLS     't'
/*---(more advanced)------------------*/
#define      YVIHUB_M_LAYERS    'l'   /* gimp  */
#define      YVIHUB_M_SELECT    's'   /* gimp  */
#define      YVIHUB_M_MODIFY    'm'
#define      YVIHUB_M_PALETTE   'p'
#define      YVIHUB_M_LANG      'g'
#define      YVIHUB_M_AUDIT     'a'
#define      YVIHUB_M_EXECUTE   'x'   /* build, test, and execute (use) */
#define      YVIHUB_M_CONFIG    'c'
/*---(perhaps useful)-----------------*/
#define      YVIHUB_M_SCRIPT    'r'   /* keyboard macros and scripts      */
#define      YVIHUB_M_SHOW      'h'   /* slideshow, present, printing     */
/*---(default)------------------------*/
#define      YVIHUB_M_NONE      ' '
/*---(done)---------------------------*/

